#include<stdio.h>
#include <stdlib.h>
 
 int main(int argc, char *argv[]) 
 {
 	char *cevap[200];
 	int sayac=0;
 	printf("Yarismaya hos geldiniz !\n");
 	printf("SORULARI CEVAPLARKEN SADECE ÝLK HARFÝNÝ BUYUK YAZÝNÝZ. !");
 	printf("Toplamda 5 soru vardir ve klasiktir.Basarilar\n ");
 	printf("1.Soru Sokrates'in Savunmasi, Devlet ve Solen kitaplarinin yazari kimdir? \n");
 	gets(cevap);
 	if(strcmp (cevap,"Platon")==0)
 	{
 		printf("Tebrikler\n");
 		sayac+=100;
	 }
	 else{
	 	printf("Kaybettin Cevap:Platon\n");
	 
	 }
	 	printf("2.Soru \n Araclarin sehir icinde daha yavas gitmesini saglamak icin yollarda kullanilan tumseklere ne ad verilir?\n");
 	gets(cevap);
 	if(strcmp (cevap,"Kasis")==0)
 	{
 		printf("Tebrikler \n");
 		sayac+=100;
	 }
	 else{
	 	printf("Yanlis Cevap:Kasis\n");
	
	 }
	 	printf("3.Soru \n Kirmizi ve sari renklerinin karisimindan hangi renk elde edilir? ? \n");
 	gets(cevap);
 	if(strcmp (cevap,"Turuncu")==0)
 	{
 		printf("Tebrikler\n");
 		sayac+=100;
	 }
	 else{
	 	printf("Yanlis Cevap:Turuncu\n");
	 
	 }
	 	printf("4.Soru \n Nufusu sadece 825 olan, en kucuk Avrupa ulkesi hangisidir? \n");
 	gets(cevap);
 	if(strcmp (cevap,"Vatikan")==0)
 	{
 		printf("Tebrikler\n");
 		sayac+=100;
	 }
	 else{
	 	printf("Yanlis Cevap:Vatikan\n");
	 
	 }
	 	printf("4.Soru \n  Harita biliminin diger adi nedir?\n");
 	gets(cevap);
 	if(strcmp (cevap,"Kartografya")==0)
 	{
 		printf("Tebrikler\n");
 		sayac+=100;
	 }
	 else{
	 	printf("Yanlis Cevap:Kartografya\n");
	 
	 }
	 printf("\t Puan :%d",sayac);
	 
	 return 0;
    
      
    
    
    
    
}
  
  
  
