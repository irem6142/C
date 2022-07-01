#include<stdio.h>
int main()
{
	int a;

	printf(" Sayi:");
	scanf("%d",&a);
   if(a>0)
   {
   	printf("Sayi pozitiftir.");
   }
   else if(a<0)
   {
   	printf("Sayi negatiftir.");
   }
   else
   printf("Sayi 0'dir.'");

}
