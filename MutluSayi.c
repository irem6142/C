#include<stdio.h>
#include<math.h>

int sayi(int b)
{
	  int top=0;
        int t=0;
        if(b<10)
        {
            top+=pow(b, 2);
            return top;
        }
      
        else
            
        {
            while(b>0)
            {
                
                int sayi=b%10;
                 top+=pow(sayi, 2);
                b/=10;
            }
           return sayi(top);
        }
    }

	
	  
	  
	  
	




int main()
{
	int i,r,a;
	printf("Sayi giriniz :");
	scanf("%d",&a);
  i=sayi(a);
  if(i==1)
  {
  	printf("\nMutlu sayidir :)");
  }
  else
  printf("\nMutlu sayi degildir  :(");

	
	
	
	return 0;
}
