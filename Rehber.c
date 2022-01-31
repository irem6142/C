#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
  
	
    struct rehber
	{
		char name[100];
		char surname[100];
		char num[100];
	}kisi;
	printf("Rehber Listesi\n");
	int secim;
	
	do
	{
		printf("********\n");
		printf("1-Rehber Ekleme \n");
		printf("2-Rehber Listeleme\n");
		printf("3-Cikis \n");
		printf("Islem seciniz: ");
		scanf("%d",&secim);
			if(secim==1)
	{
		printf("----------------\n");
		fp=fopen("rehber.txt","a+");
		printf("Name:");
		scanf("%s",&kisi.name);
		printf("Surname :");
		scanf("%s",&kisi.surname);
		printf("Phone number :");
		scanf("%s",&kisi.num);
		
		fwrite(&kisi,sizeof(kisi),1,fp);
	
		printf("\n--------Kaydedilmistir--------\n\n");
	
	}
	fclose(fp);
	if(secim==2)
	{
	fp=fopen("rehber.txt","rb+");
	while(!feof(fp))//feof dosya sonu gostergesidir.
	{
	fread(&kisi,sizeof(kisi),1,fp);
	if(feof(fp)) break;
	printf("----------------\n");
	printf("Name:%s\nSurname:%s\nPhone number:%s \n ",kisi.name,kisi.surname,kisi.num);
	}	
	}
fclose(fp);

	
	}while(secim!=3);
	

	
	
	
	
	
	
	
}
