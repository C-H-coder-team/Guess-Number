#include<iostream>
#include<ctime> 
#include<string.h>
#include<stdio.h>
#include<algorithm>
#include<fstream> 
#include<windows.h>
using namespace std;
int main()
{
	int a;
	int input;
	bool i;
	i=true;	//ȷ��bool��ֵ 
	srand(time(0)); //��������� 
	while(i=true)
	{
		a=1+rand()%100;
		
	for(;;)
		{
			cout<<"������1��100"<<endl;
			
			cin>>input;
			
			if(input>a)cout<<"����"<<endl;
			
			if(input<a)cout<<"С��"<<endl;
			
			if(input==a)break; 
		}
		cout<<"��ȷ��"; 
	}
	
	return 0;//����0 
}
