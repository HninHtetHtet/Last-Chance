#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>
const char CPPKEYUP = 72;
const char CPPKEYLEFT = 75;
const char CPPKEYRIGHT = 77;
const char CPPKEYDOWN = 80;
void start();
void last();
void mainScreen(int,int) ;
void Screen();
void SinglePlayer(int,int);
void SingleScreen();
void TwoPlayer(int,int);
void TwoScreen();
void Intro(int,int) ;
void InfoScreen();
void StartPlayer1(int,int);
void StartPlayer2(int,int);
void StartPlayer3(int,int);
void StartPlayer4(int,int);
void StartPlayer5(int,int);
void StartComputer1(int,int);
void StartComputer2(int,int);
void StartComputer3(int,int);
void StartComputer4(int,int);
void StartComputer5(int,int);
void StartFirst(int,int);
void StartSecond(int,int);
void Frame(int,int,int,int,int);
void First() ;
void Second();
void Player();
int Checkbub(int,int,int);
int FillBubG1() ;
int FillBubG2();
int FillBubG3();
void color();
int colboard();
int colbub();
int SelectGp(int,int,int);
int RemoveBub1(int);
int RemoveBub2(int,int);
int rollDice();
int CrollDice();
void win();
void two();
void lose();
void wrong();
void main()
{
   clrscr();
   int d=DETECT,m;
  initgraph(&d,&m,"c:\\turboC3\\bgi");     
    int cbd=3,cbb=13;
  settextstyle(7,0,1);   
   start();
   getch();
   mainScreen(cbd,cbb);
  }

void start()
{ 
  last();
   setfillstyle(6,3);
   setcolor(3);
  for(int i=4;i<100;i+=2)
  {circle(36,400,i);	delay(5);
  circle(106,450,i);	delay(5);
  circle(176,400,i);	delay(5);
  circle(246,450,i);	delay(5);
  circle(316,400,i);	delay(5);
  circle(386,450,i);	delay(5);
  circle(456,400,i);	delay(5);
  circle(526,450,i);	delay(5);
  circle(596,400,i);	delay(5);     }
    delay(2000);
}


void last()
{int i;
	setcolor(10);
  circle(150,50,3);		delay(3);
  for(i=0;i<50;i++)
   {circle(250+i,50,3); delay(3);}
  for(i=0;i<50;i++)
   {circle(350+i,50,3); delay(3);}
  for(i=0;i<50;i++)
   {circle(450+i,50,3); delay(3);}

  for(i=51;i<=84;i++)
     {circle(150,i,3);	delay(3);
     circle(250,i,3);	delay(3);
     circle(300,i,3);	delay(3);
     circle(350,i,3);	delay(3);
     circle(475,i,3);	delay(3); }

  circle(150,85,3);		delay(3);
  for(i=0;i<50;i++)
   {circle(250+i,85,3); delay(3);}
  for(i=0;i<50;i++)
   {circle(350+i,85,3); delay(3);}
  circle(475,85,3);		delay(3);

  for(i=86;i<=119;i++)
     {circle(150,i,3);	delay(3);
     circle(250,i,3);	delay(3);
     circle(300,i,3);	delay(3);
     circle(400,i,3);	delay(3);
     circle(475,i,3);	delay(3); }

  for(i=0;i<50;i++)
   {circle(150+i,120,3);delay(3);}
  circle(250,120,3); 	delay(3);
  circle(300,120,3); 	delay(3);
  for(i=0;i<50;i++)
   {circle(350+i,120,3);delay(3);}
  circle(475,120,3); 	delay(3);
  
  setcolor(2);
     for(i=0;i<50;i++)
    {circle(50+i,200,3);delay(3);}
  circle(150,200,3);	delay(3);  
  circle(200,200,3);	delay(3);   
  for(i=0;i<50;i++)
   {circle(250+i,200,3);delay(3);}
  circle(350,200,3);	delay(3);   
  circle(400,200,3);	delay(3);  
  for(i=0;i<50;i++)
   {circle(450+i,200,3);delay(3);}
  for(i=0;i<50;i++)
   {circle(550+i,200,3);delay(3);}

  for(i=201;i<=234;i++)
     {circle(50,i,3);	delay(3);
     circle(150,i,3);	delay(3);
     circle(200,i,3);	delay(3);
     circle(250,i,3);	delay(3);
     circle(300,i,3);	delay(3);
     circle(350,i,3);	delay(3);
     circle(400,i,3);	delay(3);
     circle(450,i,3);	delay(3);
     circle(550,i,3);	delay(3);}

  int t1=350,t2=200;
  for(i=0;i<12;i++)
    {line(t1,t2,t1+2,t2+3);
    line(t1+1,t2,t1+3,t2+3);
    line(t1+2,t2,t1+4,t2+3);
    line(t1+3,t2,t1+5,t2+3);
    line(t1+4,t2,t1+6,t2+3);
    line(t1+5,t2,t1+7,t2+3);
    line(t1+6,t2,t1+8,t2+3);
    t1=t1+2;
    t2=t2+3;			delay(3);}

  circle(50,235,3);		delay(3);
  for(i=0;i<50;i++)
   {circle(150+i,235,3);delay(3);}
  for(i=0;i<50;i++)
   {circle(250+i,235,3);delay(3);}
  circle(350,235,3);	delay(3);
  circle(400,235,3);	delay(3);
  circle(450,235,3);	delay(3);
  for(i=0;i<50;i++)
   {circle(550+i,235,3);delay(3);}

  for(i=236;i<=269;i++)
     {circle(50,i,3);	delay(3);
     circle(150,i,3);	delay(3);
     circle(200,i,3);	delay(3);
     circle(250,i,3);	delay(3);
     circle(300,i,3);	delay(3);
     circle(350,i,3);	delay(3);
     circle(400,i,3);	delay(3);
     circle(450,i,3);	delay(3);
     circle(550,i,3);	delay(3);}

  for(i=0;i<12;i++)
    {line(t1,t2,t1+2,t2+3);
    line(t1+1,t2,t1+3,t2+3);
    line(t1+2,t2,t1+4,t2+3);
    line(t1+3,t2,t1+5,t2+3);
    line(t1+4,t2,t1+6,t2+3);
    line(t1+5,t2,t1+7,t2+3);
    line(t1+6,t2,t1+8,t2+3);
    t1=t1+2;
    t2=t2+3;			delay(3);}

  for(i=0;i<50;i++)
    {circle(50+i,270,3);delay(3);}
  circle(150,270,3);	delay(3);
  circle(200,270,3);	delay(3);
  circle(250,270,3);	delay(3);
  circle(300,270,3);	delay(3);
  circle(350,270,3);	delay(3);
  circle(400,270,3);	delay(3);
  for(i=0;i<50;i++)
    {circle(450+i,270,3);delay(3);}
  for(i=0;i<50;i++)
    {circle(550+i,270,3);delay(3);}
   }

void mainScreen(int cbd,int cbb)
{
   clrscr();
     cleardevice(); 
     char Arrow = 0;
Arrow = kbhit();
 Screen() ;
 int x=70,y=150;
 setcolor(9);
outtextxy(x,y,">>>");
   while(Arrow!='\r') {
   Arrow = getch();
   switch(Arrow)
   {case CPPKEYUP:{Screen();
		   setcolor(9);
		   if(y>150)
		   {
			outtextxy(x,y-50,">>>");y=y-50;}
		   else
		    outtextxy(x,y,">>>");
		   }break;
    case CPPKEYDOWN:{Screen(); setcolor(9);
		     if(y<350)
		     {
			outtextxy(x,y+50,">>>");y=y+50;}
		     else outtextxy(x,y,">>>");
		     }break;
    
    }sound(400);delay(30);nosound();
    }
    switch(y)
    {
       case 150:SinglePlayer(cbd,cbb);break;
       case 200:TwoPlayer(cbd,cbb);break;
       case 250:Intro(cbd,cbb);break;
       case 300:{color();
                cbd=colboard();
                cbb= colbub();
		mainScreen(cbd,cbb);
               }break;
       case 350:exit;break;
    }
}

void Screen()
{

     clrscr();
     cleardevice();
     setcolor(2);
     outtextxy(150,90,"Welcome to Last Chance Game");
     outtextxy(120,150,"Single Player");
     outtextxy(120,200,"Two Player");
     outtextxy(120,250,"How to play this game");
     outtextxy(120,300,"Color");
     outtextxy(120,350,"Exit");
}



void SinglePlayer(int cbd,int cbb)
{
   clrscr();
    cleardevice();
    char Arrow = 0;
  char ch;
Arrow = kbhit();
 SingleScreen() ;
 int x=70,y=150;
 setcolor(9);
outtextxy(x,y,">>>");
   while(Arrow!='\r') {
   Arrow = getch();
   switch(Arrow)
   {case CPPKEYUP:{SingleScreen();
		   setcolor(9);
		   if(y>150)
		   {
			outtextxy(x,y-50,">>>");y=y-50;}
		   else
		    outtextxy(x,y,">>>");
		   }break;
    case CPPKEYDOWN:{SingleScreen(); setcolor(9);
		     if(y<450)
		     {
			outtextxy(x,y+50,">>>");y=y+50;}
		     else outtextxy(x,y,">>>");
		     }break;
    
    }sound(400);delay(30);nosound();
    }
    switch(y)
    {
      case 150:ch=CrollDice();
           switch(ch)
          {
            	case 1:StartPlayer1(cbd,cbb);break;
   	        case 2:StartComputer1(cbd,cbb);break;
           }break;
        case 200:ch=CrollDice();
           switch(ch)
          {
            	case 1:StartPlayer2(cbd,cbb);break;
   	        case 2:StartComputer2(cbd,cbb);break;
           }break;	
	case 250:ch=CrollDice();
           switch(ch)
          {
            	case 1:StartPlayer3(cbd,cbb);break;
   	        case 2:StartComputer3(cbd,cbb);break;
           }break;
       case 300:ch=CrollDice();
           switch(ch)
          {
            	case 1:StartPlayer4(cbd,cbb);break;
   	        case 2:StartComputer4(cbd,cbb);break;
           }break;
       case 350:ch=CrollDice();
           switch(ch)
          {
            	case 1:StartPlayer5(cbd,cbb);break;
   	        case 2:StartComputer5(cbd,cbb);break;
           }break;	
       case 400:mainScreen(cbd,cbb);break;
       case 450:exit;break;
    }
   
}

void SingleScreen()
{

     clrscr();
     cleardevice();
     setcolor(2);
     outtextxy(150,90,"Single Player");
     outtextxy(120,150,"Level-1");
     outtextxy(120,200,"Level-2");
     outtextxy(120,250,"Level-3");
     outtextxy(120,300,"Level-4");
     outtextxy(120,350,"Level-5");
     outtextxy(120,400,"Back");
     outtextxy(120,450,"Exit");
}




void TwoPlayer(int cbd,int cbb)
{
   clrscr();
   cleardevice(); 
  char ch;
   char Arrow = 0;
Arrow = kbhit();
 TwoScreen() ;
 int x=70,y=150;
 setcolor(9);
outtextxy(x,y,">>>");
   while(Arrow!='\r') {
   Arrow = getch();
   switch(Arrow)
   {case CPPKEYUP:{TwoScreen();
		   setcolor(9);
		   if(y>150)
		   {
			outtextxy(x,y-50,">>>");y=y-50;}
		   else
		    outtextxy(x,y,">>>");
		   }break;
    case CPPKEYDOWN:{TwoScreen(); setcolor(9);
		     if(y<250)
		     {
			outtextxy(x,y+50,">>>");y=y+50;}
		     else outtextxy(x,y,">>>");
		     }break;
    
    }sound(400);delay(30);nosound();
    }
    switch(y)
    {
      case 150:{ch=rollDice();
               if(ch==1)
   	           StartFirst(cbd,cbb);
              else StartSecond(cbd,cbb);
              }break;
       case 200:mainScreen(cbd,cbb);break;
       case 250:exit;break;
    }  
}
   
  

void TwoScreen()
{

     clrscr();
     cleardevice();
     setcolor(2);
     outtextxy(150,90,"Two Player");
     outtextxy(120,150,"Play");
     outtextxy(120,200,"Back");   
     outtextxy(120,250,"Exit");
}

void Intro(int cbd,int cbb)
{
  clrscr();cleardevice();
  char Arrow = 0;
Arrow = kbhit();
 InfoScreen() ;
 int x=70,y=450;
 setcolor(9);
outtextxy(x,y,">>>");
   while(Arrow!='\r') {
   Arrow = getch();
   switch(Arrow)
   {case CPPKEYLEFT :{InfoScreen();
		   setcolor(9);
		   if(x>70)
		   {
			outtextxy(x-290,y,">>>");x=x-290;}
		   else
		    outtextxy(x,y,">>>");
		   }break;
    case CPPKEYRIGHT:{InfoScreen(); setcolor(9);
		     if(x<360)
		     {
			outtextxy(x+290,y,">>>");x=x+290;}
		     else outtextxy(x,y,">>>");
		     }break;
    
    }sound(400);delay(30);nosound();
    }
    switch(x)
    {
      case 70:{mainScreen(cbd,cbb);
              }break;       
      case 360:exit;break;
    }  
}
   
void InfoScreen()
{
     clrscr();
     cleardevice();
     setcolor(2);settextstyle(7,0,1); 
     outtextxy(150,30,"INTRODUCTION");
     outtextxy(0,60,"_This Game gives you three groups.");
     outtextxy(0,90,"_In each, there is many bubbles. ");
     outtextxy(0,120,"_If First player plays first, Second will fill the bubbles in all ");
     outtextxy(0,145," groups. ");
     outtextxy(0,175,"_Then the first player can choose one of three groups and can");
     outtextxy(0,200," remove the bubbles at least one. ");
     outtextxy(0,230,"_In this case, this player can't remove the bubbles of other ");
     outtextxy(0,255," groups. ");
     outtextxy(0,285,"_The second player can choose any group and can do as above. ");
     outtextxy(0,315,"_After the second player did, the first player can choose any ");
     outtextxy(0,340," group including the group which he chose at first time.");
     outtextxy(0,370,"_We do it squentially and the one who remove the last one must");
     outtextxy(0,395," be loser. ");
     setcolor(9);
     outtextxy(380,420,"By   Hnin Htet Htet");
     setcolor(2);
     outtextxy(120,450,"Back");
     outtextxy(410,450,"Exit");
}

