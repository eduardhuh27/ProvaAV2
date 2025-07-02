// Online C compiler to run C program online
#include <stdio.h>

int preencher (int vet[],int tamanho, int n);
void soma (int vet[],int vet2[],int vetr[],int tamanho);
void exibir (int vet[],int tamanho);

void main()
{
  int tamanho=5,n, n2;
  int vet[5];
  int vet2[5];
  int vetr[5];
  
  printf("Entre com o valor:");
  scanf("%d",&n);
  printf("Entre com o valor:");
  scanf("%d",&n2);
preencher (vet,tamanho,n);
exibir (vet,tamanho);
preencher (vet2,tamanho,n2);
exibir (vet2,tamanho);
soma (vet,vet2,vetr,tamanho);
exibir (vetr,5);
}

int preencher (int vet[],int tamanho, int n)
{
    while(tamanho>0)
    {
      tamanho--;
      vet[tamanho]=n%10;
      n=n/10;
    }
}

void soma (int vet[],int vet2[],int vetr[],int tamanho)
{
    int i;
    
    for(i=tamanho-1;i>=0;i--)
    {
        vetr[i]=vet[i]+vet2[i];
        if(vetr[i]>=10)
        {
            vetr[i]=vetr[i]%10;
            vet[i-1]=vet[i-1]+1;
        }
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

















