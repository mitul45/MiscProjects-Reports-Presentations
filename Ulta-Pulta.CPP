#include<iostream.h>
#include<stdlib.h>
#include<time.h>
#include<process.h>
#include<iomanip.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
class password
{

	char ch,ch1,a[15],b[15];
	int count,i,j,c;
	public:
		password()
	{count=0;}
		void password1()
			{
				cout<<"ENTER THE PASSWORD ::";
				for(i=0;i<10;i++)
				{
					ch=getche();
					a[count]=ch;
					count++;
					c=count;
					clrscr();
					cout<<"ENTER THE PASSWORD::";
					for(j=0;j<c;j++)
						{
							cout<<"*";
						}
				}
				a[10]='\0';
			}
		void password2()
		{
				count=0;
				cout<<"RECONFIRM THE PASSWORD::";
				for(i=0;i<10;i++)
				{
					ch1=getche();
					b[count]=ch1;
					count++;
					c=count;
					clrscr();
					cout<<"RECONFIRM THE PASSWORD::";
					for(j=0;j<c;j++)
						{
							cout<<"*";
						}
				}
				b[10]='\0';
		}
void ffool()
{
	 clrscr();
	 int g=DETECT,h;
	 initgraph(&g,&h,"\\tc\\bgi");
	 cleardevice();
	 delay(1000);
	 setcolor(2);
	 settextstyle(1,0,1);
	 delay(1000);
	 setbkcolor(BLUE);
	 highvideo();
	 outtextxy(50,150,"THE PROCRAETORIAN:");
	 delay(1500);
	 outtextxy(50,200,"YOUR PC IS NOW UNDER SURVEILANCE BY THE VIRUS HOST");
	 outtextxy(50,250,"PEA(C)E BE WITH YOU ! ! !");
	 getch();
	 delay(4000);
	 closegraph();
	 exit(0);
}
		/*void pass()
			{
				cout<<endl<<"password::"<<a;
			}*/
		int check()
			{
				cout<<endl<<a;
				cout<<endl<<b;
				cout<<endl<<"CHECKING .";sleep(1);cout<<" .";sleep(1);cout<<" .";
				if(strcmp(a,b)==0)
					{
					//cout<<endl<<"h";
						return 1;
					}
				else
					{
					//cout<<"hi";
					 return 0;
					}
			}
	int welcome()
	{
			textcolor(RED);
cout<<"  *       *  * * * *  *              * * * *   * * * * *  *       *  * * * *";
cout<<"  *       *  *        *              *         *       *  * *   * *  *      ";
cout<<"  *       *  *        *              *         *       *  *  * *  *  *      ";
cout<<"  *   *   *  * * *    *      ------  *         *       *  *   *   *  * * *  ";
cout<<"  *  * *  *  *        *              *         *       *  *       *  *      ";
cout<<"  * *   * *  *        *              *         *       *  *       *  *      ";
cout<<"  *       *  * * * *  * * * *        * * * *   * * * * *  *       *  * * * *";
cout<<endl;



cout<<"          	     * * * * *  * * * * *";
cout<<"          	         *      *       *";
cout<<"          	         *      *       *";
cout<<"       	                 *      *       *";
cout<<"       	                 *      *       *";
cout<<"     	 	         *      *       *";
cout<<"        	                 *      * * * * *";
cout<<endl;




cout<<"  * * * *        *        *       *  * * * *             * * * *  * * * * *  *     *  * * * *";
cout<<"  *             * *       * *   * *  *                        *   *       *  **    *  *      ";
cout<<"  *            *   *      *  * *  *  *                       *    *       *  * *   *  *      ";
cout<<"  *  ****     * * * *     *   *   *  * * *     ------       *     *       *  *  *  *  * * *  ";
cout<<"  *     *    *       *    *       *  *                     *      *       *  *   * *  *      ";
cout<<"  *     *   *         *   *       *  *                    *       *       *  *    **  *      ";
cout<<"  * * * *  *           *  *       *  * * * *             * * * *  * * * * *  *     *  * * * *";
sleep(3);
clrscr();
for(int i=0;i<=100;i++)
				{
				textcolor(YELLOW+BLINK);
				gotoxy(35,12);
				cout<<"GAME LOADING";
				gotoxy(39,15);
				textcolor(GREEN);
				cout<<i<<"%";
				delay(75);
				clrscr();
				}
clrscr();
textcolor(YELLOW);
cout<<"CHOOSE THE GAME YOU WISH"<<endl;
cout<<"PRESS";
cout<<"      :: 2  LADDERS & SNAKES"<<endl;;
cout<<"           :: 1  ULTA    &  SIDHA"<<endl;
int ct; cin>>ct;
return ct;
}
};
class matrix
{
	private:
			  int turn,i,j,m,k,t1,b[3][3],a[3][3],x,y,q,temp,counter;
	public:
	void mat()
	{
		counter=0;
		turn=0;
		cout<<"ENTER THE PLOT TO SOLVE"<<endl;
		for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					{
						cin>>a[i][j];
					}
			}
		cout<<"THE PLOT IS AS FOLLOWS"<<endl;
		for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					{
						cout<<setw(5)<<a[i][j];
					}
					cout<<endl;
			}
	}
