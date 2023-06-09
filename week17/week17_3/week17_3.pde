void setup(){
  size(600,600);
  poo = loadImage("123.png");
  dog = loadImage("456.png");
}
void draw(255){
  image(poo,0,0,300,300);
  image(dog,x,y);
  
}
float x=0,y=0;
void  mouseDragged(){
  x+=(mouseX-pnouseX);
  y+=(mouseY-pnouseY);
}
