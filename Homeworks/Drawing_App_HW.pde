//Drawing App HW
//On mouse pressed, the line will drag following the mouse
//pressing the key "r" will change color to red, "g" to green, "b" to blue
//Pressing "e" will draw and ellips at mouse position
//Pressing "s" will draw a square at mouse position


int thickness = 100;

void setup() {
  size(600, 600);
  background(0); 
}

void draw() {
  
}

void keyPressed() {
  println(key); 
  if (key == 'r') {
    stroke(255, 0, 0);  
  }
  if (key == 'g') {
    stroke(0, 255, 0); 
  }
  if (key == 'b') {
    stroke(0, 0, 255); 
  }
  if (key == 'w') {
    stroke(255);
  }
  if (key == 'e'){
    ellipse(mouseX, mouseY, 100, 100);
  }
  if (key == 's') {
    rect(mouseX, mouseY, 50, 50);
  }

  if (keyCode == UP) {
    // increase the value of thickness by one
    thickness = thickness + 1;
    // use that inside of strokeWeight so our line
    // grows
    strokeWeight(thickness);
    // print out the value so we know it
    println("thickness:", thickness);
  }

  if (keyCode == DOWN) {
    // we never want thickness to go to -1
    // because it will crash our app
    if (thickness > 0) {
      thickness = thickness - 1;
      strokeWeight(thickness);
    }
    // print out the value so we know it
    println("thickness:", thickness);
  }
 
}


void mouseDragged() {

  // draw a line from where the mouse is now
  // to where it was last frame
  line(mouseX, mouseY, pmouseX, pmouseY);
  //ellipse(mouseX, mouseY, 10, 10);
}

void mousePressed(){
  
  if (mousePressed) {
    stroke(255);
  } else {
    stroke(0);
  }
 line(mouseX, mouseY, pmouseX, pmouseY);
  
}
