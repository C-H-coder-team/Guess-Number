#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
    srand(time(NULL));
    int num,input;
    bool i=true;
    while(i=true)
    {
    	printf("%s","猜数：0-100")
    	num=rand()%11
    	for(;;)
    	{
    		scanf("%d\n",&input);
    		if(num<input) printf("%s","大了");
    		if(num>input) printf("%s","小了");
			if(num=input)
			{ 
				printf("%s","猜对了"); 
				break;
			}
		}
	}
} 
