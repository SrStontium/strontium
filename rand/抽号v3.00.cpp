#include <graphics.h>
#include <bits/stdc++.h>
#include <conio.h>
#include <MMSystem.h>
#pragma comment(lib,"Winmm.lib")
using namespace std;

//bool svip()

bool mousea(int p,int q)
{
	bool r=true;
	if(p>300)
	{
		r=false;
	}
	if(q<144||q>216)
	{
		r=false;
	}
	return r;
}

bool mouseb(int sr,int rs)
{
	bool r=true;
	if(sr>47)
	{
		r=false;
	}
	if(rs<665)
	{
		r=false;
	}
	return r;
}

void texiao()
{
	for(int i=1;i<=5;i++)
	{
		system("color 17");
		system("color 27");
		system("color 37");
		system("color 47");
		system("color 57");
		system("color 67");
		system("color 07");
		
	}
}

int g(int x)
{
	if(x==2||x==3||x==4)
	{
		return 8;
	}
	else
	{
		return 7;
	}
}

int a[53][2],k;
bool songg;

int main()
{
	songg=true;
	//mciSendString(_T("play goodluck.mp3 repeat"),0,0,0);
	MOUSEMSG m;
	k=1;
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=g(i);j++)
		{
			a[k][0]=i;
			a[k][1]=j;
			k++;
		}
	}
	srand(unsigned(time(NULL)+time(0)));
	for(int j=1;j<=1145;j++)
	for(int i=1;i<=52;i++)
	{
		k=rand()%(52-1)+1;
		swap(a[i][0],a[k][0]);
		swap(a[i][1],a[k][1]);
	}
	
	/*for(int i=1;i<=52;i++){
	cout<<"输入任意键开始"<<'\n';
	int u;
	u=getch();
	system("cls");
	texiao();
	cout<<"第"<<a[i][0]<<"列"<<'\n';
	texiao();
	cout<<"第"<<a[i][1]<<"排"<<'\n';
	}
	*/
	initgraph(740,712);
	IMAGE pic,ima,song;
	loadimage(&pic,"./th.jpg",740,712);
	loadimage(&ima,"./y.jpg",269,180);
	loadimage(&song,"./song.jpg",47,47);
	putimage(0,0,&pic);
	putimage(0,665,&song);
	putimage(471,532,&ima);
	solidrectangle(0,144,300,216);
	setbkmode(TRANSPARENT);
	settextstyle(72,0,"宋体");
	settextcolor (BLACK);
	outtextxy(0,144,TEXT("一键开席"));
	for(int i=1;i<=52;i++)
	{
		while(1)
		{
			m=GetMouseMsg();
			if(m.uMsg==WM_LBUTTONDOWN&&mouseb(m.x,m.y))
			{
				if(songg==true)
				{
					mciSendString("stop goodluck.mp3",0,0,0);
					songg=false;
				}
				else
				{
					mciSendString(_T("play goodluck.mp3 repeat"),0,0,0);
					songg=true; 
				}
			}
			if(m.uMsg==WM_LBUTTONDOWN&&mousea(m.x,m.y))
			{
				putimage(0,0,&pic);
				solidrectangle(0,144,300,216);
				setbkmode(TRANSPARENT);
				settextstyle(72,0,"宋体");
				settextcolor (BLACK);
				outtextxy(0,144,TEXT("一键开席"));
				break;
			}
		}
		putimage(471,532,&ima);
		setbkmode(TRANSPARENT);
		settextstyle(72,0,"宋体");
		settextcolor (BLACK);
		outtextxy(0,400,TEXT("第"));
		outtextxy(72,400,(a[i][0]+'0'));
		outtextxy(144,400,TEXT("列"));
		Sleep(1000); 
		outtextxy(0,472,TEXT("第"));
		outtextxy(72,472,(a[i][1]+'0'));
		outtextxy(144,472,TEXT("排"));
	}
	cleardevice();
	return 0;
}
