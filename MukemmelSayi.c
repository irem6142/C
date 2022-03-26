#include<stdio.h>
int main()
{
	int i,a;
	int top=0;
	printf("Sayi giriniz:");
	scanf("%d",&a);
	for(i=1;i<a;i++)
        {
            if(a%i==0)
	  {
	   top+=i;
	  }	
	}	
   
	if(top==a)
       printf("Mukemmel sayidir");
	
	else
	printf("Mukemmel sayi degildir.");
	
}