void StartPlayer1(int cbd,int cbb)
{
    clrscr();
    cleardevice();
	int g1,g2,g3,gp,c,rem,flag=1;
	char ch;
     g1=(rand()%20)+1;
     g2=(rand()%20)+1;
     g3=(rand()%20)+1;
         clrscr();
         cleardevice();
	 cout<<"\n\t\t\t\t     Level 1";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
	 while(flag)
	 {
	     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         Player();
         gp=SelectGp(g1,g2,g3);  
		 while(gp<1||gp>3)
	     {wrong();
	  	clrscr();
	  	cleardevice();
                cout<<"\n\t\t\t\t     Level 1";
         	cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	Player();
  		gp=SelectGp(g1,g2,g3);
  	    }
  	    switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                	 cout<<"\n\t\t\t\t     Level 1";
         			cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                 	 cout<<"\n\t\t\t\t     Level 1";
         				cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";  
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                 Player();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                  	 cout<<"\n\t\t\t\t     Level 1";
         			cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
              }
	          switch(gp)
	         {
		      case 1:{rem=RemoveBub1(g1);
	                 while(rem>g1||rem<1)
				    {
				      wrong();
				      clrscr();
				      cleardevice();
                                      	 cout<<"\n\t\t\t\t     Level 1";
         				cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				      Frame(g1,g2,g3,cbd,cbb);
				       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				      Player();
				      cout<<"\n\n\tYou chose group-"<<gp;
				       rem=RemoveBub2(g1,rem);
				     }
				     g1=g1-rem;
			         }break;
	          case 2:{rem=RemoveBub1(g2);
	                   while(rem>g2||rem<1)
				       {
				       wrong();
				       clrscr();
				       cleardevice();
                                       	 cout<<"\n\t\t\t\t     Level 1";
         				cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				       Frame(g1,g2,g3,cbd,cbb);
				       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				         Player();
			           cout<<"\n\n\tYou chose group-"<<gp;
			           rem=RemoveBub2(g2,rem);
				        }  
				      g2=g2-rem;
			         }break;
	   		  case 3:{rem=RemoveBub1(g3);
	                 while(rem>g3||rem<1)
				    {
				 	wrong();
				 	clrscr();
				 	cleardevice();
                                        	 cout<<"\n\t\t\t\t     Level 1";
         				cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3"; 
				 	Frame(g1,g2,g3,cbd,cbb);
				 	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 	Player();
				 	cout<<"\n\n\tYou chose group-"<<gp;
				 	rem=RemoveBub2(g3,rem);
				  	}
				  g3=g3-rem;
			      }break;
	        }
             
           clrscr();
         cleardevice();
             	 cout<<"\n\t\t\t\t     Level 1";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";              
	     Frame(g1,g2,g3,cbd,cbb);
	     if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     { 
		      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	          cout<<"\n\n\t\tPlayer wins."  ;
	          cout<<"\n\n\t\tComputer loses.";win();
	          flag=0;
              }
	     else if(g1==0&&g2==0&&g3==0)
	      { 
		      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	          cout<<"\n\n\t\tComputer wins."  ;
	          cout<<"\n\n\t\tPlayer loses.";lose();
	          flag=0;
	     }
	     else
         {
		     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
             if(g1>0&&g2>0&&g3>0)
		       gp=(rand()%3)+1;
             else if(g1>0&&g2>0&&g3==0)
                gp=(rand()%2)+1;
             else if(g1>0&&g2==0&&g3>0)
                {
		   c=rand()%3;
                   if(c==1)
                      gp=3;
                   else gp=c+1;
                }
             else if(g1==0&&g2>0&&g3>0)
              {
             	c=rand()%3;
                if(c==0)
                   gp=2;
                else gp=c+1;
              }
             else if(g1>0&&g2==0&&g3==0)
                gp=1;
             else if(g1==0&&g2>0&&g3==0)
                gp=2;
             else if(g1==0&&g2==0&&g3>0) 
                gp=3;
             switch(gp)
              {
             	case 1:{rem=(rand()%g1)+1;
                        g1=g1-rem;}break; 
                case 2:{rem=(rand()%g2)+1;
                        g2=g2-rem;}break; 
                case 3:{rem=(rand()%g3)+1;
                        g3=g3-rem;}break; 
              }
         cout<<"\n\n\t\tComputer select the group-"<<gp
             <<"\n\n\t\tand remove "<<rem<<" bubbles.";
         delay(2500);
         clrscr();
         cleardevice();
                    	 cout<<"\n\t\t\t\t     Level 1";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3"; 
		     Frame(g1,g2,g3,cbd,cbb);
      	         if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	         { 
			     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	             cout<<"\n\n\t\tComputer wins."  ;
	             cout<<"\n\n\t\tPlayer loses.";lose();
	             flag=0;
	         }
	         if(g1==0&&g2==0&&g3==0)
	         { 
			    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<"\n\n\t\tPlayer wins."  ;
	            cout<<"\n\n\t\tComputer loses.";win();
	            flag=0;
	         }
              }
	 }
	 cout<<"\n\n\t\tDo you want to play again?(y/n):";
	 cin>>ch;
	 if(ch=='y')
	   mainScreen(cbd,cbb);
     else exit;
}


void StartPlayer2(int cbd,int cbb)
{
   clrscr();
    cleardevice();
	int g1,g2,g3,gp,c,rem,flag=1;
	char ch;
     g1=(rand()%20)+1;
     g2=(rand()%20)+1;
     g3=(rand()%20)+1;
         clrscr();
         cleardevice();
         	 cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
	 while(flag)
	 {
	     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         Player();
         gp=SelectGp(g1,g2,g3);  
		 while(gp<1||gp>3)
	     {wrong();
	  	clrscr();
	  	cleardevice();
                cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	Player();
  		gp=SelectGp(g1,g2,g3);
  	    }
  	    switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                 cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                  cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                 Player();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                 cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
              }
	          switch(gp)
	         {
		      case 1:{rem=RemoveBub1(g1);
	                 while(rem>g1||rem<1)
				    {
				      wrong();
				      clrscr();
				      cleardevice();
                                       cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				      Frame(g1,g2,g3,cbd,cbb);
				       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				      Player();
				      cout<<"\n\n\tYou chose group-"<<gp;
				       rem=RemoveBub2(g1,rem);
				     }
				     g1=g1-rem;
			         }break;
	          case 2:{rem=RemoveBub1(g2);
	                   while(rem>g2||rem<1)
				       {
				       wrong();
				       clrscr();
				       cleardevice();
                                       cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				       Frame(g1,g2,g3,cbd,cbb);
				       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				         Player();
			           cout<<"\n\n\tYou chose group-"<<gp;
			           rem=RemoveBub2(g2,rem);
				        }  
				      g2=g2-rem;
			         }break;
	   		  case 3:{rem=RemoveBub1(g3);
	                 while(rem>g3||rem<1)
				    {
				 	wrong();
				 	clrscr();
				 	cleardevice();
                                        cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 	Frame(g1,g2,g3,cbd,cbb);
				 	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 	Player();
				 	cout<<"\n\n\tYou chose group-"<<gp;
				 	rem=RemoveBub2(g3,rem);
				  	}
				  g3=g3-rem;
			      }break;
	        }
             
           clrscr();
         cleardevice();
             cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";             
	     Frame(g1,g2,g3,cbd,cbb);
	     if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     { 
		      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	          cout<<"\n\n\t\tPlayer wins."  ;
	          cout<<"\n\n\t\tComputer loses.";win();
	          flag=0;
              }
	     else if(g1==0&&g2==0&&g3==0)
	      { 
		      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	          cout<<"\n\n\t\tComputer wins."  ;
	          cout<<"\n\n\t\tPlayer loses.";lose();
	          flag=0;
	     }
	     else
         {
		     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
             if(g1>0&&g2>0&&g3>0)
		 {
                    if(g1==g2&&g2==g3)
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }
			}
                    else if(g1==g2)
                       {
			  gp=3;
 			  switch(g1)
			    {
  				case 1:{rem=g3-1;
	 				 g3=1;
	  			       }break;
  				default:{rem=g3;
	  				 g3=0;
	  				}break;
			    }
                       }
		    else if(g1==g3)
		       {
			  gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2-1;
	 				 g2=1;
	  			       }break;
  				default:{rem=g2;
	  				 g2=0;
	  				}break;
			    }
			}	
           	    else if(g2==g3)
			{
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1-1;
	 				 g1=1;
	  			       }break;
  				default:{rem=g1;
	  				 g1=0;
	  				}break;
			    }
			}	
                    else 
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }	                 		
         	    	}
                 }
             else if(g1>0&&g2>0&&g3==0)
		{
		   if(g1>g2)
		     {
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g2;
	  				 g1=g2;
	  				}break;
			    }
		     }
		   else if(g2>g1)
                     {
			gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g1;
	  				 g2=g1;
	  				}break;
			    }
		     }  
		   else 
      		     {
			c=rand()%3;
                       if(c==2)
                       gp=1;
                       else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		     }
	        }
             else if(g1>0&&g2==0&&g3>0)
                {
		   if(g1>g3)
		     {
			gp=1;
			switch(g3)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g3;
	  				 g1=g3;
	  				}break;
			    }
         	     }
		  else if(g3>g1)
		     {
			gp=3;
			switch(g1)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g1;
	  				 g3=g1;
	  				}break;
			    }
		    }
		  else
                     {
                       c=rand()%3;
                       if(c==1)
                       gp=3;
                       else gp=c+1;
		       switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}	
		     }
                }
             else if(g1==0&&g2>0&&g3>0)
              {
		if(g2>g3)
		     {
			gp=2;
			switch(g3)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g3;
	  				 g2=g3;
	  				}break;
			    }
         	     }
		else if(g3>g2)
		     {
			gp=3;
			switch(g2)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g2;
	  				 g3=g2;
	  				}break;
			    }
		     }
             	else 
            	   {
			c=rand()%3;
                        if(c==0)
                   	gp=2;
                	else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		   }
              }
             else if(g1>0&&g2==0&&g3==0)
                {
			gp=1;
			switch(g1)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-1;
	  				 g1=1;
	  				}break;
			    }
		}
             else if(g1==0&&g2>0&&g3==0)
                  {
			gp=2;
			switch(g2)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-1;
	  				 g2=1;
	  				}break;
			    }
		  }            
	     else if(g1==0&&g2==0&&g3>0)
                 {
			gp=3;
			switch(g3)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-1;
	  				 g3=1;
	  				}break;
			    }
		}             
         cout<<"\n\n\t\tComputer select the group-"<<gp
             <<"\n\n\t\tand remove "<<rem<<" bubbles.";
         delay(2500);
         clrscr();
         cleardevice();
                     cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
		     Frame(g1,g2,g3,cbd,cbb);
      	         if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	         { 
			     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	             cout<<"\n\n\t\tComputer wins."  ;
	             cout<<"\n\n\t\tPlayer loses.";lose();
	             flag=0;
	         }
	         if(g1==0&&g2==0&&g3==0)
	         { 
			    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<"\n\n\t\tPlayer wins."  ;
	            cout<<"\n\n\t\tComputer loses.";win();
	            flag=0;
	         }
              }
	 }
	 cout<<"\n\n\t\tDo you want to play again?(y/n):";
	 cin>>ch;
	 if(ch=='y')
	   mainScreen(cbd,cbb);
     else exit;
}

