#include<stdio.h>
#include <locale.h>

 
 int main()
 {
 	setlocale(LC_ALL, "Turkish");
 	float kg,m;
printf("===\n18, 5 kg/m.'nin alt�nda olanlar: Zay�f\n18.5 � 24, 9 kg/m. aras�nda olanlar: Normal kilolu\n25 � 29, 9 kg/m. aras�nda olanlar: Fazla kilolu\n30 � 39, 9 kg/m. aras�nda olanlar: Obez\n40 kg/m.'nin �zerinde olanlar: �leri derecede obez (morbid obez)\n===\n");
printf("Agirliginiz :");
scanf("%f",&kg);
printf("Boyunuz :");
scanf("%f",&m);
float  b=((m*m)/10000);
 float result=kg/b;
 printf("Kitle endeksi :%f\n",result);
 if(result<=18)
 {
 	printf("Zay�f");
 }
 if(result>18 && result<25)
 {
 	printf("Normal kilolu");
 }
 if(result>=25 && result<30)
 {
 	printf("Fazla kilolu");
 }
 if(result>=30 && result<40)
 {
 	printf("Obez");
 }
 if( result>=40)
 {
 	printf("�leri derecede obez");
 }
 


 }
