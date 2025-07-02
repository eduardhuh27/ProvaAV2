#include <stdio.h>
#include <time.h>

void organizar (int A[], int B[],int tamanho);

void exibir (int vet[],int tamanho);

void main()
{
    int tamanho=5;
    int A[5] = {1,2,3,4,5};
    int B[5];
     
      organizar (A, B,tamanho);
      exibir ( A,tamanho);
       exibir ( B,tamanho);
}



void organizar (int a[],int b[], int tamanho)
{
    int i, aux=tamanho-1,j=0;
    
    for(i=0;i<tamanho;i++)
    {
      if(a[i]%2==0)
      {
          b[j]=a[i];
          j++;
      }
    else
        {
            b[aux]=a[i];
            printf("\n\n%d",b[aux]);
            aux--;
        }
    
      
    }
    
    
    
    
    
    
    
}
void exibir (int vet[],int tamanho)
{
    int i;
    printf("\n\n");
    for(i=0;i<tamanho;i++)
    {
        printf("%d",vet[i]);
    }
    printf("\n\n");
}






