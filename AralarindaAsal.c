#include<stdio.h>
int main()
{
	int a,b,i,c;
	printf("Sayi :");
	scanf("%d",&a);
	printf("Sayi :");
	scanf("%d",&b);

		for(i=1;i<=b;i++)
		{
			if(a%i==0 && b%i==0)
			{
				if(i==1)
				{
				c=0;	
				
				}
				else
				{
				   c=1;
				}
			}
		}
		if(c==0)
		{
			printf("Aralarinda asaldir");
		}
	  else
	printf("Aralarinda asal degildir.");


}
