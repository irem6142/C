#include<stdio.h>

int main()
{
	int a,i;
	printf("Sayi girin :");
	scanf("%d",&a);
	printf("Pozitif Bolenleri :");
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			printf("%d ",i);
	
		}
	}
	
	
	
	
	
	
}
