#include<stdio.h>
#include<math.h>
#include<windows.h>
void menu()
{
	printf("\n1-Toplama islemi \n2-Cikarma islemi \n3-Bolme islemi\n4-Carpma islemi \n5-Mod islemi \n6-Us islemi \n7-Karekok islemi\n8-Cikis");
	
}
int main()
{
    int islem,sonuc;
    int i,a,b;
    int kac,k;
    int sayilar;
    int toplam=0,carp=1;
	printf("---Hesap makinesi---\n");

	do
	{	
	menu();
	printf("\n Islem seciniz: ");
	scanf("%d",&islem);
	switch(islem)
	{
		case 1:
			printf("Kac sayi girmek istiyorsunuz :");
			scanf("%d",&kac);
			printf("Sayilari giriniz\n");
			for(i=0;i<kac;i++)
			{
		    printf("%d.sayi :",i+1);
			scanf("%d",&sayilar);
			toplam+=sayilar;
			}
			printf("---Girmis oldugunuz sayilarin toplami--- :%d",toplam);
			break;
			case 2:
			printf("Cikartmak istediginiz sayilari giriniz\n :");
			printf("1.Sayi :");
			scanf("%d",&a);
			printf("2.Sayi:");
			scanf("%d",&b);
			printf("---Farklari:--- %d",a-b);
			break;
			case 3:
			printf("Bolmek istediginiz sayilari giriniz \n:");
			printf("1.Sayi :");
			scanf("%d",&a);
			printf("2.Sayi :");
			scanf("%d",&b);
			if(b==0)
			printf("!!Sifira Bolunemez!!");
			else
			printf("---Bolumleri:--- %d",a/b);
			break;
			case 4:
			printf("Kac sayi girmek istiyorsunuz :");
			scanf("%d",&kac);
			printf("Sayilari giriniz\n");
			for(i=0;i<kac;i++)
			{
		    printf("%d.sayi :",i+1);
			scanf("%d",&sayilar);
			carp*=sayilar;
			}
			printf("---Girmis oldugunuz sayilarin carpimi--- :%d",carp);
			break;
			case 5:
			printf("Modunu almak istediginiz sayilari giriniz \n:");
			printf("1.Sayi :");
			scanf("%d",&a);
			printf("2.Sayi :");
			scanf("%d",&b);
			printf("---Modu:--- %d",a%b);
			break;
			case 6:
			printf("Taban degerini giriniz \n:");
			scanf("%d",&a);
			printf("Us degerini giriniz :\n");
			scanf("%d",&b);
			sonuc=pow(a,b);
			printf("---Sonuc:--- %d",sonuc);
			break;
			case 7:
			printf("Karekok almak  istediginiz sayiyi  giriniz \n:");
			scanf("%d",&k);
			sonuc=sqrt(k);
			printf("---Islem sonucu:--- %d",sonuc);
			break;
		    case 8:
			printf("@Hesap makinesini kullandiginiz icin tesekkurler@");
			break;
			default:
			printf("---Hatali giris---");
	}
	}while(islem!=8);
	
	return 0;
}