void StartPlayer3(int cbd,int cbb)
{
   clrscr();
    cleardevice();
	int g1,g2,g3,gp,c,rem,flag=1;
	char ch;
     g1=(rand()%20)+1;
     g2=(rand()%20)+1;
     g3=(rand()%20)+1;
         clrscr();
         cleardevice();
         cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
	 while(flag)
	 {
	     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         Player();
         gp=SelectGp(g1,g2,g3);  
		 while(gp<1||gp>3)
	     {wrong();
	  	clrscr();
	  	cleardevice();
                cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	Player();
  		gp=SelectGp(g1,g2,g3);
  	    }
  	    switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                 cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                  cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";  
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                 Player();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                  cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
              }
	          switch(gp)
	         {
		      case 1:{rem=RemoveBub1(g1);
	                 while(rem>g1||rem<1)
				    {
				      wrong();
				      clrscr();
				      cleardevice();
                                      cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				      Frame(g1,g2,g3,cbd,cbb);
				       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				      Player();
				      cout<<"\n\n\tYou chose group-"<<gp;
				       rem=RemoveBub2(g1,rem);
				     }
				     g1=g1-rem;
			         }break;
	          case 2:{rem=RemoveBub1(g2);
	                   while(rem>g2||rem<1)
				       {
				       wrong();
				       clrscr();
				       cleardevice();
                                       cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				       Frame(g1,g2,g3,cbd,cbb);
				       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				         Player();
			           cout<<"\n\n\tYou chose group-"<<gp;
			           rem=RemoveBub2(g2,rem);
				        }  
				      g2=g2-rem;
			         }break;
	   		  case 3:{rem=RemoveBub1(g3);
	                 while(rem>g3||rem<1)
				    {
				 	wrong();
				 	clrscr();
				 	cleardevice();
                                        cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 	Frame(g1,g2,g3,cbd,cbb);
				 	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 	Player();
				 	cout<<"\n\n\tYou chose group-"<<gp;
				 	rem=RemoveBub2(g3,rem);
				  	}
				  g3=g3-rem;
			      }break;
	        }
             
           clrscr();
         cleardevice();
             cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";             
	     Frame(g1,g2,g3,cbd,cbb);
	     if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     { 
		      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	          cout<<"\n\n\t\tPlayer wins."  ;
	          cout<<"\n\n\t\tComputer loses.";win();
	          flag=0;
              }
	     else if(g1==0&&g2==0&&g3==0)
	      { 
		      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	          cout<<"\n\n\t\tComputer wins."  ;
	          cout<<"\n\n\t\tPlayer loses.";lose();
	          flag=0;
	     }
	     else
         {
		     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	     if(g1==1&&g2==2&&g3>3||g1==2&&g2==1&&g3>3)
		{
		   gp=3;
		   rem=g3-3;
		   g3=3;
		}
	     else if(g1==1&&g3==2&&g2>3||g1==2&&g3==1&&g2>3)
		{
		   gp=2;
		   rem=g2-3;
		   g2=3;
		}
	     else if(g2==1&&g3==2&&g1>3||g2==2&&g3==1&&g1>3)
		{
		   gp=1;
		   rem=g1-3;
		   g1=3;
		}
	     else if(g1==1&&g2==3&&g3>2||g1==3&&g2==1&&g3>2)
		{
		   gp=3;
		   rem=g3-2;
		   g3=2;
		}
	     else if(g1==1&&g3==3&&g2>2||g1==3&&g3==1&&g2>2)
		{
		   gp=2;
		   rem=g2-2;
		   g2=2;
		}
	     else if(g2==1&&g3==3&&g1>2||g2==3&&g3==1&&g1>2)
		{
		   gp=1;
		   rem=g1-2;
		   g1=2;
		}
	     else if(g1==3&&g2==2&&g3>1||g1==2&&g2==3&&g3>1)
		{
		   gp=3;
		   rem=g3-1;
		   g3=1;
		}
	     else if(g1==3&&g3==2&&g2>1||g1==2&&g3==3&&g2>1)
		{
		   gp=2;
		   rem=g2-1;
		   g2=1;
		}
	     else if(g2==3&&g3==2&&g1>1||g2==2&&g3==3&&g1>1)
		{
		   gp=1;
		   rem=g1-1;
		   g1=1;
		}
             else if(g1>0&&g2>0&&g3>0)
		 {
                    if(g1==g2&&g2==g3)
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }
			}
                    else if(g1==g2)
                       {
			  gp=3;
 			  switch(g1)
			    {
  				case 1:{rem=g3-1;
	 				 g3=1;
	  			       }break;
  				default:{rem=g3;
	  				 g3=0;
	  				}break;
			    }
                       }
		    else if(g1==g3)
		       {
			  gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2-1;
	 				 g2=1;
	  			       }break;
  				default:{rem=g2;
	  				 g2=0;
	  				}break;
			    }
			}	
           	    else if(g2==g3)
			{
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1-1;
	 				 g1=1;
	  			       }break;
  				default:{rem=g1;
	  				 g1=0;
	  				}break;
			    }
			}	
                    else 
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }	                 		
         	    	}
                 }
             else if(g1>0&&g2>0&&g3==0)
		{
		   if(g1>g2)
		     {
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g2;
	  				 g1=g2;
	  				}break;
			    }
		     }
		   else if(g2>g1)
                     {
			gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g1;
	  				 g2=g1;
	  				}break;
			    }
		     }  
		   else 
      		     {
			c=rand()%3;
                       if(c==2)
                       gp=1;
                       else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		     }
	        }
             else if(g1>0&&g2==0&&g3>0)
                {
		   if(g1>g3)
		     {
			gp=1;
			switch(g3)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g3;
	  				 g1=g3;
	  				}break;
			    }
         	     }
		  else if(g3>g1)
		     {
			gp=3;
			switch(g1)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g1;
	  				 g3=g1;
	  				}break;
			    }
		    }
		  else
                     {
                       c=rand()%3;
                       if(c==1)
                       gp=3;
                       else gp=c+1;
		       switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}	
		     }
                }
             else if(g1==0&&g2>0&&g3>0)
              {
		if(g2>g3)
		     {
			gp=2;
			switch(g3)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g3;
	  				 g2=g3;
	  				}break;
			    }
         	     }
		else if(g3>g2)
		     {
			gp=3;
			switch(g2)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g2;
	  				 g3=g2;
	  				}break;
			    }
		     }
             	else 
            	   {
			c=rand()%3;
                        if(c==0)
                   	gp=2;
                	else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		   }
              }
             else if(g1>0&&g2==0&&g3==0)
                {
			gp=1;
			switch(g1)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-1;
	  				 g1=1;
	  				}break;
			    }
		}
             else if(g1==0&&g2>0&&g3==0)
                  {
			gp=2;
			switch(g2)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-1;
	  				 g2=1;
	  				}break;
			    }
		  }            
	     else if(g1==0&&g2==0&&g3>0)
                 {
			gp=3;
			switch(g3)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-1;
	  				 g3=1;
	  				}break;
			    }
		}             
         cout<<"\n\n\t\tComputer select the group-"<<gp
             <<"\n\n\t\tand remove "<<rem<<" bubbles.";
         delay(2500);
         clrscr();
         cleardevice();
                     cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
		     Frame(g1,g2,g3,cbd,cbb);
      	         if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	         { 
			     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	             cout<<"\n\n\t\tComputer wins."  ;
	             cout<<"\n\n\t\tPlayer loses.";lose();
	             flag=0;
	         }
	         if(g1==0&&g2==0&&g3==0)
	         { 
			    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<"\n\n\t\tPlayer wins."  ;
	            cout<<"\n\n\t\tComputer loses.";win();
	            flag=0;
	         }
              }
	 }
	 cout<<"\n\n\t\tDo you want to play again?(y/n):";
	 cin>>ch;
	 if(ch=='y')
	   mainScreen(cbd,cbb);
     else exit;
}


void StartPlayer4(int cbd,int cbb)
{
   clrscr();
    cleardevice();
	int g1,g2,g3,gp,c,rem,flag=1;
	char ch;
     g1=(rand()%20)+1;
     g2=(rand()%20)+1;
     g3=(rand()%20)+1;
         clrscr();
         cleardevice();
         cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
	 while(flag)
	 {
	     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         Player();
         gp=SelectGp(g1,g2,g3);  
		 while(gp<1||gp>3)
	     {wrong();
	  	clrscr();
	  	cleardevice();
                cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	Player();
  		gp=SelectGp(g1,g2,g3);
  	    }
  	    switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                 cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                 Player();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                  cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
              }
	          switch(gp)
	         {
		      case 1:{rem=RemoveBub1(g1);
	                 while(rem>g1||rem<1)
				    {
				      wrong();
				      clrscr();
				      cleardevice();
                                      cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				      Frame(g1,g2,g3,cbd,cbb);
				       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				      Player();
				      cout<<"\n\n\tYou chose group-"<<gp;
				       rem=RemoveBub2(g1,rem);
				     }
				     g1=g1-rem;
			         }break;
	          case 2:{rem=RemoveBub1(g2);
	                   while(rem>g2||rem<1)
				       {
				       wrong();
				       clrscr();
				       cleardevice();
                                       cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				       Frame(g1,g2,g3,cbd,cbb);
				       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				         Player();
			           cout<<"\n\n\tYou chose group-"<<gp;
			           rem=RemoveBub2(g2,rem);
				        }  
				      g2=g2-rem;
			         }break;
	   		  case 3:{rem=RemoveBub1(g3);
	                 while(rem>g3||rem<1)
				    {
				 	wrong();
				 	clrscr();
				 	cleardevice();
                                       cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 	Frame(g1,g2,g3,cbd,cbb);
				 	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 	Player();
				 	cout<<"\n\n\tYou chose group-"<<gp;
				 	rem=RemoveBub2(g3,rem);
				  	}
				  g3=g3-rem;
			      }break;
	        }
             
           clrscr();
         cleardevice();
             cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";           
	     Frame(g1,g2,g3,cbd,cbb);
	     if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     { 
		      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	          cout<<"\n\n\t\tPlayer wins."  ;
	          cout<<"\n\n\t\tComputer loses.";win();
	          flag=0;
              }
	     else if(g1==0&&g2==0&&g3==0)
	      { 
		      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	          cout<<"\n\n\t\tComputer wins."  ;
	          cout<<"\n\n\t\tPlayer loses.";lose();
	          flag=0;
	     }
	     else
         {
		     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	     if(g1==1&&g2==4&&g3>5||g1==4&&g2==1&&g3>5)
		{
			gp=3;
			rem=g3-5;
			g3=5;
		}
	     else if(g1==1&&g3==4&&g3>5||g1==4&&g3==1&&g2>5)
		{
			gp=2;
			rem=g2-5;
			g2=5;
		}
	     else if(g2==1&&g3==4&&g1>5||g2==4&&g3==1&&g1>5)
		{
			gp=1;
			rem=g1-5;
			g1=5;
		}
	     else if(g1==1&&g2==5&&g3>4||g1==5&&g2==1&&g3>4)
		{
			gp=3;
			rem=g3-4;
			g3=4;
		}
	     else if(g1==1&&g3==5&&g2>4||g1==5&&g3==1&&g2>4)
		{
			gp=2;
			rem=g2-4;
			g2=4;
		}
	     else if(g2==1&&g3==5&&g1>4||g2==5&&g3==1&&g1>4)
		{
			gp=1;
			rem=g1-4;
			g1=4;
		}
	     else if(g1==4&&g2==5&&g3>1||g1==5&&g2==4&&g3>1)
		{
			gp=3;
			rem=g3-1;
			g3=1;
		}
	     else if(g1==4&&g3==5&&g2>1||g1==5&&g3==4&&g2>1)
		{
			gp=2;
			rem=g2-1;
			g2=1;
		}
	     else if(g2==4&&g3==5&&g1>1||g2==5&&g3==4&&g1>1)
		{
			gp=1;
			rem=g1-1;
			g1=1;
		}
	     else if(g1==1&&g2==2&&g3>3||g1==2&&g2==1&&g3>3)
		{
		   gp=3;
		   rem=g3-3;
		   g3=3;
		}
	     else if(g1==1&&g3==2&&g2>3||g1==2&&g3==1&&g2>3)
		{
		   gp=2;
		   rem=g2-3;
		   g2=3;
		}
	     else if(g2==1&&g3==2&&g1>3||g2==2&&g3==1&&g1>3)
		{
		   gp=1;
		   rem=g1-3;
		   g1=3;
		}
	     else if(g1==1&&g2==3&&g3>2||g1==3&&g2==1&&g3>2)
		{
		   gp=3;
		   rem=g3-2;
		   g3=2;
		}
	     else if(g1==1&&g3==3&&g2>2||g1==3&&g3==1&&g2>2)
		{
		   gp=2;
		   rem=g2-2;
		   g2=2;
		}
	     else if(g2==1&&g3==3&&g1>2||g2==3&&g3==1&&g1>2)
		{
		   gp=1;
		   rem=g1-2;
		   g1=2;
		}
	     else if(g1==3&&g2==2&&g3>1||g1==2&&g2==3&&g3>1)
		{
		   gp=3;
		   rem=g3-1;
		   g3=1;
		}
	     else if(g1==3&&g3==2&&g2>1||g1==2&&g3==3&&g2>1)
		{
		   gp=2;
		   rem=g2-1;
		   g2=1;
		}
	     else if(g2==3&&g3==2&&g1>1||g2==2&&g3==3&&g1>1)
		{
		   gp=1;
		   rem=g1-1;
		   g1=1;
		}
             else if(g1>0&&g2>0&&g3>0)
		 {
                    if(g1==g2&&g2==g3)
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }
			}
                    else if(g1==g2)
                       {
			  gp=3;
 			  switch(g1)
			    {
  				case 1:{rem=g3-1;
	 				 g3=1;
	  			       }break;
  				default:{rem=g3;
	  				 g3=0;
	  				}break;
			    }
                       }
		    else if(g1==g3)
		       {
			  gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2-1;
	 				 g2=1;
	  			       }break;
  				default:{rem=g2;
	  				 g2=0;
	  				}break;
			    }
			}	
           	    else if(g2==g3)
			{
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1-1;
	 				 g1=1;
	  			       }break;
  				default:{rem=g1;
	  				 g1=0;
	  				}break;
			    }
			}	
                    else 
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }	                 		
         	    	}
                 }
             else if(g1>0&&g2>0&&g3==0)
		{
		   if(g1>g2)
		     {
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g2;
	  				 g1=g2;
	  				}break;
			    }
		     }
		   else if(g2>g1)
                     {
			gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g1;
	  				 g2=g1;
	  				}break;
			    }
		     }  
		   else 
      		     {
			c=rand()%3;
                       if(c==2)
                       gp=1;
                       else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		     }
	        }
             else if(g1>0&&g2==0&&g3>0)
                {
		   if(g1>g3)
		     {
			gp=1;
			switch(g3)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g3;
	  				 g1=g3;
	  				}break;
			    }
         	     }
		  else if(g3>g1)
		     {
			gp=3;
			switch(g1)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g1;
	  				 g3=g1;
	  				}break;
			    }
		    }
		  else
                     {
                       c=rand()%3;
                       if(c==1)
                       gp=3;
                       else gp=c+1;
		       switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}	
		     }
                }
             else if(g1==0&&g2>0&&g3>0)
              {
		if(g2>g3)
		     {
			gp=2;
			switch(g3)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g3;
	  				 g2=g3;
	  				}break;
			    }
         	     }
		else if(g3>g2)
		     {
			gp=3;
			switch(g2)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g2;
	  				 g3=g2;
	  				}break;
			    }
		     }
             	else 
            	   {
			c=rand()%3;
                        if(c==0)
                   	gp=2;
                	else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		   }
              }
             else if(g1>0&&g2==0&&g3==0)
                {
			gp=1;
			switch(g1)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-1;
	  				 g1=1;
	  				}break;
			    }
		}
             else if(g1==0&&g2>0&&g3==0)
                  {
			gp=2;
			switch(g2)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-1;
	  				 g2=1;
	  				}break;
			    }
		  }            
	     else if(g1==0&&g2==0&&g3>0)
                 {
			gp=3;
			switch(g3)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-1;
	  				 g3=1;
	  				}break;
			    }
		}             
         cout<<"\n\n\t\tComputer select the group-"<<gp
             <<"\n\n\t\tand remove "<<rem<<" bubbles.";
         delay(2500);
         clrscr();
         cleardevice();
                     cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3"; 
		     Frame(g1,g2,g3,cbd,cbb);
      	         if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	         { 
			     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	             cout<<"\n\n\t\tComputer wins."  ;
	             cout<<"\n\n\t\tPlayer loses.";lose();
	             flag=0;
	         }
	         if(g1==0&&g2==0&&g3==0)
	         { 
			    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<"\n\n\t\tPlayer wins."  ;
	            cout<<"\n\n\t\tComputer loses.";win();
	            flag=0;
	         }
              }
	 }
	 cout<<"\n\n\t\tDo you want to play again?(y/n):";
	 cin>>ch;
	 if(ch=='y')
	   mainScreen(cbd,cbb);
     else exit;
}

