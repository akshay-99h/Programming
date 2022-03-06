var run = require('tape').test
var mkdom = require('mkdom')
var el = require('../../')

var list = '<ul class="navigation">\n  <li>Some existing item</li>\n</ul>\n'
var item = '<li class="item">\n  <a href="/items/1">Item 1</a>\n</li>\n'
var subitem = '<strong>Bad</strong>\n'

module.exports = function(ignoreWhitespace) {
 
  run('append', function(test) {
    var expected = (ignoreWhitespace ? 
      '<ul class="navigation">\n  <li>Some existing item</li>\n<li class="item">\n  <a href="/items/1">Item 1</a>\n</li></ul>' :
      '<ul class="navigation">\n  <li>Some existing item</li>\n  <li class="item">\n    <a href="/items/1">Item 1</a>\n  </li>\n</ul>'
    )
    
    var ul = mkdom(list)
    var li = mkdom(item)

    el.append(ul, li)

    test.equal(ul.outerHTML, expected, expected)
    test.end()
  })
  
  run('prepend', function(test) {
    var expected = (ignoreWhitespace ?
      '<ul class=\"navigation\"><li class=\"item\">\n  <a href=\"/items/1\">Item 1</a>\n</li>\n  <li>Some existing item</li>\n</ul>' :
      '<ul class="navigation">\n  <li class="item">\n    <a href="/items/1">Item 1</a>\n  </li>\n  <li>Some existing item</li>\n</ul>'
    )

    var ul = mkdom(list)
    var li = mkdom(item)

    el.prepend(ul, li)

    test.equal(ul.outerHTML, expected, expected)
    test.end()
  })
  
  run('before', function(test) {
    var expected = (ignoreWhitespace ?
      '<ul class=\"navigation\">\n  <li class=\"item\">\n  <strong>Bad</strong><a href=\"/items/1\">Item 1</a>\n</li><li>Some existing item</li>\n</ul>' :
      '<ul class="navigation">\n  <li class="item">\n    <strong>Bad</strong>\n    <a href="/items/1">Item 1</a>\n  </li>\n  <li>Some existing item</li>\n</ul>'
    )

    var ul = mkdom(list)
    var li = mkdom(item)
    var strong = mkdom(subitem)

    el.before(li.querySelector('a'), strong)
    el.before(ul.querySelector('li'), li)

    test.equal(ul.outerHTML, expected, expected) 
    test.end()
  })

  run('after', function(test) {
    var expected = (ignoreWhitespace ? 
      '<li class=\"item\">\n  <a href=\"/items/1\">Item 1</a>\n<strong>Bad</strong></li>' :
      '<li class="item">\n  <a href="/items/1">Item 1</a>\n  <strong>Bad</strong>  \n</li>'
    )

    var li = mkdom(item)
    var strong = mkdom(subitem)

    el.after(li.querySelector('a'), strong)

    test.equal(li.outerHTML, expected, expected) 
    test.end()
  })
  
  run('insert', function(test) {
    var expected = (ignoreWhitespace ?
      '<ul class=\"navigation\"><li class=\"item\"><strong>Bad</strong></li></ul>' : 
      '<ul class="navigation">\n  <li class="item">\n    <strong>Bad</strong>\n  </li>\n</ul>'
    )

    var ul = mkdom(list)
    var li = mkdom(item)
    var strong = mkdom(subitem)

    el.insert(li, strong)
    el.insert(ul, li)

    test.equal(ul.outerHTML, expected, expected)
    test.end()
  })

  run('no existing whitespace', function(test) {
    var expected = (ignoreWhitespace ?
       '<strong>Bad<strong>Bad</strong></strong>' :  
       '<strong>Bad\n  <strong>Bad</strong>\n</strong>'
    )

    var strong = mkdom(subitem)

    el.append(strong, strong.cloneNode(true))

    test.equal(strong.outerHTML, expected, expected)
    test.end()
  })

  run('no existing whitespace with set', function(test) {
    var expected = (ignoreWhitespace ?
      '<strong>Bad<strong>Bad</strong></strong>' : 
      '<strong>Bad\n\t<strong>Bad</strong>\n</strong>'
    )

    var strong = mkdom(subitem)

    el.set('\t')
    el.append(strong, strong.cloneNode(true))

    test.equal(strong.outerHTML, expected, expected)
    test.end()
  })
 
}
