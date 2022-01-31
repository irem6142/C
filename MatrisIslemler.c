#include<stdio.h>
#include<windows.h>
void topla();
void cikar();
void menu()
{
	char secim;
	printf(" Toplama Islemi icin'+'\n Cikarma Islemi icin'-'\n Cikis yapmak icin 'e' 'ye basiniz\n");
	printf("Isleminiz :");
	scanf("%s",&secim);
	switch(secim)
	{
		case '+':
			topla();
			break;
			
		   case '-':
		   	cikar();
		   	break;
			case 'e':
				system("COLOR E");
			system("PAUSE");
			break;
			default:
				system("COLOR 3");
			printf("Yanlis secim menudeki islemlerden seciniz :\n");
			menu();
			printf("\n");
	}
	
}

int main()
{
 menu();
return 0;
}
void topla()
{
	system("COLOR D0");
	 printf("Birinci matrisi giriniz:\n");
	int i,j;
	int dizi[2][2];
	for(i=0;i<2;i++)
     {
     	for(j=0;j<2;j++)
     	{ 
     		scanf("%d",&dizi[i][j]);
		 }
	 }
printf("----------------------------------------------------------------------\n");
	  int dizi1[2][2];
 	 printf("Ikinci matrisi giriniz :\n");
	for(i=0;i<2;i++)
     {
     	for(j=0;j<2;j++)
     	{ 
     		scanf("%d",&dizi1[i][j]);
		 }
	 }
	 printf("----------------------------------------------------------------------\n");
       printf("Toplamlarin sonucu \n");
       int sonuc[i][j];
	 	for(i=0;i<2;i++)
       {
     	for(j=0;j<2;j++)
     	{ 
     	 sonuc[i][j]=dizi[i][j]+dizi1[i][j];
     	printf("%d ", sonuc[i][j]);
        }
        printf("\n");
        }     
		menu();      
};
void  cikar()
{
	system("COLOR 1E");
   int i,j;
   int c[2][2],c1[2][2],sonuc1[2][2];
  printf("Birinc matrisin degerini giriniz :");
   for(i=0;i<2;i++)
   {
   	for(j=0;j<2;j++)
  	scanf("%d",&c[i][j]);
   }
printf("----------------------------------------------------------------------\n");
    
       printf("Ikinci matrisin degerini giriniz :");
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	scanf("%d",&c1[i][j]);
	}
printf("----------------------------------------------------------------------\n");
       printf("Farklari : \n");
       for(i=0;i<2;i++)
       {
       	for(j=0;j<2;j++)
       	{
       		sonuc1[i][j]=c[i][j]-c1[i][j];
       		printf("%d ",sonuc1[i][j]);
		   }
		   printf("\n");
	   }
   menu();
	
};
