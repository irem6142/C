#include<stdio.h>
#include<string.h>

 int main()
 {
 	int i,j=0,a=0;
 	char yeniKelime[100];
 	char kelime[100];
 	printf("Ters cevrilecek yaziniz :");
 	gets(kelime);
 	//kelimenin uzunlugunu aldik.
 	int uzunluk=strlen(kelime);
 	for(i=uzunluk-1;i>=0;i--)
 	{
 		//kelimenýn sonunu yeni kelimenin ilk harfi yaptik
 		 yeniKelime[j]= kelime[i];
 		 j++;
	 }
 for(i=0;i<uzunluk;i++)
	 {
	 	//ilk harfi esitse a yý arttýrdýk
	 	if(yeniKelime[a]==kelime[i])
	 	{
	 		a++;
		 }
	 }
printf("Ters cevrilmis hali :%s\n",yeniKelime);
// Eger a ile uzunluk esitse polindrom
	 if(a==uzunluk)
	 {
	 	printf("Polindromdur.");
	 	
	 }
else
{
	printf("Polindrom degildir.");
}
	
 	
 }
