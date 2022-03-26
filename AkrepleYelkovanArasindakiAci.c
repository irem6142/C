#include<stdio.h>
int main()
{
	int saat,dakika;
    float aciDegeri;
	printf("Saat degeri :");
	scanf("%d",&saat);
	printf("Dakika degeri:");
	scanf("%d",&dakika);
	//Formul
	aciDegeri=((11*dakika)-(60*saat))/2;
	   if(aciDegeri<0)
   	{
		aciDegeri*=-1;
	    printf("%f",aciDegeri);
	}
         else
         {
		 printf("%f",aciDegeri);
         }
	
	
}
