#include<stdio.h>
int main()
{
	int a,b,i;
	int toplam=0;
	printf(" Sayi:");
	scanf("%d",&a);
    printf(" Sayi:");
	scanf("%d",&b);
	for(i=1;i<=b;i++)//O sayi adeti kadar gidecek mesela 3*5 =3+3+3+3+3=5+5+5
	{
		toplam+=a;
	}
	printf(" Carpimlari :%d",toplam);


}