void StartPlayer5(int cbd,int cbb)
{
   clrscr();
    cleardevice();
	int g1,g2,g3,gp,c,rem,flag=1;
	char ch;
     g1=(rand()%20)+1;
     g2=(rand()%20)+1;
     g3=(rand()%20)+1;
         clrscr();
         cleardevice();
         cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
	 while(flag)
	 {
	     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         Player();
         gp=SelectGp(g1,g2,g3);  
		 while(gp<1||gp>3)
	     {wrong();
	  	clrscr();
	  	cleardevice();
                cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	Player();
  		gp=SelectGp(g1,g2,g3);
  	    }
  	    switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                 cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                  cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";    
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                 Player();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                  cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
              }
	          switch(gp)
	         {
		      case 1:{rem=RemoveBub1(g1);
	                 while(rem>g1||rem<1)
				    {
				      wrong();
				      clrscr();
				      cleardevice();
                                      cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				      Frame(g1,g2,g3,cbd,cbb);
				       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				      Player();
				      cout<<"\n\n\tYou chose group-"<<gp;
				       rem=RemoveBub2(g1,rem);
				     }
				     g1=g1-rem;
			         }break;
	          case 2:{rem=RemoveBub1(g2);
	                   while(rem>g2||rem<1)
				       {
				       wrong();
				       clrscr();
				       cleardevice();
                                       cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3"; 
				       Frame(g1,g2,g3,cbd,cbb);
				       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				         Player();
			           cout<<"\n\n\tYou chose group-"<<gp;
			           rem=RemoveBub2(g2,rem);
				        }  
				      g2=g2-rem;
			         }break;
	   		  case 3:{rem=RemoveBub1(g3);
	                 while(rem>g3||rem<1)
				    {
				 	wrong();
				 	clrscr();
				 	cleardevice();
                                        cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 	Frame(g1,g2,g3,cbd,cbb);
				 	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 	Player();
				 	cout<<"\n\n\tYou chose group-"<<gp;
				 	rem=RemoveBub2(g3,rem);
				  	}
				  g3=g3-rem;
			      }break;
	        }
             
           clrscr();
         cleardevice();
            cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";               
	     Frame(g1,g2,g3,cbd,cbb);
	     if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     { 
		      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	          cout<<"\n\n\t\tPlayer wins."  ;
	          cout<<"\n\n\t\tComputer loses.";win();
	          flag=0;
              }
	     else if(g1==0&&g2==0&&g3==0)
	      { 
		      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	          cout<<"\n\n\t\tComputer wins."  ;
	          cout<<"\n\n\t\tPlayer loses.";lose();
	          flag=0;
	     }
	     else
         {
		     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	     if(g1==2&&g2==6&&g3>4||g1==6&&g2==2&&g3>4)
		{
			gp=3;
			rem=g3-4;
			g3=4;
		}
	     else if(g1==2&&g3==6&&g3>4||g1==6&&g3==2&&g2>4)
		{
			gp=2;
			rem=g2-4;
			g2=4;
		}
	     else if(g2==2&&g3==6&&g1>4||g2==6&&g3==2&&g1>4)
		{
			gp=1;
			rem=g1-4;
			g1=4;
		}
	     else if(g1==2&&g2==4&&g3>6||g1==4&&g2==2&&g3>6)
		{
			gp=3;
			rem=g3-6;
			g3=6;
		}
	     else if(g1==2&&g3==4&&g2>6||g1==4&&g3==2&&g2>6)
		{
			gp=2;
			rem=g2-6;
			g2=6;
		}
	     else if(g2==2&&g3==4&&g1>6||g2==4&&g3==2&&g1>6)
		{
			gp=1;
			rem=g1-6;
			g1=6;
		}
	     else if(g1==6&&g2==4&&g3>2||g1==4&&g2==6&&g3>2)
		{
			gp=3;
			rem=g3-2;
			g3=2;
		}
	     else if(g1==6&&g3==4&&g2>2||g1==4&&g3==6&&g2>2)
		{
			gp=2;
			rem=g2-2;
			g2=2;
		}
	     else if(g2==6&&g3==4&&g1>2||g2==4&&g3==6&&g1>2)
		{
			gp=1;
			rem=g1-2;
			g1=2;
		}
	     else if(g1==1&&g2==4&&g3>5||g1==4&&g2==1&&g3>5)
		{
			gp=3;
			rem=g3-5;
			g3=5;
		}
	     else if(g1==1&&g3==4&&g3>5||g1==4&&g3==1&&g2>5)
		{
			gp=2;
			rem=g2-5;
			g2=5;
		}
	     else if(g2==1&&g3==4&&g1>5||g2==4&&g3==1&&g1>5)
		{
			gp=1;
			rem=g1-5;
			g1=5;
		}
	     else if(g1==1&&g2==5&&g3>4||g1==5&&g2==1&&g3>4)
		{
			gp=3;
			rem=g3-4;
			g3=4;
		}
	     else if(g1==1&&g3==5&&g2>4||g1==5&&g3==1&&g2>4)
		{
			gp=2;
			rem=g2-4;
			g2=4;
		}
	     else if(g2==1&&g3==5&&g1>4||g2==5&&g3==1&&g1>4)
		{
			gp=1;
			rem=g1-4;
			g1=4;
		}
	     else if(g1==4&&g2==5&&g3>1||g1==5&&g2==4&&g3>1)
		{
			gp=3;
			rem=g3-1;
			g3=1;
		}
	     else if(g1==4&&g3==5&&g2>1||g1==5&&g3==4&&g2>1)
		{
			gp=2;
			rem=g2-1;
			g2=1;
		}
	     else if(g2==4&&g3==5&&g1>1||g2==5&&g3==4&&g1>1)
		{
			gp=1;
			rem=g1-1;
			g1=1;
		}
	     else if(g1==1&&g2==2&&g3>3||g1==2&&g2==1&&g3>3)
		{
		   gp=3;
		   rem=g3-3;
		   g3=3;
		}
	     else if(g1==1&&g3==2&&g2>3||g1==2&&g3==1&&g2>3)
		{
		   gp=2;
		   rem=g2-3;
		   g2=3;
		}
	     else if(g2==1&&g3==2&&g1>3||g2==2&&g3==1&&g1>3)
		{
		   gp=1;
		   rem=g1-3;
		   g1=3;
		}
	     else if(g1==1&&g2==3&&g3>2||g1==3&&g2==1&&g3>2)
		{
		   gp=3;
		   rem=g3-2;
		   g3=2;
		}
	     else if(g1==1&&g3==3&&g2>2||g1==3&&g3==1&&g2>2)
		{
		   gp=2;
		   rem=g2-2;
		   g2=2;
		}
	     else if(g2==1&&g3==3&&g1>2||g2==3&&g3==1&&g1>2)
		{
		   gp=1;
		   rem=g1-2;
		   g1=2;
		}
	     else if(g1==3&&g2==2&&g3>1||g1==2&&g2==3&&g3>1)
		{
		   gp=3;
		   rem=g3-1;
		   g3=1;
		}
	     else if(g1==3&&g3==2&&g2>1||g1==2&&g3==3&&g2>1)
		{
		   gp=2;
		   rem=g2-1;
		   g2=1;
		}
	     else if(g2==3&&g3==2&&g1>1||g2==2&&g3==3&&g1>1)
		{
		   gp=1;
		   rem=g1-1;
		   g1=1;
		}
             else if(g1>0&&g2>0&&g3>0)
		 {
                     if(g1==g2&&g2==g3)
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }
			}
                    else if(g1==g2)
                       {
			  gp=3;
 			  switch(g1)
			    {
  				case 1:{rem=g3-1;
	 				 g3=1;
	  			       }break;
  				default:{rem=g3;
	  				 g3=0;
	  				}break;
			    }
                       }
		    else if(g1==g3)
		       {
			  gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2-1;
	 				 g2=1;
	  			       }break;
  				default:{rem=g2;
	  				 g2=0;
	  				}break;
			    }
			}	
           	    else if(g2==g3)
			{
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1-1;
	 				 g1=1;
	  			       }break;
  				default:{rem=g1;
	  				 g1=0;
	  				}break;
			    }
			}	
                    else 
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }	                 		
         	    	}
                 }
             else if(g1>0&&g2>0&&g3==0)
		{
		   if(g1>g2)
		     {
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g2;
	  				 g1=g2;
	  				}break;
			    }
		     }
		   else if(g2>g1)
                     {
			gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g1;
	  				 g2=g1;
	  				}break;
			    }
		     }  
		   else 
      		     {
			c=rand()%3;
                       if(c==2)
                       gp=1;
                       else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		     }
	        }
             else if(g1>0&&g2==0&&g3>0)
                {
		   if(g1>g3)
		     {
			gp=1;
			switch(g3)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g3;
	  				 g1=g3;
	  				}break;
			    }
         	     }
		  else if(g3>g1)
		     {
			gp=3;
			switch(g1)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g1;
	  				 g3=g1;
	  				}break;
			    }
		    }
		  else
                     {
                       c=rand()%3;
                       if(c==1)
                       gp=3;
                       else gp=c+1;
		       switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}	
		     }
                }
             else if(g1==0&&g2>0&&g3>0)
              {
		if(g2>g3)
		     {
			gp=2;
			switch(g3)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g3;
	  				 g2=g3;
	  				}break;
			    }
         	     }
		else if(g3>g2)
		     {
			gp=3;
			switch(g2)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g2;
	  				 g3=g2;
	  				}break;
			    }
		     }
             	else 
            	   {
			c=rand()%3;
                        if(c==0)
                   	gp=2;
                	else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		   }
              }
             else if(g1>0&&g2==0&&g3==0)
                {
			gp=1;
			switch(g1)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-1;
	  				 g1=1;
	  				}break;
			    }
		}
             else if(g1==0&&g2>0&&g3==0)
                  {
			gp=2;
			switch(g2)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-1;
	  				 g2=1;
	  				}break;
			    }
		  }            
	     else if(g1==0&&g2==0&&g3>0)
                 {
			gp=3;
			switch(g3)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-1;
	  				 g3=1;
	  				}break;
			    }
		}       
	     
         cout<<"\n\n\t\tComputer select the group-"<<gp
             <<"\n\n\t\tand remove "<<rem<<" bubbles.";
         delay(2500);
         clrscr();
         cleardevice();
                     cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
		     Frame(g1,g2,g3,cbd,cbb);
      	         if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	         { 
			     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	             cout<<"\n\n\t\tComputer wins."  ;
	             cout<<"\n\n\t\tPlayer loses.";lose();
	             flag=0;
	         }
	         if(g1==0&&g2==0&&g3==0)
	         { 
			    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<"\n\n\t\tPlayer wins."  ;
	            cout<<"\n\n\t\tComputer loses.";win();
	            flag=0;
	         }
              }
	 }
	 cout<<"\n\n\t\tDo you want to play again?(y/n):";
	 cin>>ch;
	 if(ch=='y')
	   mainScreen(cbd,cbb);
     else exit;
}