void sort()
	{
		start:
		cout<<endl<<endl;
		textcolor(YELLOW);
		cout<<"ENTER THE POSITION TO BE SHIFTED"<<endl;
		for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					{
						cout<<setw(5)<<i<<j;
					}
				cout<<endl;
			}
		if(turn%3==0)
			{
				cout<<"WANNA EXIT PRESS Q"<<endl;
				char ccm;
				cin>>ccm;
				if(ccm=='q'||ccm=='Q')
				exit(0);
			}
		cout<<"X::";cin>>x;
		cout<<"Y::";cin>>y;
	char c11=24;cout<<"1 :: UP("<<c11<<") KEY"<<endl;
		  c11=25;cout<<"2 :: DOWN("<<c11<<") KEY"<<endl;
			 cout<<"3 :: RIGHT(->) KEY"<<endl;
			 cout<<"4 :: LEFT(<-) KEY"<<endl;

		cout<<endl<<"ENTER THE KEY TO BE PERFORMED"<<endl;
		cin>>q;
		if(q==1)
		{
			temp=a[x-1][y];
			a[x-1][y]=a[x][y];
			a[x][y]=temp;
		}
		if(q==2)
		{
			temp=a[x+1][y];
			a[x+1][y]=a[x][y];
			a[x][y]=temp;
		}
		if(q==4)
		{
			temp=a[x][y-1];
			a[x][y-1]=a[x][y];
			a[x][y]=temp;
		}
		if(q==3)
		{
			temp=a[x][y+1];
			a[x][y+1]=a[x][y];
			a[x][y]=temp;
		}
		clrscr();
		cout<<"NOW THE ARRAY"<<endl;
		for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					{
						cout<<setw(5)<<a[i][j];
					}
					cout<<endl;
			}
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					if(b[i][j]==a[i][j])
						counter++;
				}
		}
		if(counter==9)
			{
				cout<<"YOU WIN THE GAME IN TURNS"<<turn;
				//delay(5000);
			}
		else
			{
			counter=0;
			turn++;
			goto start;
			}
	}
