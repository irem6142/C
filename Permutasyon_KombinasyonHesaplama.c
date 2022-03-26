#include<stdio.h>
int main()
{
	int i,n,r,fak=1,fak1=1,fak2=1,sonuc,sonuc1;	
	printf("n degeri :");
	scanf("%d",&n);
	printf("r degeri :");
	scanf("%d",&r);
	int fark=n-r;
	for(i=1;i<=n;i++)
	{
		fak*=i;
	}
	for(i=1;i<=r;i++)
	{
		fak1*=i;
	}
	for(i=1;i<=fark;i++)
	{
		fak2*=i;
	}
	sonuc=fak/(fak1*fak2);
	sonuc1=fak/fak2;
	printf("Kombinasyon :%d\n",sonuc);
	printf("Permutasyon :%d",sonuc1);
}
