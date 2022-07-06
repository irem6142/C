#include<stdio.h>

int main()
{

	int a;
	int i;
	int d[100];
    int ao=0;//Aritmetik ortalama
	printf("Kac eleman gireceksiniz:\n");
	scanf("%d",&a);//Dizi eleman sayisi
	printf("Elemanlari girin:\n");
    for(i=0;i<a;i++)
	{
	scanf("%d",&d[i]);//Dizinin elemanlarini aldik
	}
	for(i=0;i<a;i++)
	{
		printf("%d.eleman: \t %d\n", i+1, d[i]);//Dizinin elemanlarini yazirdik
	}
	  for(i=0;i<a;i++)
	{
		ao+=d[i];
     }
     printf("\nAritmetik Ortalama:%d ",ao/a);

	
	
	
	
	
}
