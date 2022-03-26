#include<stdio.h>
int main()
{
	int i,a,b,max,min;
	printf("Kac tane sayi gireceksiniz: ");
	scanf("%d",&a);
   	int arr[a];
	for(i=0;i<a;i++)
	{
	    printf("%d .sayi:",i+1);
		scanf("%d",&arr[i]);
	}
    max=arr[0];
    min=arr[0];
    for(i=0;i<a;i++)
    {
      if(max<arr[i])
    	{
		max=arr[i];
    	}	
	if(arr[0]<min)
       {
		min=arr[0];
       }	
	}
  printf("En buyuk sayi : %d\n",max);
  printf("En kucuk sayi : %d",min);
  
}
