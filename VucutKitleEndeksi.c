#include<stdio.h>
#include <locale.h>

 
 int main()
 {
 	setlocale(LC_ALL, "Turkish");
 	float kg,m;
printf("===\n18, 5 kg/m.'nin altýnda olanlar: Zayýf\n18.5 – 24, 9 kg/m. arasýnda olanlar: Normal kilolu\n25 – 29, 9 kg/m. arasýnda olanlar: Fazla kilolu\n30 – 39, 9 kg/m. arasýnda olanlar: Obez\n40 kg/m.'nin üzerinde olanlar: Ýleri derecede obez (morbid obez)\n===\n");
printf("Agirliginiz :");
scanf("%f",&kg);
printf("Boyunuz :");
scanf("%f",&m);
float  b=((m*m)/10000);
 float result=kg/b;
 printf("Kitle endeksi :%f\n",result);
 if(result<=18)
 {
 	printf("Zayýf");
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
 	printf("Ýleri derecede obez");
 }
 


 }
