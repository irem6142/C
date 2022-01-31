#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char name[100],password[100];
	int secim,para,cekme,bakiye,count=0;
	printf("=======Atm'ye hos geldiniz=======\n");

	do
	{
	
	printf("Kullanici adiniz :");
	scanf("%s",&name);
	printf("Sifreniz :");
	scanf("%s",&password);
		if(strcmp(name,"irem")==0 && strcmp(password,"123456")==0)
	{
		printf("=======Giris basarili =======\n");
		do
	{
		printf("1-Para yatirma\n2-Para cekme\n3-Bakiye sorgulama\n4-Cikis\n");
		printf("Bir islem seciniz :\n");
		scanf("%d",&secim);
		switch(secim)
		{
			case 1:
					system("color 07");
				printf("Ne kadar para yatiracaksiniz ? :");
				scanf("%d",&para);
				bakiye+=para;
				break;
				case 2:
			    printf("Ne kadar para cekeceksiniz ?:");
				 scanf("%d",&cekme);
				 if(bakiye<cekme)
				 {
				 	system("color 47");
				 	
				 	printf("=======Bakiye yetersiz.=======\n");
				 
				 }
				 else 
				 bakiye-=cekme;
				 break;
				 case 3:
				 		system("color 07");
				 	printf("=======Bakiyeniz :%d =======\n",bakiye);
				 	break;
				 	case 4:
				 			system("color 07");
				 		printf("=======Gule Gule=======\n");
				 		break;
				 		default:
				 	printf("=======Yanlis secim=======\n");
				 	break;
		}
	}while(secim!=4);
break;
	}

else{
	count++;
 	printf("=======Yanlis kullanici adi ya da sifre kalan hakkiniz :%d =======\n",3-count);
 	if(count==3)
 	printf("=======HESAP BLOKE OLDU=======");
	 }
 	
	}while(count<3);
	
	
}

