var sections = [["#course","#course-detailed"],["#schedule" ,"#schedule-detailed"],["#labs" , "#labs-detailed"],["#resources" , "#resources-detailed"],["#students" , "#students-detailed"]];
	

var trigger;


var canvas;
var y = 0;
var glo = false;

function setup(){

	var hider = select(sections[0][1]);
	hider.hide();

	// canvas = createCanvas(windowWidth,windowHeight);
	// canvas.position(0,0);
	

 //   	for (var i = sections.length - 1; i >= 0; i--) {
	// 	var hider = select(sections[i][1]);
	// 	hider.hide();
	// }

}

		

function draw(){
	
}


function toggleDiv(divy){
	$(divy.childNodes[5]).toggle(350); 
}


// function Floaty(x,y,xy,sy ){


// }

// function glow(){
// 	if (y >= 255){
// 		glo = true;
		
// 	}
// 	if (y <= 0){
// 		glo =false;
	
// 	}

// 	if (glo){
// 		y-- ;
// 	}else{
// 		y++
// 	}
// }
