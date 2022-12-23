//FISHING ANIMATION CG PROJECT-TO SHOW ANIMATION OF A FISHERMAN DOING FISHING ON A RIVERSIDE
//Group Members - SE-B-28 Hrutik Pisal,SE-B-68 Rohit Kalaburgi, SE-B-52 Harsh Shah ,SE-B-47 Abhinandan Sharma.
//Branch- Artificial Intelligence and Data Science 
//College-Dr. D.Y. Patil Insistute of Technology 


#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int page=1;
	//for creating windows screen
	initwindow(1500,800);	
    
for(int i=0;i<330;i++){
        	
  setactivepage(page);
  setvisualpage(1-page);      	
  //sun
  cleardevice();
  circle(100,80,50);  
  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(100,50,WHITE);  
  
  //Background color
  setfillstyle(WIDE_DOT_FILL,LIGHTGRAY);
  floodfill(10,540,WHITE);
  
  //RIVER LINE
  setfillstyle(SOLID_FILL,BLUE);
  line(0,550,1250,550);
  line(0,550,0,800);
  line(0,800,1250,800);
  line(1249,550,1249,800);
  floodfill(10,560,WHITE);
  
  //rectangle land
  setfillstyle(SOLID_FILL,DARKGRAY);
  line(1250,450,1500,450);
  line(1250,450,1250,800);
  line(1250,800,1500,800);
  line(1500,450,1500,800);
  floodfill(1260,460,WHITE);
  
  //FISHSTICK   
   ellipse(1252,298,0,180,62,28); //fishstick pulley
   line(1190,297,1190,297+i); //stickwire
   line(1190,297+i,1170,267+i); //fishstick anchor
   line(1190,297+i,1210,270+i); //fishstick anchor
   
   
  //FISHERMAN
  //manface 
  circle(1380,200,50); //facestructure
  circle(1360,190,7);  //lefteye
  circle(1400,190,7);  //righteye
  line(1360,230,1400,230); //mouth
  //manbody 
  line(1380,250,1380,370);
  line(1380,370,1330,450);
  line(1380,370,1450,450);
  line(1380,290,1410,350);
  line(1380,290,1310,300);
  
        	
  setfillstyle(SOLID_FILL,BLACK);
  line(50+i,600,50+i,630);
  line(50+i,600,100+i,615);
  line(50+i,630,100+i,615);
  floodfill(60+i,610,WHITE);
			
  //fishbody	
  setfillstyle(HATCH_FILL, BLACK);
  ellipse(158+i,615,0,360,60,25);
  circle(190+i,610,6);			
  floodfill(158+i,615,WHITE);
			
			
   //FISH2
   //Fishtail
   setfillstyle(SOLID_FILL,BLACK);
   line(300+i,700,300+i,730);
   line(300+i,700,350+i,715);
   line(300+i,730,350+i,715);
   floodfill(310+i,710,WHITE);
			 
  	
  	
	
   //fishbody 
   setfillstyle(HATCH_FILL, BLACK);
   ellipse(410+i,715,0,360,60,25);
   circle(440+i,710,6);
   floodfill(410+i,715,WHITE);
            
    
   //FISH3 
   //Fishtail
   setfillstyle(SOLID_FILL,BLACK);
   line(690+i,600,690+i,630);
   line(690+i,600,740+i,615);
   line(690+i,630,740+i,615);
   floodfill(700+i,610,WHITE);
  	         
	
	
   //fishbody   
   setfillstyle(HATCH_FILL, BLACK);
   ellipse(800+i,615,0,360,60,25);
   circle(830+i,610,6);
   floodfill(810+i,620,WHITE);
   floodfill(840+i,620,WHITE);
            
            
    
	     
	delay(25);      
	page=1-page;
}


for(int j=0;j<200;j++){

  setactivepage(page);
  setvisualpage(1-page);
  //sun
  cleardevice(); 
  circle(100,80,50);  
  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(100,50,WHITE);  
  
  //Background color
  setfillstyle(WIDE_DOT_FILL,LIGHTGRAY);
  floodfill(10,540,WHITE);
  
  //RIVER LINE
  setfillstyle(SOLID_FILL,BLUE);
  line(0,550,1250,550);
  line(0,550,0,800);
  line(0,800,1250,800);
  line(1249,550,1249,800);
  floodfill(10,560,WHITE);
  
  //rectangle land
  setfillstyle(SOLID_FILL,DARKGRAY);
  line(1250,450,1500,450);
  line(1250,450,1250,800);
  line(1250,800,1500,800);
  line(1500,450,1500,800);
  floodfill(1260,460,WHITE);
  
  //FISHSTICK   
  ellipse(1252,298,0,180,62,28); //fishstick pulley
  line(1190,297,1190,587-j); //stickwire
  line(1190,587-j,1170,557-j); //fishstick anchor
  line(1190,587-j,1210,560-j); //fishstick anchor
   
   
  //FISHERMAN
  //manface 
  circle(1380,200,50);
  circle(1360,190,7);  //lefteye
  circle(1400,190,7);  //righteye
  ellipse(1380,220,180,360,20,10); //smile
  
  //manbody 
  line(1380,250,1380,370);
  line(1380,370,1330,450);
  line(1380,370,1450,450);
  line(1380,290,1410,350);
  line(1380,290,1310,300);
  
        	
  setfillstyle(SOLID_FILL,BLACK);
  line(380+j,600,380+j,630);
  line(380+j,600,430+j,615);
  line(380+j,630,430+j,615);
  floodfill(390+j,610,WHITE);
			
  //fishbody 
  setfillstyle(HATCH_FILL, BLACK);
  ellipse(488+j,615,0,360,60,25);
  circle(520+j,610,6);			
  floodfill(488+j,615,WHITE);
			
			
  //FISH2
  //Fishtail
  setfillstyle(SOLID_FILL,BLACK);
  line(630+j,700,630+j,730);
  line(630+j,700,680+j,715);
  line(630+j,730,680+j,715);
  floodfill(640+j,710,WHITE);
			 
  	
  	
	
  //fishbody 
  setfillstyle(HATCH_FILL, BLACK);
  ellipse(740+j,715,0,360,60,25);
  circle(770+j,710,6);
  floodfill(740+j,715,WHITE);
            
    
  //FISH3 
  //Fishtail
  //setfillstyle(SOLID_FILL,BLACK);
  line(1190,675-j,1215,705-j);
  line(1190,675-j,1165,705-j);
  line(1165,705-j,1215,705-j);
  //floodfill(1190-j,680,WHITE);
  	         
	
	
   //fishbody 
   setfillstyle(HATCH_FILL, BLACK);
   ellipse(1190,615-j,0,360,25,60);
   circle(1190,580-j,6);
   floodfill(1200,620-j,WHITE);
   
            
            
    
	   
	delay(25);
	
	page=1-page;
	        
}  
	

  getch();
closegraph();
  
}

	
	

