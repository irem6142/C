#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Ikinci dereceden denklemin kokleri\n");
	printf("x karenin baskatsayisi:");
	scanf("%d",&a);
	printf("x in baskatsayisi:");
	scanf("%d",&b);
	printf("Sabit sayi:");
	scanf("%d",&c);
	int delta=(b*b)-4*a*c;
	double deltaKok=sqrt(delta);
double kok=(-b+deltaKok)/(2*a);
double kok1=(-b-deltaKok)/(2*a);
	if(delta<0)
	{
		printf("Kok yoktur!");
	}
	else
	{
		if(delta==0)
		{
			printf("Cift katli koktur.\n");
			printf("Kok :%lf\n",kok);
		}
		else
		{
	    printf("Kok1 :%lf\n",kok);
		printf("Kok2 :%lf",kok1);
		}
		
		
		
	}
	
	
	
	
	
}
