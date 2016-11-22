var video;
var x, y;
var counter = 0;
var domImg;

function setup() {

  // Make a canvas
  createCanvas(640, 480);
  background(0);
  video = createCapture(VIDEO);
  video.hide();
  // Make a video elements
}

function mousePressed() {
  snap();
  displayImages();
}

function displayImages() {
  stroke(0, 255, 255);
  strokeWeight(10);
  noFill();
  var newImg = image(video, x, y, width / 2, height / 2);
  
  var newerImg = createImage(newImg);
  newerImg.loadPixels();
 newerImg.updatePixels();
  
  rect(x, y, width / 2, height / 2);
  print(counter);
  
  domImg = createImg(newerImg);
  
}
// Copy a snapshot of the video onto the canvas
function snap() {
  if (counter == 0) {
    x = 0;
    y = 0;
  }

  if (counter == 1) {
    x = width / 2;
    y = 0;
  }

  if (counter == 2) {
    x = 0;
    y = height / 2;
  }
  if (counter == 3) {
    x = width / 2;
    y = height / 2;
  }
  counter++;
  counter = counter % 4;

}