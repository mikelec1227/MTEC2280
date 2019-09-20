/* Mike Lecolant
9/20/19
Test 1
Question 3 */


int rg;

void setup (){
  size (500,500);
  background(125,0,200);
  
}

void draw(){
  rectMode(CENTER);
  fill(255,0,0);
  rect(width/2, height/2,rg, rg);
  
  rg++;
 
}
