#include<stdio.h>
#include<stdlib.h>

int main()
{	
    srand(time(NULL));//Sürekli ayný sayýyý tekrarlamamasý için 
	int s=(rand()%100)+1;

	printf("Sayi tahmin oyununa hos geldiniz!1-100 arasi sayi tutunuz:");
	int cvp,sayac=0;
	scanf("%d",&cvp);
	while(s!=cvp)
	
	{
		sayac++;
		if(s<cvp)
		{
			printf("Daha kucuk deger giriniz :");
			scanf("%d",&cvp);
		}
		else if(cvp<s)
		{
			printf("Daha buyuk deger giriniz : ");
				scanf("%d",&cvp);
		}
		else
		{
			printf("Tebriklerrr");
		}
	}
	printf("%d tahmin sonunda buldunuz.",sayac);
	return 0;
}
