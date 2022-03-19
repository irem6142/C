#include<stdio.h>
int main()
{
	int num,i;
	printf("Num:");
	scanf("%d",&num);
	if(num%4==0 && num%100==0 && num%400==0)
	{
		printf("Artik yildir.");
	}
	else if(num%4==0 && num%100!=0 && num%400!=0)
	{
		printf("Artik yildir.");
	}
	else
	{
		printf("Artik yil degildir.");
	}
	
	
	
}
