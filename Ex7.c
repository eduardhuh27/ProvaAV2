#include <stdio.h>
#include <time.h>

void achar (int A[],int tamanho,int B[]);

void exibir (int vet[],int tamanho);

void main()
{
    int tamanho=10,p;
    int A[10] = {2,0,3,4,1,1,0,2,2,8};
    int B[10];
    achar ( A, tamanho,B);
    exibir (B, tamanho);
}
void achar (int A[], int tamanho,int B[])
{
    int i,cont=0,p;
    
    for(p=0;p<tamanho;p++)
    { 
        cont=0;
        for(i=0;i<tamanho;i++)
        {
            if(A[i]==p)
            {
                cont++;
            }
        }
        B[p]=cont;
    }
}

    

void exibir (int vet[],int tamanho)
{
    int i;
    
    for(i=0;i<tamanho;i++)
    {
        printf("%d",vet[i]);
    }
    printf("\n\n");
}