void StartComputer1(int cbd,int cbb)
{clrscr();
cleardevice();
int g1,g2,g3,cg,gp,c,rem,flag=1;char ch;
    Player();
	cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	while(cg<27)
	{wrong();
	clrscr();
	cleardevice();
         Player();
	cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles. \n\nPlease enter again.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	}
         clrscr();
         cleardevice();
	 cout<<"\n\t\t\t\t     Level 1";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
	 while(flag)
	 {
	    if(g1>0&&g2>0&&g3>0)
		   gp=(rand()%3)+1;
         else if(g1>0&&g2>0&&g3==0)
           gp=(rand()%2)+1;
         else if(g1>0&&g2==0&&g3>0)
	     {c=rand()%3;
            if(c==1)
               gp=3;
            else gp=c+1;
            }
         else if(g1==0&&g2>0&&g3>0)
           {
           	c=rand()%3;
            if(c==0)
               gp=2;
            else gp=c+1;
           }
         else if(g1>0&&g2==0&&g3==0)
             gp=1;
         else if(g1==0&&g2>0&&g3==0)
           gp=2;
         else if(g1==0&&g2==0&&g3>0)
            gp=3;
       switch(gp)
              {
             	case 1:{rem=(rand()%g1)+1;
                        g1=g1-rem;}break; 
                case 2:{rem=(rand()%g2)+1;
                        g2=g2-rem;}break; 
                case 3:{rem=(rand()%g3)+1;
                        g3=g3-rem;}break; 
              }
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout<<"\n\n\t\tComputer select the group-"<<gp
             <<"\n\n\t\tand remove "<<rem<<" bubbles.";
         delay(2500);
         clrscr();
         cleardevice();
       	 cout<<"\n\t\t\t\t     Level 1";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3"; 
	 Frame(g1,g2,g3,cbd,cbb);
         if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tComputer wins."  ;
	       cout<<"\n\n\t\tPlayer loses.";lose();
	       flag=0;
	     }
	 else if(g1==0&&g2==0&&g3==0)
	    {   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tPlayer wins."  ;
	       cout<<"\n\n\t\tComputer loses.";win();
	       flag=0;
	     }
	  else{  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		     Player();
	         gp=SelectGp(g1,g2,g3);
	       while(gp<1||gp>3)
	  {wrong();
	  	clrscr();
	  	cleardevice();
                cout<<"\n\t\t\t\t     Level 1";
                cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	Player();
  		gp=SelectGp(g1,g2,g3);
  	  }
  	  switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                cout<<"\n\t\t\t\t     Level 1";
         			cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                 cout<<"\n\t\t\t\t     Level 1";
         			 cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                 Player();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                 	 cout<<"\n\t\t\t\t     Level 1";
         				cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
              }
  	  
	         switch(gp)
	         {
		 case 1:{rem=RemoveBub1(g1);
	             while(rem>g1||rem<1)
				 {wrong();
				  clrscr();
				  cleardevice();
                                  cout<<"\n\t\t\t\t     Level 1";
         			  cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				  Frame(g1,g2,g3,cbd,cbb);
				  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				  Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g1,rem);
				  }
				  g1=g1-rem;
				  }break;
	   case 2:{rem=RemoveBub1(g2);
	             while(rem>g2||rem<1)
				 {wrong();
				 clrscr();
				 cleardevice();
                                 	 cout<<"\n\t\t\t\t     Level 1";
         				cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g2,rem);
				  }
				  g2=g2-rem;
				  }break;
	   case 3:{rem=RemoveBub1(g3);
	             while(rem>g3||rem<1)
				 {wrong();
				 clrscr();
				 cleardevice();
                                 	 cout<<"\n\t\t\t\t     Level 1";
         			cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g3,rem);
				  }
				  g3=g3-rem;
				  }break;
	          }
                 
                  clrscr();
         cleardevice();
       	 cout<<"\n\t\t\t\t     Level 1";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3"; 
	 Frame(g1,g2,g3,cbd,cbb);        
	          if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	          {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	              cout<<"\n\n\t\tPlayer wins."  ;
	              cout<<"\n\n\t\tComputer loses.";win();
	              flag=0;
	          }
	          if(g1==0&&g2==0&&g3==0)
	          {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	              cout<<"\n\n\t\tComputer wins."  ;
	              cout<<"\n\n\t\tPlayer loses.";lose();
	              flag=0;
	           }
	    }
	    }
	  cout<<"\n\n\t\tDo you want to play again?(y/n):";
	 cin>>ch;
	 if(ch=='y')
	   mainScreen(cbd,cbb);
     else exit;
}

void StartComputer2(int cbd,int cbb)
{clrscr();
cleardevice();
int g1,g2,g3,gp,cg,c,rem,flag=1;char ch;
    Player();
	 cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	while(cg<27)
	{wrong();
	clrscr();
	cleardevice();
         Player();
	cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles. \n\nPlease enter again.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	}
         clrscr();
         cleardevice(); 
         cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
	 while(flag)
	 {
	      if(g1>0&&g2>0&&g3>0)
		 {
		    if(g1==g2&&g2==g3)
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }
			}
                    else if(g1==g2)
                       {
			  gp=3;
 			  switch(g1)
			    {
  				case 1:{rem=g3-1;
	 				 g3=1;
	  			       }break;
  				default:{rem=g3;
	  				 g3=0;
	  				}break;
			    }
                       }
		    else if(g1==g3)
		       {
			  gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2-1;
	 				 g2=1;
	  			       }break;
  				default:{rem=g2;
	  				 g2=0;
	  				}break;
			    }
			}	
           	    else if(g2==g3)
			{
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1-1;
	 				 g1=1;
	  			       }break;
  				default:{rem=g1;
	  				 g1=0;
	  				}break;
			    }
			}	
                    else 
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }	                 		
         	    	}
                 }
             else if(g1>0&&g2>0&&g3==0)
		{
		   if(g1>g2)
		     {
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g2;
	  				 g1=g2;
	  				}break;
			    }
		     }
		   else if(g2>g1)
                     {
			gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g1;
	  				 g2=g1;
	  				}break;
			    }
		     }  
		   else 
      		     {
			c=rand()%3;
                       if(c==2)
                       gp=1;
                       else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		     }
	        }
             else if(g1>0&&g2==0&&g3>0)
                {
		   if(g1>g3)
		     {
			gp=1;
			switch(g3)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g3;
	  				 g1=g3;
	  				}break;
			    }
         	     }
		  else if(g3>g1)
		     {
			gp=3;
			switch(g1)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g1;
	  				 g3=g1;
	  				}break;
			    }
		    }
		  else
                     {
                       c=rand()%3;
                       if(c==1)
                       gp=3;
                       else gp=c+1;
		       switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}	
		     }
                }
             else if(g1==0&&g2>0&&g3>0)
              {
		if(g2>g3)
		     {
			gp=2;
			switch(g3)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g3;
	  				 g2=g3;
	  				}break;
			    }
         	     }
		else if(g3>g2)
		     {
			gp=3;
			switch(g2)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g2;
	  				 g3=g2;
	  				}break;
			    }
		     }
             	else 
            	   {
			c=rand()%3;
                        if(c==0)
                   	gp=2;
                	else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		   }
              }
             else if(g1>0&&g2==0&&g3==0)
                {
			gp=1;
			switch(g1)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-1;
	  				 g1=1;
	  				}break;
			    }
		}
             else if(g1==0&&g2>0&&g3==0)
                  {
			gp=2;
			switch(g2)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-1;
	  				 g2=1;
	  				}break;
			    }
		  }            
	     else if(g1==0&&g2==0&&g3>0)
                 {
			gp=3;
			switch(g3)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-1;
	  				 g3=1;
	  				}break;
			    }
		}           
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout<<"\n\n\t\tComputer select the group-"<<gp
             <<"\n\n\t\tand remove "<<rem<<" bubbles.";
         delay(2500);
         clrscr();
         cleardevice();
        cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
         if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tComputer wins."  ;
	       cout<<"\n\n\t\tPlayer loses.";lose();
	       flag=0;
	     }
	 else if(g1==0&&g2==0&&g3==0)
	    {   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tPlayer wins."  ;
	       cout<<"\n\n\t\tComputer loses.";win();
	       flag=0;
	     }
	  else{  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		     Player();
	         gp=SelectGp(g1,g2,g3);
	       while(gp<1||gp>3)
	  {wrong();
	  	clrscr();
	  	cleardevice();
                 cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	Player();
  		gp=SelectGp(g1,g2,g3);
  	  }
  	  switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                  cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                   cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                 Player();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                   cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
              }
  	  
	         switch(gp)
	         {
		 case 1:{rem=RemoveBub1(g1);
	             while(rem>g1||rem<1)
				 {wrong();
				  clrscr();
				  cleardevice();
                                  cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				  Frame(g1,g2,g3,cbd,cbb);
				  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				  Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g1,rem);
				  }
				  g1=g1-rem;
				  }break;
	   case 2:{rem=RemoveBub1(g2);
	             while(rem>g2||rem<1)
				 {wrong();
				 clrscr();
				 cleardevice();
                                  cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g2,rem);
				  }
				  g2=g2-rem;
				  }break;
	   case 3:{rem=RemoveBub1(g3);
	             while(rem>g3||rem<1)
				 {wrong();
				 clrscr();
				 cleardevice();
                                  cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g3,rem);
				  }
				  g3=g3-rem;
				  }break;
	          }
                 
                  clrscr();
         cleardevice();
        cout<<"\n\t\t\t\t     Level 2";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);        
	          if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	          {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	              cout<<"\n\n\t\tPlayer wins."  ;
	              cout<<"\n\n\t\tComputer loses.";win();
	              flag=0;
	          }
	          if(g1==0&&g2==0&&g3==0)
	          {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	              cout<<"\n\n\t\tComputer wins."  ;
	              cout<<"\n\n\t\tPlayer loses.";lose();
	              flag=0;
	           }
	    }
	    }
	  cout<<"\n\n\t\tDo you want to play again?(y/n):";
	 cin>>ch;
	 if(ch=='y')
	   mainScreen(cbd,cbb);
     else exit;
}

void StartComputer3(int cbd,int cbb)
{clrscr();
cleardevice();
int g1,g2,g3,gp,cg,c,rem,flag=1;char ch;
    Player();
	 cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	while(cg<27)
	{wrong();
	clrscr();
	cleardevice();
         Player();
	cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles. \n\nPlease enter again.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	}
         clrscr();
         cleardevice();
          cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
	 while(flag)
	 {

	     if(g1==1&&g2==2&&g3>3||g1==2&&g2==1&&g3>3)
		{
		   gp=3;
		   rem=g3-3;
		   g3=3;
		}
	     else if(g1==1&&g3==2&&g2>3||g1==2&&g3==1&&g2>3)
		{
		   gp=2;
		   rem=g2-3;
		   g2=3;
		}
	     else if(g2==1&&g3==2&&g1>3||g2==2&&g3==1&&g1>3)
		{
		   gp=1;
		   rem=g1-3;
		   g1=3;
		}
	     else if(g1==1&&g2==3&&g3>2||g1==3&&g2==1&&g3>2)
		{
		   gp=3;
		   rem=g3-2;
		   g3=2;
		}
	     else if(g1==1&&g3==3&&g2>2||g1==3&&g3==1&&g2>2)
		{
		   gp=2;
		   rem=g2-2;
		   g2=2;
		}
	     else if(g2==1&&g3==3&&g1>2||g2==3&&g3==1&&g1>2)
		{
		   gp=1;
		   rem=g1-2;
		   g1=2;
		}
	     else if(g1==3&&g2==2&&g3>1||g1==2&&g2==3&&g3>1)
		{
		   gp=3;
		   rem=g3-1;
		   g3=1;
		}
	     else if(g1==3&&g3==2&&g2>1||g1==2&&g3==3&&g2>1)
		{
		   gp=2;
		   rem=g2-1;
		   g2=1;
		}
	     else if(g2==3&&g3==2&&g1>1||g2==2&&g3==3&&g1>1)
		{
		   gp=1;
		   rem=g1-1;
		   g1=1;
		}
             else if(g1>0&&g2>0&&g3>0)
		 {
                    if(g1==g2&&g2==g3)
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }
			}
                    else if(g1==g2)
                       {
			  gp=3;
 			  switch(g1)
			    {
  				case 1:{rem=g3-1;
	 				 g3=1;
	  			       }break;
  				default:{rem=g3;
	  				 g3=0;
	  				}break;
			    }
                       }
		    else if(g1==g3)
		       {
			  gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2-1;
	 				 g2=1;
	  			       }break;
  				default:{rem=g2;
	  				 g2=0;
	  				}break;
			    }
			}	
           	    else if(g2==g3)
			{
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1-1;
	 				 g1=1;
	  			       }break;
  				default:{rem=g1;
	  				 g1=0;
	  				}break;
			    }
			}	
                    else 
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }	                 		
         	    	}
                 }
             else if(g1>0&&g2>0&&g3==0)
		{
		   if(g1>g2)
		     {
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g2;
	  				 g1=g2;
	  				}break;
			    }
		     }
		   else if(g2>g1)
                     {
			gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g1;
	  				 g2=g1;
	  				}break;
			    }
		     }  
		   else 
      		     {
			c=rand()%3;
                       if(c==2)
                       gp=1;
                       else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		     }
	        }
             else if(g1>0&&g2==0&&g3>0)
                {
		   if(g1>g3)
		     {
			gp=1;
			switch(g3)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g3;
	  				 g1=g3;
	  				}break;
			    }
         	     }
		  else if(g3>g1)
		     {
			gp=3;
			switch(g1)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g1;
	  				 g3=g1;
	  				}break;
			    }
		    }
		  else
                     {
                       c=rand()%3;
                       if(c==1)
                       gp=3;
                       else gp=c+1;
		       switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}	
		     }
                }
             else if(g1==0&&g2>0&&g3>0)
              {
		if(g2>g3)
		     {
			gp=2;
			switch(g3)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g3;
	  				 g2=g3;
	  				}break;
			    }
         	     }
		else if(g3>g2)
		     {
			gp=3;
			switch(g2)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g2;
	  				 g3=g2;
	  				}break;
			    }
		     }
             	else 
            	   {
			c=rand()%3;
                        if(c==0)
                   	gp=2;
                	else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		   }
              }
             else if(g1>0&&g2==0&&g3==0)
                {
			gp=1;
			switch(g1)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-1;
	  				 g1=1;
	  				}break;
			    }
		}
             else if(g1==0&&g2>0&&g3==0)
                  {
			gp=2;
			switch(g2)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-1;
	  				 g2=1;
	  				}break;
			    }
		  }            
	     else if(g1==0&&g2==0&&g3>0)
                 {
			gp=3;
			switch(g3)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-1;
	  				 g3=1;
	  				}break;
			    }
		}           
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout<<"\n\n\t\tComputer select the group-"<<gp
             <<"\n\n\t\tand remove "<<rem<<" bubbles.";
         delay(2500);
         clrscr();
         cleardevice();
        cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
         if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tComputer wins."  ;
	       cout<<"\n\n\t\tPlayer loses.";lose();
	       flag=0;
	     }
	 else if(g1==0&&g2==0&&g3==0)
	    {   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tPlayer wins."  ;
	       cout<<"\n\n\t\tComputer loses.";win();
	       flag=0;
	     }
	  else{  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		     Player();
	         gp=SelectGp(g1,g2,g3);
	       while(gp<1||gp>3)
	  {wrong();
	  	clrscr();
	  	cleardevice();
                 cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	Player();
  		gp=SelectGp(g1,g2,g3);
  	  }
  	  switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                  cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                  cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                 Player();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                   cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
              }
  	  
	         switch(gp)
	         {
		 case 1:{rem=RemoveBub1(g1);
	             while(rem>g1||rem<1)
				 {wrong();
				  clrscr();
				  cleardevice();
                                   cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				  Frame(g1,g2,g3,cbd,cbb);
				  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				  Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g1,rem);
				  }
				  g1=g1-rem;
				  }break;
	   case 2:{rem=RemoveBub1(g2);
	             while(rem>g2||rem<1)
				 {wrong();
				 clrscr();
				 cleardevice();
                                  cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g2,rem);
				  }
				  g2=g2-rem;
				  }break;
	   case 3:{rem=RemoveBub1(g3);
	             while(rem>g3||rem<1)
				 {wrong();
				 clrscr();
				 cleardevice();
                                 cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g3,rem);
				  }
				  g3=g3-rem;
				  }break;
	          }
                 
                  clrscr();
         cleardevice();
       cout<<"\n\t\t\t\t     Level 3";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);        
	          if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	          {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	              cout<<"\n\n\t\tPlayer wins."  ;
	              cout<<"\n\n\t\tComputer loses.";win();
	              flag=0;
	          }
	          if(g1==0&&g2==0&&g3==0)
	          {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	              cout<<"\n\n\t\tComputer wins."  ;
	              cout<<"\n\n\t\tPlayer loses.";lose();
	              flag=0;
	           }
	    }
	    }
	  cout<<"\n\n\t\tDo you want to play again?(y/n):";
	 cin>>ch;
	 if(ch=='y')
	   mainScreen(cbd,cbb);
     else exit;
}

