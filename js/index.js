console.log("We are learning JAVASCRIPT");
document.getElementById("hi we are learning js");
var x = true;
var y = false;
if (x > y) {
  document.getElementById("hello");
}
result = x && y;
document.getElementById(!result);
function alertbox() {
  alert("Hello World!");
}
function promptbox() {
  document.getElementById(
    prompt("Trying my first prompt-box, try typing someting", "anything")
  );
}

function myFunction() {
  confirm("Do you want to continue?");
}

function initMap() {
  map = new google.maps.Map(document.getElementById("map"), {
    center: {
      lat: -34.397,
      lng: 150.644,
    },
    zoom: 8,
  });
}
