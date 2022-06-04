#include<stdio.h>

int main()
{
	int a,b;
	int i;
	int toplam=0;
	int t=0;
	int j;
	
	printf("Sayi giriniz :");
	scanf("%d",&a);
	printf("Sayi giriniz :");
	scanf("%d",&b);
	
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			toplam=toplam+i;
		}
	}
	for(j=1;j<b;j++)
	{
		if(b%j==0)
		{
			t=t+j;
		}
	}

	if(toplam==b && t==a)
	{
		printf("Arkadas sayidir.");
	}
	else
	{
			printf("Arkadas sayi degildir.");
	}
	
	
	
	
	
	
	
	
}
