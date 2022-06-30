#include<stdio.h>

int main()
{ 

 int a;
 int count=0;
 printf("Sayi :");
 scanf("%d",&a);
  while(a!=0)
  {
  	a/=10;
  	count++;
  }
  printf("Basamak Sayisi :%d",count);
	
	
	
	
	
}
