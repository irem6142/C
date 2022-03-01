#include<stdio.h>
#include<math.h>

int main()
{
	int a,r,s=0,m,n=0;
	printf("Sayi yaziniz :");
	scanf("%d",&a);
	int gecici=a;
	/*3 basamakli sayilar icin
	while(gecici>0)
	{
	  	r=gecici%10;
	  	s+=pow(r,3);
	  	gecici/=10;
	  	}
	  
	if(s==a)
	{
		printf("Armstrong sayidir.");
	}
	else
	{
		printf("Armstrong sayi degildir.");
	}
	*/
	//n basamakli icin
	while(gecici>0)
	{
		gecici/=10;
		++n;
	}
	gecici=a;
	while(gecici>0)
	{
	  	r=gecici%10;
	  	s+=pow(r,n);
	  	gecici/=10;
	  	}
	  
	if(s==a)
	{
		printf("Armstrong sayidir.");
	}
	else
	{
		printf("Armstrong sayi degildir.");
	}
	
	
}
