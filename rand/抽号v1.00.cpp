#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
using namespace std;

int group,num;
int g(int a)
{
	if(a==2||a==3||a==4)
	{
		return 8;
	}
	else
	{
		return 7;
	}
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

int main()
{
	srand(unsigned(time(NULL)+time(0)));
	while(true){
	cout<<"输入任意键开始"<<'\n';

	int u;
	u=getch();
	system("cls");
	texiao();

	group=rand()%(7-1)+1;
	cout<<"第"<<group<<"列"<<'\n';
	texiao();
	num=rand()%(g(group)-1)+1;
	cout<<"第"<<num<<"排";
	}
	return 0;
}
