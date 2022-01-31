#include<stdio.h>

void yazdir(int dizi[][3], int d[][3])
{ 
     
		int i,j;
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
   	
	d[i][j]=dizi[j][i];

		}
		printf("\n");
		
}
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",dizi[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int dizi[3][3];
		int d[3][3];
		int i,j;
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&dizi[i][j]);
		}
	}
	   yazdir(dizi,d);
	    printf("--------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",d[i][j]);
		}
		printf("\n");
	}

	}

	
	
