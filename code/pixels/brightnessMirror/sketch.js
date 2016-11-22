var video;

// A variable for the color we are searching for.
var trackColor;

var scl = 64;

function setup() {
  createCanvas(640, 480);
  // devicePixelScaling(false);
  video = createCapture(VIDEO);
  video.size(320, 240);
  // The above function actually makes a separate video
  // element on the page.  The line below hides it since we are
  // drawing the video to the canvas
  // video.hide();

  // Start off tracking for red
  trackColor = [255, 0, 0];
}

function draw() {

background(0);
  // Draw the video
   push();
   translate(video.width, 0);
   scale(-1.0, 1.0);
 // image(video, 0, 0);
   pop();

  // We are going to look at the video's pixels
  video.loadPixels();

  // Before we begin searching, the "world record" for closest color is set to a high number that is easy for the first pixel to beat.
  var worldRecord = 500;

  // XY coordinate of closest color
  var closestX = 0;
  var closestY = 0;

  for (var y = 0; y < video.height; y+=scl) {
    for (var x = 0; x < video.width; x+=scl) {

      var loc = (x + y * video.width) * 4;
      //var loc = (x + y * video.width) * 4;
      // The functions red(), green(), and blue() pull out the three color components from a pixel.
      var r = video.pixels[loc];
      var g = video.pixels[loc + 1];
      var b = video.pixels[loc + 2];
      var a1 = video.pixels[loc + 3];

      var bright = (r+g+b)/3;
      var mp = map(bright,0,255,0,scl);
     
      noStroke();
      fill(255);
      rect(x,y,mp,mp);


    }
  }


}


function mousePressed() {
  // Save color where the mouse is clicked in trackColor variable
  trackColor = video.get(map(mouseX,0,width,width,0), mouseY);
  console.log(trackColor);
}