void StartComputer4(int cbd,int cbb)
{clrscr();
cleardevice();
int g1,g2,g3,gp,cg,c,rem,flag=1;char ch;
    Player();
	  cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	while(cg<27)
	{wrong();
	clrscr();
	cleardevice();
         Player();
	cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles. \n\nPlease enter again.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	}
         clrscr();
         cleardevice();
        cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
	 while(flag)
	 {
 	if(g1==1&&g2==4&&g3>5||g1==4&&g2==1&&g3>5)
		{
			gp=3;
			rem=g3-5;
			g3=5;
		}
	     else if(g1==1&&g3==4&&g3>5||g1==4&&g3==1&&g2>5)
		{
			gp=2;
			rem=g2-5;
			g2=5;
		}
	     else if(g2==1&&g3==4&&g1>5||g2==4&&g3==1&&g1>5)
		{
			gp=1;
			rem=g1-5;
			g1=5;
		}
	     else if(g1==1&&g2==5&&g3>4||g1==5&&g2==1&&g3>4)
		{
			gp=3;
			rem=g3-4;
			g3=4;
		}
	     else if(g1==1&&g3==5&&g2>4||g1==5&&g3==1&&g2>4)
		{
			gp=2;
			rem=g2-4;
			g2=4;
		}
	     else if(g2==1&&g3==5&&g1>4||g2==5&&g3==1&&g1>4)
		{
			gp=1;
			rem=g1-4;
			g1=4;
		}
	     else if(g1==4&&g2==5&&g3>1||g1==5&&g2==4&&g3>1)
		{
			gp=3;
			rem=g3-1;
			g3=1;
		}
	     else if(g1==4&&g3==5&&g2>1||g1==5&&g3==4&&g2>1)
		{
			gp=2;
			rem=g2-1;
			g2=1;
		}
	     else if(g2==4&&g3==5&&g1>1||g2==5&&g3==4&&g1>1)
		{
			gp=1;
			rem=g1-1;
			g1=1;
		}
	     else if(g1==1&&g2==2&&g3>3||g1==2&&g2==1&&g3>3)
		{
		   gp=3;
		   rem=g3-3;
		   g3=3;
		}
	     else if(g1==1&&g3==2&&g2>3||g1==2&&g3==1&&g2>3)
		{
		   gp=2;
		   rem=g2-3;
		   g2=3;
		}
	     else if(g2==1&&g3==2&&g1>3||g2==2&&g3==1&&g1>3)
		{
		   gp=1;
		   rem=g1-3;
		   g1=3;
		}
	     else if(g1==1&&g2==3&&g3>2||g1==3&&g2==1&&g3>2)
		{
		   gp=3;
		   rem=g3-2;
		   g3=2;
		}
	     else if(g1==1&&g3==3&&g2>2||g1==3&&g3==1&&g2>2)
		{
		   gp=2;
		   rem=g2-2;
		   g2=2;
		}
	     else if(g2==1&&g3==3&&g1>2||g2==3&&g3==1&&g1>2)
		{
		   gp=1;
		   rem=g1-2;
		   g1=2;
		}
	     else if(g1==3&&g2==2&&g3>1||g1==2&&g2==3&&g3>1)
		{
		   gp=3;
		   rem=g3-1;
		   g3=1;
		}
	     else if(g1==3&&g3==2&&g2>1||g1==2&&g3==3&&g2>1)
		{
		   gp=2;
		   rem=g2-1;
		   g2=1;
		}
	     else if(g2==3&&g3==2&&g1>1||g2==2&&g3==3&&g1>1)
		{
		   gp=1;
		   rem=g1-1;
		   g1=1;
		}
             else if(g1>0&&g2>0&&g3>0)
		 {
		    if(g1==g2&&g2==g3)
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }
			}
                    else if(g1==g2)
                       {
			  gp=3;
 			  switch(g1)
			    {
  				case 1:{rem=g3-1;
	 				 g3=1;
	  			       }break;
  				default:{rem=g3;
	  				 g3=0;
	  				}break;
			    }
                       }
		    else if(g1==g3)
		       {
			  gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2-1;
	 				 g2=1;
	  			       }break;
  				default:{rem=g2;
	  				 g2=0;
	  				}break;
			    }
			}	
           	    else if(g2==g3)
			{
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1-1;
	 				 g1=1;
	  			       }break;
  				default:{rem=g1;
	  				 g1=0;
	  				}break;
			    }
			}	
                    else 
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }	                 		
         	    	}
                 }
             else if(g1>0&&g2>0&&g3==0)
		{
		   if(g1>g2)
		     {
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g2;
	  				 g1=g2;
	  				}break;
			    }
		     }
		   else if(g2>g1)
                     {
			gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g1;
	  				 g2=g1;
	  				}break;
			    }
		     }  
		   else 
      		     {
			c=rand()%3;
                       if(c==2)
                       gp=1;
                       else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		     }
	        }
             else if(g1>0&&g2==0&&g3>0)
                {
		   if(g1>g3)
		     {
			gp=1;
			switch(g3)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g3;
	  				 g1=g3;
	  				}break;
			    }
         	     }
		  else if(g3>g1)
		     {
			gp=3;
			switch(g1)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g1;
	  				 g3=g1;
	  				}break;
			    }
		    }
		  else
                     {
                       c=rand()%3;
                       if(c==1)
                       gp=3;
                       else gp=c+1;
		       switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}	
		     }
                }
             else if(g1==0&&g2>0&&g3>0)
              {
		if(g2>g3)
		     {
			gp=2;
			switch(g3)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g3;
	  				 g2=g3;
	  				}break;
			    }
         	     }
		else if(g3>g2)
		     {
			gp=3;
			switch(g2)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g2;
	  				 g3=g2;
	  				}break;
			    }
		     }
             	else 
            	   {
			c=rand()%3;
                        if(c==0)
                   	gp=2;
                	else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		   }
              }
             else if(g1>0&&g2==0&&g3==0)
                {
			gp=1;
			switch(g1)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-1;
	  				 g1=1;
	  				}break;
			    }
		}
             else if(g1==0&&g2>0&&g3==0)
                  {
			gp=2;
			switch(g2)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-1;
	  				 g2=1;
	  				}break;
			    }
		  }            
	     else if(g1==0&&g2==0&&g3>0)
                 {
			gp=3;
			switch(g3)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-1;
	  				 g3=1;
	  				}break;
			    }
		}           
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout<<"\n\n\t\tComputer select the group-"<<gp
             <<"\n\n\t\tand remove "<<rem<<" bubbles.";
         delay(2500);
         clrscr();
         cleardevice();
       cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
         if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tComputer wins."  ;
	       cout<<"\n\n\t\tPlayer loses.";lose();
	       flag=0;
	     }
	 else if(g1==0&&g2==0&&g3==0)
	    {   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tPlayer wins."  ;
	       cout<<"\n\n\t\tComputer loses.";win();
	       flag=0;
	     }
	  else{  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		     Player();
	         gp=SelectGp(g1,g2,g3);
	       while(gp<1||gp>3)
	  {wrong();
	  	clrscr();
	  	cleardevice();
                cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	Player();
  		gp=SelectGp(g1,g2,g3);
  	  }
  	  switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                 cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                  cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                 Player();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                  cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
              }
  	  
	         switch(gp)
	         {
		 case 1:{rem=RemoveBub1(g1);
	             while(rem>g1||rem<1)
				 {wrong();
				  clrscr();
				  cleardevice();
                                 cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				  Frame(g1,g2,g3,cbd,cbb);
				  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				  Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g1,rem);
				  }
				  g1=g1-rem;
				  }break;
	   case 2:{rem=RemoveBub1(g2);
	             while(rem>g2||rem<1)
				 {wrong();
				 clrscr();
				 cleardevice();
                                  cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g2,rem);
				  }
				  g2=g2-rem;
				  }break;
	   case 3:{rem=RemoveBub1(g3);
	             while(rem>g3||rem<1)
				 {wrong();
				 clrscr();
				 cleardevice();
                                  cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g3,rem);
				  }
				  g3=g3-rem;
				  }break;
	          }
                 
                  clrscr();
         cleardevice();
       cout<<"\n\t\t\t\t     Level 4";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);        
	          if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	          {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	              cout<<"\n\n\t\tPlayer wins."  ;
	              cout<<"\n\n\t\tComputer loses.";win();
	              flag=0;
	          }
	          if(g1==0&&g2==0&&g3==0)
	          {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	              cout<<"\n\n\t\tComputer wins."  ;
	              cout<<"\n\n\t\tPlayer loses.";lose();
	              flag=0;
	           }
	    }
	    }
	  cout<<"\n\n\t\tDo you want to play again?(y/n):";
	 cin>>ch;
	 if(ch=='y')
	   mainScreen(cbd,cbb);
     else exit;
}

