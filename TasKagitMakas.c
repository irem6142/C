#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void game(char secim)
{
	
	srand(time(NULL));
	int pc=(rand()%3)+1;
	if(pc==1 && toupper(secim=='T'))
    {
	 printf("Bigisayar=Tas\n");
	 printf("Berabere.");
	 system("COLOR D");
	}	
		if(pc==2 && toupper(secim=='T'))
    {
	 printf("Bigisayar=Kagit\n");
	 printf("Kagit tasi sarar kaybettiniz.");
	 system("COLOR 4");
	}	
		if(pc==3 && toupper(secim=='T'))
    {
	 printf("Bigisayar=Makas\n");
	 printf("Tas makasi kirar kazandiniz.");
	 system("COLOR FA");
	}
	
	if(pc==1 && toupper(secim=='M'))
    {
	 printf("Bigisayar=Tas\n");
	 printf("Tas makasi kirar kaybettiniz.");
	 system("COLOR 4");
	}	
	if(pc==2 && toupper(secim=='M'))
    {
	 printf("Bigisayar=Kagit\n");
	 printf("Makas kagidi keser kazandiniz");
	 system("COLOR FA");
	}	
	if(pc==3 && toupper(secim=='M'))
    {
	 printf("Bigisayar=Makas\n");
	 printf("Berabere.");
	 system("COLOR D");
	}	
	if(pc==1 && toupper(secim=='K'))
    {
	 printf("Bigisayar=Tas\n");
	 printf("Kagit tasi sarar kazandiniz.");
	 system("COLOR FA");
	}	
	if(pc==2 && toupper(secim=='K'))
    {
	 printf("Bigisayar=Kagit\n");
	 printf("Berabere.");
	 system("COLOR D");
	}	
	if(pc==3 && toupper(secim=='K'))
    {
	 printf("Bigisayar=Makas\n");
	 printf("Makas kagidi keser kaybettiniz.");
	 system("COLOR 4");
	}		
}
int main()
{

char oyna;
char secim;
	printf("Tas Kagit Makas oyununa hos geldiniz!\n");
    printf("Kazandiginizda kaybettiginizde renk degisir.");
	
	do
	{
		printf("\nOynamak icin 'E',cikmak icin 'H' ye basiniz :\n");
		scanf("%s",&oyna);
		if(oyna=='E')
		{
		 printf("\t Tas='T',Makas='M',Kagit='K' \n ");	
		 scanf("%s",&secim);
		 game(secim);
		}
	}while(oyna!='H');
	system("cls");
	
}
