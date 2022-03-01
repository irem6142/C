#include<stdio.h>

 






int main()
{
	int a,i;
    int asal=0;
	printf("Sayi giriniz: ");
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			asal=1;
	
			
		}
		
	}
	if(asal==1)
		printf("%d sayisi asal degildir.",a);
	else if(asal==0)
	printf("%d sayisi asaldir",a);
	 
	
	
	
	
}