void StartComputer5(int cbd,int cbb)
{clrscr();
cleardevice();
int g1,g2,g3,gp,cg,c,rem,flag=1;char ch;
    Player();
	  cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	while(cg<27)
	{wrong();
	clrscr();
	cleardevice();
         Player();
	cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles. \n\nPlease enter again.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	}
         clrscr();
         cleardevice();
         cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
	 while(flag)
	 {
	if(g1==2&&g2==6&&g3>4||g1==6&&g2==2&&g3>4)
		{
			gp=3;
			rem=g3-4;
			g3=4;
		}
	     else if(g1==2&&g3==6&&g3>4||g1==6&&g3==2&&g2>4)
		{
			gp=2;
			rem=g2-4;
			g2=4;
		}
	     else if(g2==2&&g3==6&&g1>4||g2==6&&g3==2&&g1>4)
		{
			gp=1;
			rem=g1-4;
			g1=4;
		}
	     else if(g1==2&&g2==4&&g3>6||g1==4&&g2==2&&g3>6)
		{
			gp=3;
			rem=g3-6;
			g3=6;
		}
	     else if(g1==2&&g3==4&&g2>6||g1==4&&g3==2&&g2>6)
		{
			gp=2;
			rem=g2-6;
			g2=6;
		}
	     else if(g2==2&&g3==4&&g1>6||g2==4&&g3==2&&g1>6)
		{
			gp=1;
			rem=g1-6;
			g1=6;
		}
	     else if(g1==6&&g2==4&&g3>2||g1==4&&g2==6&&g3>2)
		{
			gp=3;
			rem=g3-2;
			g3=2;
		}
	     else if(g1==6&&g3==4&&g2>2||g1==4&&g3==6&&g2>2)
		{
			gp=2;
			rem=g2-2;
			g2=2;
		}
	     else if(g2==6&&g3==4&&g1>2||g2==4&&g3==6&&g1>2)
		{
			gp=1;
			rem=g1-2;
			g1=2;
		}
	     else if(g1==1&&g2==4&&g3>5||g1==4&&g2==1&&g3>5)
		{
			gp=3;
			rem=g3-5;
			g3=5;
		}
	     else if(g1==1&&g3==4&&g3>5||g1==4&&g3==1&&g2>5)
		{
			gp=2;
			rem=g2-5;
			g2=5;
		}
	     else if(g2==1&&g3==4&&g1>5||g2==4&&g3==1&&g1>5)
		{
			gp=1;
			rem=g1-5;
			g1=5;
		}
	     else if(g1==1&&g2==5&&g3>4||g1==5&&g2==1&&g3>4)
		{
			gp=3;
			rem=g3-4;
			g3=4;
		}
	     else if(g1==1&&g3==5&&g2>4||g1==5&&g3==1&&g2>4)
		{
			gp=2;
			rem=g2-4;
			g2=4;
		}
	     else if(g2==1&&g3==5&&g1>4||g2==5&&g3==1&&g1>4)
		{
			gp=1;
			rem=g1-4;
			g1=4;
		}
	     else if(g1==4&&g2==5&&g3>1||g1==5&&g2==4&&g3>1)
		{
			gp=3;
			rem=g3-1;
			g3=1;
		}
	     else if(g1==4&&g3==5&&g2>1||g1==5&&g3==4&&g2>1)
		{
			gp=2;
			rem=g2-1;
			g2=1;
		}
	     else if(g2==4&&g3==5&&g1>1||g2==5&&g3==4&&g1>1)
		{
			gp=1;
			rem=g1-1;
			g1=1;
		}
	     else if(g1==1&&g2==2&&g3>3||g1==2&&g2==1&&g3>3)
		{
		   gp=3;
		   rem=g3-3;
		   g3=3;
		}
	     else if(g1==1&&g3==2&&g2>3||g1==2&&g3==1&&g2>3)
		{
		   gp=2;
		   rem=g2-3;
		   g2=3;
		}
	     else if(g2==1&&g3==2&&g1>3||g2==2&&g3==1&&g1>3)
		{
		   gp=1;
		   rem=g1-3;
		   g1=3;
		}
	     else if(g1==1&&g2==3&&g3>2||g1==3&&g2==1&&g3>2)
		{
		   gp=3;
		   rem=g3-2;
		   g3=2;
		}
	     else if(g1==1&&g3==3&&g2>2||g1==3&&g3==1&&g2>2)
		{
		   gp=2;
		   rem=g2-2;
		   g2=2;
		}
	     else if(g2==1&&g3==3&&g1>2||g2==3&&g3==1&&g1>2)
		{
		   gp=1;
		   rem=g1-2;
		   g1=2;
		}
	     else if(g1==3&&g2==2&&g3>1||g1==2&&g2==3&&g3>1)
		{
		   gp=3;
		   rem=g3-1;
		   g3=1;
		}
	     else if(g1==3&&g3==2&&g2>1||g1==2&&g3==3&&g2>1)
		{
		   gp=2;
		   rem=g2-1;
		   g2=1;
		}
	     else if(g2==3&&g3==2&&g1>1||g2==2&&g3==3&&g1>1)
		{
		   gp=1;
		   rem=g1-1;
		   g1=1;
		}
             else if(g1>0&&g2>0&&g3>0)
		 {
		    if(g1==g2&&g2==g3)
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }
			}
                    else if(g1==g2)
                       {
			  gp=3;
 			  switch(g1)
			    {
  				case 1:{rem=g3-1;
	 				 g3=1;
	  			       }break;
  				default:{rem=g3;
	  				 g3=0;
	  				}break;
			    }
                       }
		    else if(g1==g3)
		       {
			  gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2-1;
	 				 g2=1;
	  			       }break;
  				default:{rem=g2;
	  				 g2=0;
	  				}break;
			    }
			}	
           	    else if(g2==g3)
			{
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1-1;
	 				 g1=1;
	  			       }break;
  				default:{rem=g1;
	  				 g1=0;
	  				}break;
			    }
			}	
                    else 
			{
			  gp=(rand()%3)+1;
		    	  switch(gp)
               		   {
             		    case 1:{rem=(rand()%g1)+1;
                       		   g1=g1-rem;}break; 
                	    case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	    case 3:{rem=(rand()%g3)+1;
                        	   g3=g3-rem;}break; 
			   }	                 		
         	    	}
                 }
             else if(g1>0&&g2>0&&g3==0)
		{
		   if(g1>g2)
		     {
			gp=1;
			switch(g2)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g2;
	  				 g1=g2;
	  				}break;
			    }
		     }
		   else if(g2>g1)
                     {
			gp=2;
			switch(g1)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g1;
	  				 g2=g1;
	  				}break;
			    }
		     }  
		   else 
      		     {
			c=rand()%3;
                       if(c==2)
                       gp=1;
                       else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		     }
	        }
             else if(g1>0&&g2==0&&g3>0)
                {
		   if(g1>g3)
		     {
			gp=1;
			switch(g3)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-g3;
	  				 g1=g3;
	  				}break;
			    }
         	     }
		  else if(g3>g1)
		     {
			gp=3;
			switch(g1)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g1;
	  				 g3=g1;
	  				}break;
			    }
		    }
		  else
                     {
                       c=rand()%3;
                       if(c==1)
                       gp=3;
                       else gp=c+1;
		       switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}	
		     }
                }
             else if(g1==0&&g2>0&&g3>0)
              {
		if(g2>g3)
		     {
			gp=2;
			switch(g3)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-g3;
	  				 g2=g3;
	  				}break;
			    }
         	     }
		else if(g3>g2)
		     {
			gp=3;
			switch(g2)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-g2;
	  				 g3=g2;
	  				}break;
			    }
		     }
             	else 
            	   {
			c=rand()%3;
                        if(c==0)
                   	gp=2;
                	else gp=c+1;
			switch(gp)
             		 {
             		   case 1:{rem=(rand()%g1)+1;
                        	   g1=g1-rem;}break; 
                	   case 2:{rem=(rand()%g2)+1;
                        	   g2=g2-rem;}break; 
                	   case 3:{rem=(rand()%g3)+1;
                        	  g3=g3-rem;}break; 
              		}
		   }
              }
             else if(g1>0&&g2==0&&g3==0)
                {
			gp=1;
			switch(g1)
			    {
  				case 1:{rem=g1;
	 				 g1=0;
	  			       }break;
  				default:{rem=g1-1;
	  				 g1=1;
	  				}break;
			    }
		}
             else if(g1==0&&g2>0&&g3==0)
                  {
			gp=2;
			switch(g2)
			    {
  				case 1:{rem=g2;
	 				 g2=0;
	  			       }break;
  				default:{rem=g2-1;
	  				 g2=1;
	  				}break;
			    }
		  }            
	     else if(g1==0&&g2==0&&g3>0)
                 {
			gp=3;
			switch(g3)
			    {
  				case 1:{rem=g3;
	 				 g3=0;
	  			       }break;
  				default:{rem=g3-1;
	  				 g3=1;
	  				}break;
			    }
		}           
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout<<"\n\n\t\tComputer select the group-"<<gp
             <<"\n\n\t\tand remove "<<rem<<" bubbles.";
         delay(2500);
         clrscr();
         cleardevice();
       cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);
         if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tComputer wins."  ;
	       cout<<"\n\n\t\tPlayer loses.";lose();
	       flag=0;
	     }
	 else if(g1==0&&g2==0&&g3==0)
	    {   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tPlayer wins."  ;
	       cout<<"\n\n\t\tComputer loses.";win();
	       flag=0;
	     }
	  else{  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		     Player();
	         gp=SelectGp(g1,g2,g3);
	       while(gp<1||gp>3)
	  {wrong();
	  	clrscr();
	  	cleardevice();
                cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	Player();
  		gp=SelectGp(g1,g2,g3);
  	  }
  	  switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                 cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                 cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                 Player();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    Player();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
              }
  	  
	         switch(gp)
	         {
		 case 1:{rem=RemoveBub1(g1);
	             while(rem>g1||rem<1)
				 {wrong();
				  clrscr();
				  cleardevice();
                                  cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				  Frame(g1,g2,g3,cbd,cbb);
				  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				  Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g1,rem);
				  }
				  g1=g1-rem;
				  }break;
	   case 2:{rem=RemoveBub1(g2);
	             while(rem>g2||rem<1)
				 {wrong();
				 clrscr();
				 cleardevice();
                                cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g2,rem);
				  }
				  g2=g2-rem;
				  }break;
	   case 3:{rem=RemoveBub1(g3);
	             while(rem>g3||rem<1)
				 {wrong();
				 clrscr();
				 cleardevice();
                                  cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Player();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g3,rem);
				  }
				  g3=g3-rem;
				  }break;
	          }
                 
                  clrscr();
         cleardevice();
       cout<<"\n\t\t\t\t     Level 5";
         cout<<"\n\n\t     Group-1\t\t     Group-2\t\t     Group-3";
	 Frame(g1,g2,g3,cbd,cbb);        
	          if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	          {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	              cout<<"\n\n\t\tPlayer wins."  ;
	              cout<<"\n\n\t\tComputer loses.";win();
	              flag=0;
	          }
	          if(g1==0&&g2==0&&g3==0)
	          {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	              cout<<"\n\n\t\tComputer wins."  ;
	              cout<<"\n\n\t\tPlayer loses.";lose();
	              flag=0;
	           }
	    }
	    }
	  cout<<"\n\n\t\tDo you want to play again?(y/n):";
	 cin>>ch;
	 if(ch=='y')
	   mainScreen(cbd,cbb);
     else exit;
}

void StartFirst(int cbd,int cbb)
{clrscr();
cleardevice();
	int g1,g2,g3,gp,cg,rem,flag=1;char ch;
		Second();
	       cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	while(cg<27)
	{wrong();
	clrscr();
	cleardevice();
         Second();
	cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles. \n\nPlease enter again.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	}
                 clrscr();
         cleardevice();
         cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	 Frame(g1,g2,g3,cbd,cbb);

	 while(flag)
	 {
	  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  First();
	  gp=SelectGp(g1,g2,g3);
	  while(gp<1||gp>3)
	  {wrong();
	  	clrscr();
	  	cleardevice();
                 cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	First();
  		gp=SelectGp(g1,g2,g3);
  	  }
  	  switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                First();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                 First();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    First();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
              }
	  switch(gp)
	  {
	   case 1:{rem=RemoveBub1(g1);
	             while(rem>g1||rem<1)
				 {wrong();clrscr();
				 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 First();
				 cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g1,rem);
				  }
				  g1=g1-rem;
				  }break;
	   case 2:{rem=RemoveBub1(g2);
	             while(rem>g2||rem<1)
				 {wrong();clrscr();
				 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 First();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g2,rem);
				  }
				  g2=g2-rem;
				  }break;
	   case 3:{rem=RemoveBub1(g3);
	             while(rem>g3||rem<1)
				 {wrong();clrscr();
				 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 First();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g3,rem);
				  }
				  g3=g3-rem;
				  }break;
	   }
                   clrscr();
         cleardevice();
         cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  Frame(g1,g2,g3,cbd,cbb);

	  if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     { cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tFirst player wins."  ;
	       cout<<"\n\n\t\tSecond player loses.";two();
	       flag=0;
	     }
	  else if(g1==0&&g2==0&&g3==0)
	   { cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tSecond player wins."  ;
	       cout<<"\n\n\t\tFirst player loses.";two();
	       flag=0;
	     }
	   else{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		 Second();
	    gp=SelectGp(g1,g2,g3);
	    while(gp<1||gp>3)
	  {wrong();
	  	clrscr();
	  	cleardevice();
                cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	Second();
  		gp=SelectGp(g1,g2,g3);
  	  }
  	  switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                Second();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                Second();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    Second();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
            }
  	  
	    switch(gp)
	   {
	      case 1:{rem=RemoveBub1(g1);
	             while(rem>g1||rem<1)
				 {wrong();clrscr();
				 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Second();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g1,rem);
				  }
				  g1=g1-rem;
				  }break;
	   case 2:{rem=RemoveBub1(g2);
	             while(rem>g2||rem<1)
				 {wrong();clrscr();
				 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Second();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g2,rem);
				  }
				  g2=g2-rem;
				  }break;
	   case 3:{rem=RemoveBub1(g3);
	             while(rem>g3||rem<1)
				 {wrong();clrscr();
				 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Second();
				cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g3,rem);
				  }
				  g3=g3-rem;
				  }break;
	   }
         clrscr();
         cleardevice();
                        cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
			Frame(g1,g2,g3,cbd,cbb);

	 if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     { cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tSecond player wins."  ;
	       cout<<"\n\n\t\tFirst player loses.";two();
	       flag=0;
	     }
	  if(g1==0&&g2==0&&g3==0)
	   { cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tFirst player wins."  ;
	       cout<<"\n\n\t\tSecond player loses.";two();
	       flag=0;
	     }
	 }
	 }
	 cout<<"\n\n\t\tDo you want to play again?(y/n):";
	 cin>>ch;
	 if(ch=='y')
	   mainScreen(cbd,cbb);
     else exit;
  }

