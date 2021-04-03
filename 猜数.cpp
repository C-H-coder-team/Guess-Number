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
	i=true;	//确定bool的值 
	srand(time(0)); //随机数因子 
	while(i=true)
	{
		a=1+rand()%100;
		
	for(;;)
		{
			cout<<"猜数：1—100"<<endl;
			
			cin>>input;
			
			if(input>a)cout<<"大了"<<endl;
			
			if(input<a)cout<<"小了"<<endl;
			
			if(input==a)break; 
		}
		cout<<"正确！"; 
	}
	
	return 0;//返回0 
}
