#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<fstream.h>
#include<graphics.h>
#include<string.h>
class test
{
    char ans;
	char name[30];
	char win[30];
    public:
	int marks;
	void start();
	void intro();
	void instructions();
	void calculations(int cmp1,int cmp2);
	void winner();
};
void quiz()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\bgi");
setbkcolor(WHITE);
for(int i=10;i<=25;i=i+4)
{
 setcolor(7);
 int border[10]={10+i,10+i,629-i,10+i,629-i,469-i,10+i,469-i,10+i,10+i};
 drawpoly(10,border);
}
i=1;
for(i=10;i<=25;i++)
{
setcolor(i);
settextstyle(4,0,3);
{
outtextxy(110,50,"LOADING GAME");
outtextxy(220,80,"Please Wait");
}
setfillstyle(1,i);
pieslice(350,100,0,360,8);
fillellipse(350,100,8,8);
pieslice(370,100,0,360,6);
pieslice(390,100,0,360,4);
settextstyle(DEFAULT_FONT,0,0);
setcolor(i+2);
outtextxy(150,200,"      d88888b.  888     888 8888888 8888888888P ");
outtextxy(150,200,"    d88P" "Y88b 888     888   888         d88P  ");
outtextxy(150,200,"    888     888 888     888   888        d88P   ");
outtextxy(150,200,"    888     888 888     888   888       d88P    ");
outtextxy(150,200,"    888     888 888     888   888      d88P     ");
outtextxy(150,200,"    888 Y8b 888 888     888   888     d88P      ");
outtextxy(150,200,"    Y88b.Y8b88P Y88b. .d88P   888    d88P       ");
outtextxy(150,200,"     Y888888Y88 888P    888   888  d8888888888  ");
outtextxy(150,200,"            Y8b                                 ");                  
setcolor(i-2);
outtextxy(150,310,"  _____    _         _               _       _     ");
outtextxy(150,320," |  __ \\  (_)       | |             | |     | |    ");
outtextxy(150,330," | |__) |  _   ___  | |__     __ _  | |__   | |__  ");
outtextxy(150,340," |  _  /  | | / __| | '_ \\   / _\\` | | '_ \\  | '_ \\ ");
outtextxy(150,350," | | \\ \\  | | \\__ \\ | | | | | (_| | | |_) | | | | |");
outtextxy(150,360," |_|  \\_\\ |_| |___/ |_| |_|  \\__,_| |_.__/  |_| |_|");

delay(600);
}
getch();
clrscr();
}
void test::intro()
{
 clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 setbkcolor(WHITE);
 for(int i=10;i<=25;i=i+4)
 {
 setcolor(7);
 int border[10]={10+i,10+i,629-i,10+i,629-i,469-i,10+i,469-i,10+i,10+i};
 drawpoly(10,border);
 }
 setcolor(GREEN);
 outtextxy(220,40,"____________________________________");
 outtextxy(220,50,"WELCOME TO QUIZ MADE BY RISHABH ARYA");
 outtextxy(220,60,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 setcolor(BLUE);
 outtextxy(150,250,"  _  __      _            _____             ");
 outtextxy(150,260, " | |/ /     | |          |_   _|            ");
 outtextxy(150,270," | ' /      | |            | |              ");
 outtextxy(150,280, " |  <       | |            | |              ");
 outtextxy(150,290," | . \\   _  | |____   _   _| |_   _         ");
 outtextxy(150,300, " |_|\\_\\ (_) |______| (_) |_____| (_)        ");
 outtextxy(150,310,"                                            ");
 outtextxy(150,320,"                                            ");
 outtextxy(150,330,"   _____          _                       _ ");
 outtextxy(150,340,"  / ____|        | |                     | |");
 outtextxy(150,350," | (___     ___  | |__     ___     ___   | |");
 outtextxy(150,360,"  \\___ \\   / __| | '_ \\   / _ \\   / _ \\  | |");
 outtextxy(150,370, "  ____) | | (__  | | | | | (_) | | (_) | | |");
 outtextxy(150,380," |_____/   \\___| |_| |_|  \\___/   \\___/  |_|");
 setcolor(GREEN);
 outtextxy(150,80,"Enter Player Name");
 gotoxy(32,7);cin>>name;
 getch();
 clrscr();
 delay(100);
}
void test::start()
{


	 marks=0;
	 clrscr();
	 cout<<"\n\n\n\n\n              GET  READY FOR YOUR 1ST ROUND QUESTIONS..............";
	 delay(2000);
	 cout<<"\n\n\n =========================================================================";
	 clrscr();
	 cout<<"\n(1) Who is the Prime Minister of India";
	 cout<<"\n\n (a) Barack Obama\t\t(b) Narendra Modi\n(c) Rahul Ghandhi\t\t(d) NONE";
	 cout<<"\n =========================================================================";
	 cin>>ans;
	 if(( ans== 'b')||(ans=='B'))
	 {
	    delay(500);
		cout<<"\n YOU ARE RIGHT !! ";
		delay(2000);
		marks++;
	 }
	 else
	 {
		cout<<"\n SORRY YOU ARE WRONG :(((";
		delay(2000);
	 }
	clrscr();
	cout<<"\n\n\n =========================================================================";
	cout<<"\n(2) Who is the CEO of Google";
	cout<<"\n\n (a) Satya Nadela\t\t(b) Sunder Pichai\n(c) Jim Kerry\t\t(d) Robert Downey Jr.";
	cout<<"\n =========================================================================";
	cin>>ans;
	if((ans=='b')||(ans=='B'))
	 {
		delay(500);
		cout<<"\n THATS RIGHT !! ";
		delay(2000);
		marks++;
	 }
	  else
	 {
		cout<<"\n SORRY YOU ARE WRONG :(((";
		delay(2000);
	 }
	clrscr();
	cout<<"\n\n\n =========================================================================";
	cout<<"\n(2) Who is Winner of Big Boss Season 10?";
	cout<<"\n\n (a) Bani J\t\t(b) Manveer Gujjar\n(c) Lopa Mudra\t\t(d) Manu Punjabi";
	cout<<"\n =========================================================================";
	cin>>ans;
	if((ans=='b')||(ans=='B'))
	 {
		cout<<"\n THATS RIGHT !! ";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n THATS NOT THE RIGHT ANSWER :(((";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n =========================================================================";
	 cout<<"\n(3) THE COUNTRY WITH THE LARGEST BUDHIST POPULATION IS :";
	 cout<<"\n\n (a) JAPAN\t\t(b) THAILAND\n(c) CHINA\t\t(d) INDIA";
	 cout<<"\n =========================================================================";
	 cin>>ans;
	 if((ans=='c')||(ans=='C'))
	 {
		delay(500);
		cout<<"\n PERFECT ANSWER !!, KEEP IT UP ^_^";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n OOPS YOU ARE WRONG !";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n =========================================================================";
	 cout<<"\n(4) WHICH ONE OF THE FOLLOWING IS THE LARGEST ISLAND IN THE WORLD ?";
	 cout<<"\n\n (a) GREENLAND\t\t(b) ANDAMAN & NICOBAR\n(c) IRELAND\t\t(d) NEWZEALAND";
	 cout<<"\n =========================================================================";
	 cin>>ans;
	 if((ans=='a')||(ans=='A'))
	 {
		delay(500);
		cout<<"\n YES THATS THE ONE ";
		delay(2000);
		marks++;
	 }
	 else
	  {
		 cout<<"\n THATS A STUPID REPLY BUDDY ";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n =========================================================================";
	 cout<<"\n(5) WHERE DID THE RECENTLY EXTINCT BIRD DODO LIVE ?";
	 cout<<"\n\n (a) INDIA\t\t(b) SOUTH AMERICA\n(c) MAURITIUS\t\t(d) NEPAL";
	 cout<<"\n =========================================================================";
	 cin>>ans;
	 if((ans=='c')||(ans=='C'))
	 {
		delay(500);
		cout<<"\n MAURITIUS IS THE .......... RIGHT ANSWER !!!!!!!!";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n WRONG ANSWER :(((";
		 delay(2000);
	 }
 if( marks>=3)
	 {
		clrscr();
		cout<<"\n\n\n************************************************************************";
		cout<<"\n                  RESULT OF FIRST ROUND( EASY ROUND) ";
		cout<<"\n************************************************************************";
	cout<<"\nYOUR MARKS IS                   "<<marks<<"        ";
		cout<<"\n\n\nYOUR SCORE TELLS US THAT YOU CAN ENTER THE 2ND ROUND NOW, GO ON AND CRACK THE QUIZ !!";
		delay(5000);
		clrscr();
		cout<<"\n\n\n ========================================================================";
		cout<<"\n (6) WHICH IS THE TALLEST TOWER IN INDIA ?";
		cout<<"\n\n (a) QUTUB MINAR, DELHI\t\t(b) EXPRESS TOWER, MUMBAI\n(c) CLOCK TOWER,DELHI\t\t(d) TV TOWER,PITAMPURA,DELHI";
		cout<<"\n ========================================================================";
		cin>>ans;
		if((ans=='d')||(ans=='D'))
	 {
		delay(500);
		cout<<"\n KEEP IT UP DEAR !";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n SORRY DEAR, THATS NOT THE RIGHT ANSWER";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n ========================================================================";
	 cout<<"\n (7) OF WHICH MATERIAL IS GLASS MADE ?";
	 cout<<"\n\n(a) MICA\t\t(b) SAND\n(c) DIAMOND\t\t(d) QUARTZ";
	 cout<<"\n========================================================================";
	 cin>>ans;
	 if((ans=='b')||(ans=='B'))
	 {
		delay(500);
		cout<<"\n SAND IS RIGHT ANSWER :)))";
		delay(2000);
		marks++;
	 }
	  {
		cout<<"\n WRONG ANSWER :((";
		delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n ========================================================================";
	 cout<<"\n(8) WHO WAS THE FIRST TEST-TUBE BABY ?";
	 cout<<"\n\n(a) LOUISE BROWN\t\t(b) CHANDLER DAVIS\n(c) JAMES DANIEL\t\t(d) ELIZABETH PAL";
	 cout<<"\n========================================================================";
	 cin>>ans;
	 if((ans=='a')||(ans=='A'))
	 {
		delay(500);
		cout<<"\n YAPIII!! THATS RIGHT ^_^";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n :((( NOT THE CORRECT ANSWER";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n ========================================================================";
	 cout<<"\n(9) WHO FIRST TREATED ZERO AS A NUMBER ?";
	 cout<<"\n\n (a) BHASKARA\t\t(b) ARISTOTLE\n(c) BRAHMAGUPTA\t\t(d) PYTHAGORAS";
	 cout<<"\n========================================================================";
	 cin>>ans;
	 if((ans=='c')||(ans=='C'))
	 {
		delay(500);
		cout<<"\n DONT WORRY U DIDNT GOT ZERO HERE !!";
		delay(2000);
	    marks++;
	 }
	 else
	 {
		 cout<<"\n NO BUDDY YOUR ANSWER "<<ans<<" GIVES U ZERO";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n ========================================================================";
	 cout<<"\n(10) WHICH IS THE OLDEST RAILWAY STATION IN THE WORLD ?";
	 cout<<"\n\n (a) LIVERPOOL\t\t(b) SONPUR\n(c) LONDON\t\t(d) LENINGRAD";
	 cout<<"\n========================================================================";
	 cin>>ans;
	 if((ans=='a')||(ans=='A'))
	 {
		delay(500);
		cout<<"\n LIVERPOOL IS THE RIGHT ANSWER !!";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n WRONG ANSWER ";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n ========================================================================";
	 cout<<"\n(11) IN TENNIS , LOVE MEANS : ";
	 cout<<"\n\n (a) LATE\t\t(b) ZERO\n(c) FIGHT\t\t(d) VICTORY";
	 cout<<"\n========================================================================";
	 cin>>ans;
	 if((ans=='b')||(ans=='B'))
	 {
		delay(500);
		cout<<"\n UR ANSWER IS RIGHT , LOVIN IT ";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n WRONG ANSWER ";
		 delay(2000);
	 }
	  clrscr();
	 cout<<"\n\n\n ========================================================================";
	 cout<<"\n(12) THERE ARE FOUR STARS ON THE NATIONAL FLAG OF: ";
	 cout<<"\n\n (a) PANAMA/t/t(b) CHINA\n(c) NEW ZEALAND\t\t(d) LIBERIA";
	 cout<<"\n========================================================================";
	 cin>>ans;
	 if((ans=='c')||(ans=='C'))
	 {
		delay(500);

		cout<<"\n THAT WAS THE LAST AND THE RIGHT ANSWER OF THIS ROUND ";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n THAT WAS THE LAST AND THE WRONG ANSWER OF THIS ROUND";
		 delay(2000);
	 }

		 if(marks>=8)
		 {
			clrscr();
			cout<<"\n ************************************************************************";
			cout<<"\n                  RESULT OF SECOND ROUND( MEDIUM ROUND) ";
			cout<<"\n ************************************************************************";
			cout<<"\n YOUR MARKS IS     "<<marks<<"        ";
			cout<<"\n HEY ! YOU HAVE DONE IT , U CAN ENTER THE NEXT AND THE LAST ROUND";
			delay(5000);
			clrscr();
			cout<<"\n\n\n\n\n THIS IS A HARD ROUND, SO TAKE TIME TO ANSWER, BEST OF LUCK!!";
		    delay(2000);
			clrscr();
			cout<<"\n\n\n ======================================================================";
		cout<<"\n(13) WHO IS KNOWN AS THE FATHER OF CELLULAR PHONE ?";
			cout<<"\n\n (a) JOHN LUDWIG\t\t(b) FRANK WHITTLE\n(c) JAMES WRIGHT\t\t(d) MARTIN COOPER";
			cout<<"\n======================================================================";
			cin>>ans;
			if((ans=='d')||(ans=='D'))
			 {
				delay(500);
				cout<<" KEEP IT UP BUDDY !!";
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout<<"\n YOUR ANSWER "<<ans<<" IS WRONG :((";
				 delay(2000);
			 }
			 clrscr();
			 cout<<"\n\n\n ======================================================================";
			 cout<<"\n(14) KALLARIPAYATTU IS THE :";
			 cout<<"\n\n (a) ANCIENT MARTIAL ART\t\t(b) A TEA PECUILIAR TO CHINA\n(c) PART OF THE GREAR WALL\t\t(d) CHINESE EMPEROR";
			 cout<<"\n======================================================================";
			 cin>>ans;
			 if((ans=='a')||(ans=='A'))
			 {
				delay(500);
				cout<<"\n YAHOOH! THATS THE RIGHT ANSWER ^_^";
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout<<"\n THATS THE WRONG ANSWER";
				 delay(2000);
			 }
			 clrscr();
			 cout<<"\n\n\n ======================================================================";
		 cout<<"\n(15) 'CHARLES THE MAD' WAS THE KING OF:";
			 cout<<"\n\n (a) ENGLAND\t\t(b) DENMARK\n(c) FRANCE\t\t(d) CHINA";
			 cout<<"\n======================================================================";
			 cin>>ans;
			 if((ans=='c')||(ans=='C'))
			 {
				delay(500);
				cout<<"\n\n FRANCE IS THE RIGHT ANSWER !!!";
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout<<"\n DONT BE MAD, BUT THATS NOT THE RIGHT ANSWER ";
				 delay(2000);
			 }
	    clrscr();
			 cout<<"\n\n\n======================================================================";
		 cout<<"\n(16) INDIA FIRST TESTED ITS NUCLEAR CAPACITY AT POKHRAN IN 1974 ON:";
			 cout<<"\n\n (a) GANDHI JAYANTI\t\t(b) INDEPENDENCE DAY\n(c) REPUBLIC DAY\t\t(d) BUDHA PURNIMA";
			 cout<<"\n======================================================================";
			 cin>>ans;
			 if((ans=='d')||(ans=='D'))
			 {
				delay(500);
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout<<"\n SORRY THATS NOT THE ANSWER ";
				 delay(2000);
			 }
			 clrscr();
			 cout<<"\n\n\n=====================================================================";
		 cout<<"\n(17) Garampani sanctuary is located in";
			 cout<<"\n\n (a) Gujrat\t\t(b) Assam\n(c) Nagaland\t\t(d) Sikkim";
			 cout<<"\n======================================================================";
			 cin>>ans;
			 if((ans=='b')||(ans=='B'))
			 {
				delay(500);
				cout<<"\n THATS A HANDSOME ANSWER!! :)))";
				delay(2000);
			    marks++;
			 }
			 else
			 {
				 cout<<"\n SORRY THATS NOT THE ANSWER ";
				 delay(2000);
			 }
			 clrscr();
			 cout<<"\n\n\n======================================================================";
		 cout<<"\n(18) THE FAMOUS RHYME 'TWINKLE TWINKLE' WAS WRITTEN BY:";
			 cout<<"\n\n (a) ANNE & JIMMY BELL\t\t(b) AMI & JOHNY TAYLOR\n(c) ANN & JAME TAYLOR\t\t(d) NONE OF THE ABOVE";
			 cout<<"\n=======================================================================";
			 cin>>ans;
			 if((ans=='c')||(ans=='C'))
			 {
				delay(500);
				cout<<"\n TWINKLE TWINKLE, U R RRRRIGHT  :)))";
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout<<"\n SORRY THATS NOT THE ANSWER ";
				 delay(2000);
			 }
			 clrscr();
			 cout<<"\n\n\n======================================================================";
		 cout<<"\n(19) WHO FOUNDED GOLCONDA DYNASTY ?";
			 cout<<"\n\n (a) QULI QUTUB SHAH\t\t(b) BAHMAN SHAH\n(c) MOHAMMAD GOVAM\t\t(d) ADIL SHAH";
			 cout<<"\n======================================================================";
			 cin>>ans;
			 if((ans=='a')||(ans=='A'))
			 {
				delay(500);
				cout<<"\n YEP! THATS THE RIGHT ANSWER :)))";
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout<<"\n YOUR ANSWER "<<ans<<"WRONG ";
				 delay(2000);
			 }
			 clrscr();
			 cout<<"\n\n\n======================================================================";
		 cout<<"\n(20) WHO WAS THE FOUNDER OF THE DOCTRINE OF ADVAITA OR MONISM ?";
			 cout<<"\n\n (a) RAMANUJA\t\t(b) MADVA\n(c) ABHINAVA\t\t(d) SANKARA";
			 cout<<"\n======================================================================";
			 cin>>ans;
			 if((ans=='d')||(ans=='D'))
			 {
				delay(500);
				cout<<"\n SANKARA IS THE RIGHT ANSWER :)))";
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout<<"\n SORRY THATS NOT THE ANSWER ";
				 delay(2000);
			 }
			 if( marks>=16)
			 {
				clrscr();
				cout<<"\n\n\n\n********************************************************************";
				cout<<"\n                  RESULT OF FINAL ROUND( HARD ROUND) ";
				cout<<"\n*********************************************************************";
				cout<<"\n                             CONGRATS !!!!";
				cout<<"\n YOUR MARKS IS     "<<marks<<"        ";
				cout<<"\n THAT MEANS YOU HAVE DONE ALL THE ANSWER IN THIS ROUND CORRECT !!";
				cout<<"\n YOU GET A PRIZE FROM SASUMA CORP. TO CLAIM UR PRIZE, CONTACT AT: sayeri@cheerful.com";
				cout<<"\n\n\n\n                ^--------------^";
				cout<<"\n VISIT US AGAIN !!";
				delay(500);
			 }
			 else
			 {
				clrscr();
				cout<<"\n\n\n\n*********************************************************************";
				cout<<"\n                  RESULT OF FINAL ROUND( HARD ROUND) ";
				cout<<"\n*********************************************************************";
				cout<<"\n YOUR MARKS IS     "<<marks<<"              ";
				cout<<"\n SORRY YOUR MARKS COULD NOT GET U ON THE TOP, SO U DONT WIN ANYTHING :(((";
				clrscr();
				cout<<"\n\n\n\n\n THANX FOR PLAYING :)))";
				delay(5000);

			 }
		}
		else
		{
			clrscr();
			cout<<"\n\n\n\n\n*********************************************************************";
			cout<<"\n                  RESULT OF SECOND ROUND( MEDIUM ROUND) ";
			cout<<"\n *********************************************************************";
			cout<<"\n YOUR MARKS IS     "<<marks<<"        ";
			cout<<"\n  SORRY YOU ARE NOT ALLOWED TO THE NEXT ROUND";
			delay(5000);
			clrscr();
			cout<<"\n\n\n\n\n THANX FOR YOUR INTEREST !";
			delay(2500);
		}

		}
		else
		{
			clrscr();
			cout<<"\n************************************************************************";
			cout<<"\n                  RESULT OF FIRST ROUND( EASY ROUND) ";
			cout<<"\n************************************************************************";
			cout<<"\nYOUR MARKS IS     "<<marks<<"        ";
			cout<<"\n\nYOUR SCORE IS NOT SATISFACTORY , SO U WONT BE ABLE TO ENTER THE NEXT ROUND, SORRY :((";
			delay(5000);
			clrscr();
			cout<<"\n\n\n\n\n         THANX FOR YOUR INTEREST :)))";
			delay(2500);
			cout<<"\n\n\n\n\n         PLEASE ENTER YOUR FINAL RESULT :)))";
			cin>>marks;
		}
}
void test::instructions()
{
	int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\bgi");
    setbkcolor(WHITE);
	int ch,roll;
	char name[30];
	clrscr();
	setcolor(BLACK);
	cout<<"\n |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
	delay(700);
	cout<<"\n ||||||||||||||||||||||||||||||||||||||||||||||||";
	delay(700);
	cout<<"\n ||||||||||||||||||||||||||||||||||||||";
	delay(700);
	cout<<"\n |||||||||||||||||||||||||||||||||";
	delay(700);
	cout<<"\n ||||||||||||||||||||||||||||";
	delay(700);
	cout<<"\n |||||||||||||||||||||||||";
	delay(700);
	cout<<"\n |||||||||||||||||||||||";
	delay(700);
	cout<<"\n |||||||||||||||||||||";
	delay(700);
	cout<<"\n |||||||||||||||||||";
	delay(700);
	cout<<"\n |||||||||||||||";
	delay(700);
	cout<<"\n ||||||||||||";
	delay(700);
	cout<<"\n ||||||||||";
	delay(700);
	cout<<"\n ||||||||";
	delay(700);
	cout<<"\n ||||||";
	delay(700);
	cout<<"\n ||||";
	delay(700);
	cout<<"\n |||";
	delay(500);
	clrscr();
	cout<<"\n *****************************************************************";
	cout<<"\n                            M E N U ";
	cout<<"\n *****************************************************************";
	cout<<"\n\n\t\t\t START QUIZ";
	   delay(700);
	   getch();
		clrscr();
		cout<<"\n\n\n\n ################################################################";
		cout<<"\n                        I N S T R U C T I O N";
		cout<<"\n ################################################################";
		cout<<"\n\n* THERE ARE 3 ROUNDS IN THIS QUIZ:-";
		cout<<"\n\n    1) EASY ROUND\n   2) MEDIUM ROUND\n   3) HARD ROUND";
		cout<<"\n\n * TO ENTER THE LAST ROUND YOU HAVE TO COMPLETE THE FIRST TWO ROUNDS";
		cout<<"\n\n * THE EASY ROUND CONSIST OF 5 EASY QUESTIONS OUT OF WHICH U HAVE TO GET 3/5 OF THE ANSWER RIGHT TO ENTER THE MEDIUM Round";
	cout<<"\n\n * THE HARD ROUND CONSISTS OF 8 QUESTIONS WHICH CAN BE REALLY TOUGH ";
		cout<<"\n\n* AND IF U COMPLETE U GET AN EXCITING GIFT ";
		cout<<"\n \n*             SO , BEST OF LUCK !!!";
		cout<<"\n\n\n\n\n\n  DO YOU WANT TO PLAY & WIN ? (Y/N)";
		clrscr();
	 }
void test::winner()
{
 clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 setbkcolor(WHITE);
 for(int i=10;i<=25;i=i+4)
 {
 setcolor(7);
 int border[10]={10+i,10+i,629-i,10+i,629-i,469-i,10+i,469-i,10+i,10+i};
 drawpoly(10,border);
 }
 settextstyle(4,0,6);
 setcolor(8);
 outtextxy(245,60,"Winner");
 settextstyle(0,0,0);
 line(200,120,490,120);
 line(200,130,490,130);
 setcolor(1);
 settextstyle(3,0,2);
 setcolor(8);
 outtextxy(60,290,"So the Winner of the Game is");
 outtextxy(65,304," The Smartest Player this is");
 outtextxy(60,320,win);
 outtextxy(65,334,"Hope you liked my game" );
 setcolor(RED);
 settextstyle(5,0,6);
 outtextxy(120,350,"Thanks ;-).");
 delay(600);
 getch();
}
void test::calculations(int cmp1,int cmp2)
{
    int w=0;
	if(cmp1>cmp2)
	{
	 w=1;
	}
	if(cmp1>cmp2)
	{
	 w=2;
	}
	cout<<w;
	if (w==0)
	{
		strcmp(win,"Player 1");
	}
	if (w==1)
	{
		strcmp(win,"Player 2");
	}
	if (w==2)
	{
	   strcmp(win,"No One");
	}
}
void main()
{
    clrscr();
	quiz();
	clrscr();
	test t1,t2,u,v;
	ofstream fout;
	fout.open("player1.txt",ios::out);
	t1.intro();
	delay(500);
	clrscr();
	v=t1.start();
	fout.write((char*)&v,sizeof(test));
	fout.close();
	//2nd Player
	ofstream foout;
	foout.open("player2.txt",ios::out);
	t1.intro();
	delay(500);
	clrscr();
	u=t2.start();
	foout.write((char*)&u,sizeof(test));
	foout.close();
	//reading
	ifstream fin("player1.txt",ios::in);
	fin.seekg(0);
	ifstream fiin("player2.txt",ios::in);
	fiin.seekg(0);
	//win
	cmp1=fiin>>v;
	cmp2=fin>>u;
	test t3;
	t3.calculations(cmp1,cmp2);
	t3.winner();
    getch();
}










	
	
	
	
	
	
	
	
