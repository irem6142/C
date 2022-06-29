#include<stdio.h>

int main()
{
	//Rakamlari toplamina tam olarak bolunen sayilara "HARSHAD (NIVEN) SAYILARI" denir.
	int a,b,i,gecici;
	int t=0;
	printf("Sayi :");
	scanf("%d",&a);
	gecici=a;
    while(gecici>0)
    {
    	
    	b=gecici%10;
        gecici/=10;
    	t+=b;
	}
 
	if(a%t==0)
	{
		printf("HARSHAD (NIVEN)  sayisidir.");
	}
	else 
	{
		printf("HARSHAD (NIVEN)  sayisi degildir.");
	}
	
	
	
	
	
	
	
}
