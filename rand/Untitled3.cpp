#include <graphics.h>
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

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

int main()
{
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
	IMAGE pic;
	loadimage(&pic,"C:\\Users\\seewo\\Desktop\\rand\\th.jpg",740,712);
	putimage(0,0,&pic);
	solidrectangle(0,144,300,216);
	setbkmode(TRANSPARENT);
	settextstyle(72,0,"宋体");
	settextcolor (BLACK);
	outtextxy(0,144,TEXT("开席"));
	for(int i=1;i<=52;i++)
	{
		setbkmode(TRANSPARENT);
		settextstyle(72,0,"宋体");
		settextcolor (BLACK);
		outtextxy(0,400,TEXT("第"));
		outtextxy(72,400,(a[i][0]+'0'));
		outtextxy(144,400,TEXT("列"));
		
		outtextxy(0,472,TEXT("第"));
		outtextxy(72,472,(a[i][1]+'0'));
		outtextxy(144,472,TEXT("排"));
		break;
	}
	while(1);
	cleardevice();
	return 0;
}