void StartSecond(int cbd,int cbb)
{clrscr();
cleardevice();
	int g1,g2,g3,gp,cg,rem,flag=1;char ch;
    First();
	 cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	while(cg<27)
	{wrong();
	clrscr();
	cleardevice();
         First();
	cout<<"\n\nYou have to enter the total bubbles of three groups at least 27 bubbles. \n\nPlease enter again.";
	 g1=FillBubG1();
	 g2=FillBubG2();
	 g3=FillBubG3();
	cg=Checkbub(g1,g2,g3);
	}
         clrscr();
         cleardevice();
         cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	 Frame(g1,g2,g3,cbd,cbb);

	 while(flag)
	 {
	  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  Second();
	  gp=SelectGp(g1,g2,g3);
	 while(gp<1||gp>3)
	  {wrong();
	  	clrscr();
	  	cleardevice();
                cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	Second();
  		gp=SelectGp(g1,g2,g3);
  	  }
  	  switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	               Second();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                 Second();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    Second();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
		 }
  	  
	  switch(gp)
	  {
	   case 1:{rem=RemoveBub1(g1);
	             while(rem>g1||rem<1)
				 {wrong();clrscr();
				 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Second();
				 cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g1,rem);
				  }
				  g1=g1-rem;
				  }break;
	   case 2:{rem=RemoveBub1(g2);
	             while(rem>g2||rem<1)
				 {wrong();clrscr();
				 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Second();
				 cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g2,rem);
				  }
				  g2=g2-rem;
				  }break;
	   case 3:{rem=RemoveBub1(g3);
	             while(rem>g3||rem<1)
				 {wrong();clrscr();
				 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 Second();
				 cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g3,rem);
				  }
				  g3=g3-rem;
				  }break;
	 }
         clrscr();
         cleardevice();
          cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	 Frame(g1,g2,g3,cbd,cbb);

	 if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     { cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tSecond player wins."  ;
	       cout<<"\n\n\t\tFirst player loses.";two();
	       flag=0;
	     }
	 else if(g1==0&&g2==0&&g3==0)
	    {  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tFirst player wins."  ;
	       cout<<"\n\n\t\tSecond player loses.";two();
	       flag=0;
	     }
	else{  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		 First();
	     gp=SelectGp(g1,g2,g3);

	   while(gp<1||gp>3)
	  {wrong();
	  	clrscr();
	  	cleardevice();
                cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	Frame(g1,g2,g3,cbd,cbb);
	  	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	First();
  		gp=SelectGp(g1,g2,g3);
  	  }
  	  switch(gp)
            {
             case 1:if(g1==0)
                       while(gp==1||gp>3||gp<1)
         	           {
						wrong();
						clrscr();
	  	                cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                First();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;
             case 2:if(g2==0)
                        while(gp==2||gp>3||gp<1)
	                    {wrong();
						 clrscr();
	  	                 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                 Frame(g1,g2,g3,cbd,cbb);
	  	                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  	                 First();
	                     gp=SelectGp(g1,g2,g3);
	                     }break;
             case 3:if(g3==0)
                        while(gp==3||gp>3||gp<1)
                    	{
						wrong();
						clrscr();
			  	        cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	  	                Frame(g1,g2,g3,cbd,cbb);
	  	                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	                    First();
	                    gp=SelectGp(g1,g2,g3);
	                    } break;            
		 }
  	  
	  switch(gp)
	  {
	   case 1:{rem=RemoveBub1(g1);
	             while(rem>g1||rem<1)
				 {wrong();clrscr();
				 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 First();
				 cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g1,rem);
				  }
				  g1=g1-rem;
				  }break;
	   case 2:{rem=RemoveBub1(g2);
	             while(rem>g2||rem<1)
				 {wrong();clrscr();
				 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 First();
				 cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g2,rem);
				  }
				  g2=g2-rem;
				  }break;
	   case 3:{rem=RemoveBub1(g3);
	             while(rem>g3||rem<1)
				 {wrong();clrscr();
				 cleardevice();
                                  cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
				 Frame(g1,g2,g3,cbd,cbb);
				 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				 First();
				  cout<<"\n\n\tYou chose group-"<<gp;
				  rem=RemoveBub2(g3,rem);
				  }
				    g3=g3-rem;      
				  }break;
	 }
         clrscr();
         cleardevice();
         cout<<"\n\t\     Group-1\t\t     Group-2\t\t     Group-3"; 
	 Frame(g1,g2,g3,cbd,cbb);

	 if(g1==1&&g2==0&&g3==0||g1==0&&g2==1&&g3==0||g1==0&&g2==0&&g3==1)
	     { cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tFirst player wins."  ;
	       cout<<"\n\n\t\tSecond player loses.";two();
	       flag=0;
	     }
	  if(g1==0&&g2==0&&g3==0)
	     { cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	       cout<<"\n\n\t\tSecond player wins."  ;
	       cout<<"\n\n\t\tFirst player loses.";two();
	       flag=0;
	     }
	 }
}
	  cout<<"\n\n\t\tDo you want to play again?(y/n):";
	 cin>>ch;
	 if(ch=='y')
	   mainScreen(cbd,cbb);
     else exit;
}

void Frame(int g1,int g2,int g3,int cbd,int cbb)
{
  int a=36,b=216,e=75,f=275,j=190,c,g,i,p,q=30,h=40,k,ga,gah,n,x,y;
  for(i=0;i<3;i++)
  {setfillstyle(6,cbd-1);
   setcolor(cbd-1);
    c=a+j*i;
    g=b+j*i;
    rectangle(c,e,g,f);
    //x=(c+g)/2;
    //y=(e+f)/2;
    //floodfill(x,y,WHITE);
  }
  n=1;
  k=1;
  for(p=1;p<=g1;p++)
  {
   setfillstyle(9,cbb-1);
   setcolor(cbd-1);  
   ga=a+(q*n%180);
   gah=e+(h*k%200);
   fillellipse(ga,gah,8,8);
    if(p%5==0)
     { k++;
       n=0;
     }
    n++;
    //floodfill(ga,gah,WHITE);
  }
  n=1;
  k=1;
  for(p=1;p<=g2;p++)
  {
   setfillstyle(9,cbb-1);
   setcolor(cbd-1); 
   ga=a+(q*n%180)+j;
   gah=e+(h*k%200);
   fillellipse(ga,gah,8,8);
    if(p%5==0)
     { k++;
       n=0;
     }
    n++;    
    //floodfill(ga,gah,WHITE);
  }
  n=1;
  k=1;
  for(p=1;p<=g3;p++)
  {
   setfillstyle(9,cbb-1);
   setcolor(cbd-1); 
   ga=a+(q*n%180)+j*2;
   gah=e+(h*k%200);
  fillellipse(ga,gah,8,8);
    if(p%5==0)
     { k++;
       n=0;
     }
    n++;
    //floodfill(ga,gah,WHITE);
    
  }
 }

void First()
{
   cout<<"\n\n\t\tFirst Player ";
}

void Second()
{
 cout<<"\n\n\t\tSecond Player " ;
}

void Player()
{
 cout<<"\n\n\t\tPlayer " ;
}

int FillBubG1()
{
 int g1;
 cout<<"\n\nHow many bubbles do you want to fill for group-1?(at most 20):  ";
 cin>>g1;
  while(g1>20||g1<1)
  {wrong();
    cout<<"\n\nYou have filled wrong number of bubbles. Please enter again.(at most 20):  ";
    cin>>g1;
  }
return g1;
}

int FillBubG2()
{
 int g2;
cout<<"\n\nHow many bubbles do you want to fill for group-2?(at most 20):  " ;
cin>>g2;
  while(g2>20||g2<1)
  {wrong();
    cout<<"\n\nYou have filled wrong number of bubbles. Please enter again.(at most 20):  ";
    cin>>g2;
  }
return g2;
}

int FillBubG3()
{
 int g3;
cout<<"\n\nHow many bubbles do you want to fill for group-3?(at most 20):  ";
cin>>g3;
  while(g3>20||g3<1)
  {wrong();
    cout<<"\n\nYou have filled wrong number of bubbles. Please enter again.(at most 20):  ";
    cin>>g3;
  }
return g3;
}

int Checkbub(int g1,int g2,int g3)
{
  int cg=g1+g2+g3;
  return cg;
}

void color()
{
    clrscr();
      cleardevice();
	outtextxy(120,30,"Choose Your Favourite COLORS");
	setfillstyle(1,0);
       setcolor(7);
       fillellipse(36,80,20,20);    setcolor(7);
       outtextxy(33,74,"1");		setcolor(7);
       outtextxy(60,78,"Black");

       setfillstyle(1,1);
       setcolor(1);
       fillellipse(226,80,20,20);   setcolor(0);
       outtextxy(223,74,"2");		setcolor(7);
       outtextxy(250,78,"Blue");

       setfillstyle(1,2);
       setcolor(2);
       fillellipse(416,80,20,20);    setcolor(0);
       outtextxy(413,74,"3");		setcolor(7);
       outtextxy(440,78,"Green");

       setfillstyle(1,3);
       setcolor(3);
       fillellipse(36,130,20,20);    setcolor(0);
       outtextxy(33,124,"4");		setcolor(7);
       outtextxy(60,128,"Cyan");

       setfillstyle(1,4);
       setcolor(4);
       fillellipse(226,130,20,20);     setcolor(0);
       outtextxy(223,124,"5");		setcolor(7);
       outtextxy(250,128,"Red");

       setfillstyle(1,5);
       setcolor(5);
       fillellipse(416,130,20,20);      setcolor(0);
       outtextxy(413,124,"6");		setcolor(7);
       outtextxy(440,128,"Magenta");

       setfillstyle(1,6);
       setcolor(6);
       fillellipse(36,180,20,20);       setcolor(0);
       outtextxy(33,174,"7");		setcolor(7);
       outtextxy(60,178,"Brown");

       setfillstyle(1,7);
       setcolor(7);
       fillellipse(226,180,20,20);       setcolor(0);
       outtextxy(223,174,"8");		setcolor(7);
       outtextxy(250,178,"LightGray");

       setfillstyle(1,8);
       setcolor(8);
       fillellipse(416,180,20,20);         setcolor(0);
       outtextxy(413,174,"9");		setcolor(7);
       outtextxy(440,178,"DarkGray");

       setfillstyle(1,9);
       setcolor(9);
       fillellipse(36,230,20,20);          setcolor(0);
       outtextxy(28,224,"10");		setcolor(7);
       outtextxy(60,228,"LightBlue");

       setfillstyle(1,10);
       setcolor(10);
       fillellipse(226,230,20,20);          setcolor(0);
       outtextxy(218,224,"11");		setcolor(7);
       outtextxy(250,228,"LightGreen");

       setfillstyle(1,11);
       setcolor(11);
       fillellipse(416,230,20,20);        setcolor(0);
       outtextxy(408,224,"12");		setcolor(7);
       outtextxy(440,228,"LightCyan");

       setfillstyle(1,12);
       setcolor(12);
       fillellipse(36,280,20,20);           setcolor(0);
       outtextxy(28,274,"13");		setcolor(7);
       outtextxy(60,278,"LightRed");

       setfillstyle(1,13);
       setcolor(13);
       fillellipse(226,280,20,20);           setcolor(0);
       outtextxy(218,274,"14");		setcolor(7);
       outtextxy(250,278,"LightMagenta");

       setfillstyle(1,14);
       setcolor(14);
       fillellipse(416,280,20,20);           setcolor(0);
       outtextxy(408,274,"15");		setcolor(7);
       outtextxy(440,278,"Yellow");
       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	for(int i=0;i<80;i++)
	{
		cout<<"=";
	}
	cout<<endl;
        }

int colboard()
{int cbd;
   cout<<"\nChoose board color:   ";
   cin>>cbd;
  while(cbd<1||cbd>15)
  {wrong();
    cout<<"\n\nYou have typed wrong number. Please enter again.:  ";
    cin>>cbd;
  }
  return cbd;	
}

int colbub()
{int cbb;
   cout<<"\n\nChoose bubbles color:   ";
   cin>>cbb;
  while(cbb<1||cbb>15)
  {wrong();
    cout<<"\n\nYou have typed wrong number. Please enter again.:  ";
    cin>>cbb;
  }
  return cbb;	
}

int SelectGp(int g1,int g2,int g3)
{ int gp;
  if(g1==0&&g2>0&&g3>0)
  {
      cout<<"\n\n\tSelect a group (2 or 3):   ";
      cin>>gp;
  }
  else if(g1>0&&g2==0&&g3>0)
  {
      cout<<"\n\n\tSelect a group (1 or 3):   ";
      cin>>gp;
  }
  else if(g1>0&&g2>0&&g3==0)
  {
      cout<<"\n\n\tSelect a group (1 or 2):   ";
      cin>>gp;
  }
  else if(g1==0&&g2==0&&g3>0)
  {
      cout<<"\n\n\tSelect a group (only 3):   3";
      gp=3;
  }
  else if(g1>0&&g2==0&&g3==0)
  {
      cout<<"\n\n\tSelect a group (only 1):   1";
      gp=1;
  }
  else if(g1==0&&g2>0&&g3==0)
  {
      cout<<"\n\n\tSelect a group (only 2):   2";
      gp=2;
  }
  else
  {
      cout<<"\n\n\tSelect a group (1, 2 or 3):   ";
      cin>>gp;
  }
  return gp;
}

int RemoveBub1(int g)
{
  int rem;
  cout<<"\n\n\tEnter the number of bubbles do you want to remove(1 to "<<g<<" ):   ";
  cin>>rem;
  return rem;
}

int RemoveBub2(int g,int rem)
{
  	cout<<"\n\n\tYou have entered wrong number. Please enter again.";
   cout<<"\n\n\tEnter the number of bubbles do you want to remove(1 to "<<g<<" ):   ";
  cin>>rem;
  return rem;
} 

int CrollDice()
{
  clrscr();
  cleardevice();  
  setcolor(2);
  int p,c;
     do{clrscr(); cleardevice();
	outtextxy(150,30,"Rolling Dice.");
      cout<<"\n\n\n\nPlayer, Press any key to Roll The Dice.";
      getch();
      p=(rand()%6)+1;
      cout<<"\n\nComputer, Press any key to Roll The Dice.";
      getch();
      c=(rand()%6)+1;
    cout<<"\n\nPlayer:"<<p;
  cout<<"\n\nComputer:"<<c;
      if(p==c)
	cout<<"\n\nYou Score are the same, Please Roll Again.";
      getch();
   }while(p==c);
  
  if(p>c)
  {
    outtextxy(36,180,"Player will start");
    getch();
    return 1;
  }
  else
  {
    outtextxy(36,180,"Computer will start");
    getch();
    return 2;
  }
}

int rollDice()
{
  clrscr();
  cleardevice();
  setcolor(2);
  int p1,p2;
   do{
      clrscr(); cleardevice();
      outtextxy(150,30,"Rolling Dice.");
      cout<<"\n\n\n\nFirst Player, Press any key to Roll The Dice.";
      getch();
      p1=(rand()%6)+1;
      cout<<"\n\nSecond Player, Press any key to Roll The Dice.";
      getch();
      p2=(rand()%6)+1;
      cout<<"\n\nFirst Player:"<<p1;
     cout<<"\n\nSecond Player:"<<p2;
      if(p1==p2)
	cout<<"\n\nYou Score are the same, Please Roll Again.";
      getch();
    }while(p1==p2);
  
  if(p1>p2)
  {
    outtextxy(36,180,"First Player will start");
    getch();
    return 1;
  }
  else
  {
    outtextxy(36,180,"Second Player will start");
    getch();
    return 2;
  }
}



void win()
{
  for(int i=800;i<=1000;i+=100)
   {
   sound(i);
   delay(200);
   nosound();
   sound(1800-i);
   delay(300);
   nosound();
   }
}

void two()
{
  for(int i=110;i<=550;i+=110)
  {
    sound(i);
    delay(200);
    nosound();
  }
}

void lose()
{
	for(int i=800;i>=200;i-=90)
	{
	sound(i);
	delay(300);
	nosound();
	}
}


void wrong()
{
  for(int i=700;i>=550;i-=200)
  {
    sound(i);
    delay(200);
    nosound();
  }
}



