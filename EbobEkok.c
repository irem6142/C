#include<stdio.h>


int main()
{
	int a,b,i;
	int ebob,ekok;
	printf("Sayi girin :");
	scanf("%d",&a);
	printf("Sayi girin :");
	scanf("%d",&b);
	for(i=1;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		{
			ebob=i;
		}
	}
printf("Girdiginiz sayilarin ebobu :%d\n",ebob);
//a*b=ebob*ekok
ekok=(a*b)/ebob;
printf("Girdiginiz sayilarin ekoku :%d",ekok);
	
	
	
}