void convert()
{
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					b[i][j]=a[i][j];
				}
		}
}
void check()
{
	for(m=0;m<3;m++)
		{
			for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
						{
							for(k=0;k<3;k++)
								{
									if(b[m][i]<b[j][k])
										{
											t1=b[j][k];
											b[j][k]=b[m][i];
											b[m][i]=t1;
										}
								}
						}
				}
		}
}
};
class user
{
	int p1,p2,temp;
	public :
void display()
	{
			int i,j,s=3,l=3,m=3,n=3,k;
	for(i=100;i>=1;i--)
	{
		if(i==90||i==80||i==70||i==60||i==50||i==40||i==30||i==20||i==10)
			cout<<endl;//<<endl<<endl;
		if(i==6||i==37||i==73)
		{
			cout<<"   L"<<l<<" "<<i<<"|";
			l--;
		}
		else if(i==21||i==58||i==91)
		{
			cout<<"  L"<<s<<"'"<<" "<<i<<"|";
			s--;
		}
		else if(i==11||i==42||i==81)
		{
			cout<<"   S"<<m<<" "<<i<<"|";
			m--;
		}
		else if(i==29||i==61||i==98)
		{
			cout<<"  S"<<n<<"'"<<" "<<i<<"|";
			n--;
		}
		else
			cout<<setw(8)<<i<<"|";
	}
}
int play1(int temp)
{
	clrscr();
			int i,j,s=3,l=3,m=3,n=3,k;
			static int x=0;
			x=x+temp;
			p1=x;
	for(i=100;i>=1;i--)
		{
		if(i==90||i==80||i==70||i==60||i==50||i==40||i==30||i==20||i==10)
			cout<<endl;//<<endl<<endl;
		if((x==6&&i==21)||(x==37&&i==58)||(x==73&&i==91))
			{
				if(x==6)
				x=21;
				else if(x==37)
				x=58;
				if(x==73)
				x=91;
				cout<<"   MITUL";
				p1=x;
			}
		if((x==29&&i==11)||(x==61&&i==42)||(x==98&&i==81))
			{
				if(x==29)
				x=11;
				else if(x==61)
				x=42;
				if(x==98)
				x=81;
				cout<<"   MITUL";
				p1=x;
			}
		if(i==6||i==37||i==73)
		{
			cout<<"   L"<<l<<" "<<i;
			l--;
		}
		else if(i==21||i==58||i==91)
		{
			cout<<"  L"<<s<<"'"<<" "<<i;
			s--;
		}

		else if(i==11||i==42||i==81)
		{
			cout<<"   S"<<m<<" "<<i;
			m--;
		}
		else if(i==29||i==61||i==98)
		{
			cout<<"  S"<<n<<"'"<<" "<<i;
			n--;
		}
		else if(x==i)
			{
					if(p1==p2)
						cout<<"    BOTH";
					else
					  cout<<"  MITUL";
			}
		else if(i==p2)
		{
			cout<<"  VARUN";
		}
		else
			cout<<setw(8)<<i;
		}
		return x;
}
int play2(int temp)
{
	clrscr();
			int i,j,s=3,l=3,m=3,n=3,k;
			static int x=0;
			x=x+temp;
			p2=x;
for(i=100;i>=1;i--)
	{
		if(i==90||i==80||i==70||i==60||i==50||i==40||i==30||i==20||i==10)
			cout<<endl;//<<endl<<endl;
		if((x==6&&i==21)||(x==37&&i==58)||(x==73&&i==91))
			{
				if(x==6)
				x=21;
				else if(x==37)
				x=58;
				if(x==73)
				x=91;
				cout<<"   VARUN";
				p2=x;
			}
		if((x==29&&i==11)||(x==61&&i==42)||(x==98&&i==81))
			{
				if(x==29)
				x=11;
				else if(x==61)
				x=42;
				if(x==98)
				x=81;
				cout<<"   VARUN";
				p2=x;
			}
		if(i==6||i==37||i==73)
		{
			cout<<"   L"<<l<<" "<<i;
			l--;
		}
		else if(i==21||i==58||i==91)
		{
			cout<<"  L"<<s<<"'"<<" "<<i;
			s--;
		}
		else if(i==11||i==42||i==81)
		{
			cout<<"   S"<<m<<" "<<i;
			m--;
		}
		else if(i==29||i==61||i==98)
		{
			cout<<"  S"<<n<<"'"<<" "<<i;
			n--;
		}
		else if(x==i)
			{
					 //	textcolor(YELLOW);
				if(p1==p2)
					cout<<"   BOTH";
				else
				cout<<"  VARUN";
			}
		else if (i==p1)
		{
			cout<<"   MITUL";
		}
		else
			cout<<setw(8)<<i;
	}
		return x;
}
};

