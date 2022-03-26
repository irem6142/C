#include<stdio.h>
int main()
{
	int i,a,sayac=0;
	printf("Sayi giriniz :");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			sayac++;
		}
	}
	
	if(a%sayac==0)
	{
		printf("Tau sayisidir.");
	}
	else
	printf(" Tau sayisi degildir.");
	
}
