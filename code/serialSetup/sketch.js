var serial;
var inData;

var options = {
  baudrate: 9600
};
var portName = '/dev/cu.usbmodem621';


function setup() {
  serial = new p5.SerialPort(); // make a new instance of the serialport library
  serial.on('connected', serverConnected); // callback for connecting to the server
  serial.on('open', portOpen); // callback for the port opening
  serial.on('data', serialEvent); // callback for when new data arrives
  serial.on('error', serialError); // callback for errors
  serial.on('close', portClose); // callback for the port closing
  serial.open(portName, options); // open a serial port
}


function draw() {
 
}



function serialError(err) {
  println('Something went wrong with the serial port. ' + err);
}
 
function portClose() {
  println('The serial port closed.');
}


function serialEvent() {
 
}

function serverConnected() {
  println('connected to server.');
}
 
function portOpen() {
  println('the serial port opened.')
}
 