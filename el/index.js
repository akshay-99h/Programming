var detect = require('detect-indent')

var indent = '  '
var trimEnd = function(string) {
  return string.replace(/\s+$/, '')
}
var lines = function(string) {
  return string.split(/\n|\n\r/)
}

// This helps with cloned nodes whose
// whitespace has gotten out of whack.
var balance = function(lines) {
  var whitespace = /^(\s+)/
  var trailing = lines[lines.length - 1].match(whitespace)
 
  if (!trailing) {
    return lines
  }

  var indent = trailing[0]
  return lines.map(function(line) {
    return line.replace(
      RegExp('^' + indent), ''
    ) 
  })
}

var el = function(target, element, position) {
  var level = 1
  var first = target
  var previous = target
  
  // Find indentation level of the target node 
  while (previous = previous.parentNode) {

    // Only take element nodes into account
    if (previous.nodeType === 1) {
      
      // Ignore root element in partial documents,
      // for they are unfortunate domification cruft.
      var domifyRoot = previous.nodeName === 'MKDOM'
      var jsdomifyRoot = (
        previous.nodeName === 'HTML' &&
        !previous.parentNode.doctype
      )
      if (domifyRoot || jsdomifyRoot) {
        continue
      }

      first = previous
      level++
    }

  }

  if (position !== 'before' && position !== 'after') {
    level++
  }
  
  // Determine indent size of target document
  // eg. One tab or four spaces
  indent = detect(first.outerHTML) || indent

  // Handle document fragments
  if (/fragment/.test(element.nodeName)) {
    element = element.childNodes
  }
  
  // Get each line of the to-be-inserted html
  var all = []
  if (element.length > 1) {
    var nodes = Array.prototype.slice.call(element)
    nodes.forEach(function(node) {
      if (node.nodeType === 1) {
        lines(node.outerHTML).forEach(function(line) {
          all.push(line)
        })
      }
    })
  }

  else {
    all = lines(element.outerHTML)
  }

  var output = []
  balance(all).forEach(function(line) {
    // Remove empty lines
    if (!/^\s+$/.test(line)) {
      // Prepend indentation
      output.push(
        Array(level).join(indent) + line
      )
    }
  })

  // Insert HTML and reset the trailing indentation
  if (position === 'append') {
    target.innerHTML =
      trimEnd(target.innerHTML) + '\n' +
      output.join('\n') + '\n' +
      Array(level - 1).join(indent)
  }

  else if (position === 'prepend') {
    target.innerHTML =
      '\n' + output.join('\n') +
      target.innerHTML
  }

  else if (position === 'before' || position === 'after') {
    var firstLine = lines(target.outerHTML)[0]
    var parentHTML = target.parentNode.innerHTML
    var start = (
      position === 'before' ?
        parentHTML.indexOf(firstLine) :
        parentHTML.indexOf(firstLine) + target.outerHTML.length
    )

    target.parentNode.innerHTML =
      trimEnd(parentHTML.substr(0, start)) + '\n' +
      output.join('\n') +
      (position === 'before' ? '\n' : '') +
      Array(level).join(indent) +
      parentHTML.substr(start)
  }

  else if (position === 'insert') {
    // Align the target's closing tag
    target.innerHTML =
      '\n' + output.join('\n') + '\n' +
      Array(level - 1).join(indent)
  }
}

module.exports = {
  prepend: function(target, element) {
    el(target, element, 'prepend')
  },
  append: function(target, element) {
    el(target, element, 'append')  
  },
  before: function(target, element) {
    el(target, element, 'before')  
  },
  after: function(target, element) {
    el(target, element, 'after')  
  },
  insert: function(target, element) {
    el(target, element, 'insert')  
  },
  set: function(type) {
    indent = type 
  }
}