int main()
{
	clrscr();
	password p1;
	int ll,cc;
	p1.password1();
	cout<<endl<<endl<<endl;
	p1.password2();
	ll=p1.check();
	if(ll)
		{
			 cout<<"PASSWORD ENTERED WAS CORRECT"<<endl;sleep(2);
			 cc=p1.welcome();
			 switch(cc)
				{
					case 1:
							 matrix m1;
							 textbackground(RED);
							 m1.mat();
							 m1.convert();
							 m1.check();
							 m1.sort();
					break;
					case 2:
							 int dies,temp,tr=0,n=1;
	char text;
	char c;
	user u1,u2;
	clrscr();
	textcolor(YELLOW);
	//textbackground(RED);
	cout<<"IN THE GAME OF SNAKES AND LADDERS"<<endl;
	cout<<"USER1::  MITUL"<<endl;
	cout<<"USER2::  VARUN"<<endl;
	delay(3000);
	//u1.display();
	start:
do
{
	s:
	//s1:
	randomize();
	textcolor(RED);
	cout<<"TO PLAY THE TURN PRESS :: n";
	cin>>c;
	if(c=='n')
	{
	 if(n%2==0)
		{
			temp=random(7);
			cout<<endl<<endl<<"VARUN PLAY'S THE DICE WHICH ROLLS TO NUMBER:: ";delay(1000);cout<<temp<<endl;  delay(2000);
			tr=u1.play2(temp);
			if(temp==6)
					goto s;
			if(tr>=100)
			cout<<endl<<"VARUN WINS THE GAME";
		}
	 else
		{
			temp=random(7);
			cout<<endl<<endl<<"MITUL PLAY'S THE DICE WHICH ROLLS TO NUMBER:: ";delay(1000);cout<<temp<<endl;delay(2000);
			tr=u1.play1(temp);
				if(temp==6)
					goto s;
			if(tr>=100)
			cout<<endl<<endl<<"MITUL WINS THE GAME";
		}
		n++;
	}
	else
		{
			exit (0);
		}
}while(tr<100);
	cout<<endl<<endl<<"DO YOU WISH TO PLAY ONCE MORE PRESS Y";
	cin>>text;
	if(text=='y')
		goto start;
	else
		cout<<"BYE PLAYERS MEETING AFTER A BREAK";
					break;

		}
/*	else
		{
			for(int i=0;i<=100;i++)
				{
				textcolor(YELLOW+BLINK);
				gotoxy(35,12);
				cprintf("VIRUS LOADING");
				gotoxy(39,15);
				textcolor(GREEN);
				cout<<i<<"%";
				delay(75);
				clrscr();
				}
		delay(100);
		clrscr();
		fflush(stdout);
		gotoxy(20,12);
		cout<<" 'TOURNIQUET' VIRUS CREATED BY PROCRAETORIAN";
		gotoxy(20,14);
		cout<<" SAY GOOD BYE TO YOUR PC IN ";
		for(int j=5;j>=0;j--)
			{
				gotoxy(48,14);
				cout<<j<<" SECONDS";
				delay(1000);
			}
		clrscr();
		lowvideo();
		cout<<"1.HARD-DISK CORRUPTION:";
		delay(4000);
		cout<<"completed"<<endl;
		cout<<"2.MOTHER BOARD CORRUPTION:";
		delay(4000);
		cout<<"completed"<<endl;
		cout<<"3.INSTALLING CYBERBOB.DLL -->WINDOWS/COMMAND:";
		delay(4000);
		cout<<"completed"<<endl;
		cout<<"PROCRAETORIAN.SYS SUCCESSFULLY PLANTED";
		delay(3000);
p1.ffool();
		} */
	getch();
}
}