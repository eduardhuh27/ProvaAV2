#include <stdio.h>

int maiormenor (float vet[],int tamanho,int n);
int menormaior (float vet[],int tamanho,int n );
void preencher (float vet[],int tamanho);
int maiorT (float vet[],int tamanho);
int menorT (float vet[],int tamanho);

void main ()
{
    int n,tamanho,mame,mema;
    printf("Entre com o tamanho do vetor:");
    scanf("%d",&tamanho);
    float vet[tamanho];
    
    preencher (vet, tamanho);
    
    printf("Entre com um numero:");
    scanf("%d",&n);
    
    mema=menormaior (vet,tamanho,n);
    mame=maiormenor(vet,tamanho,n);
    
    printf("\nMaior entre os valores menores que %d:%d",n,mame);
    printf("\nMenor entre os valores maiores que %d:%d",n,mema);
}

void preencher (float vet[],int tamanho)
{
    int i;
    
    for (i=0;i<tamanho;i++)
    {
        printf("Entre com o valor da posicao %d:",i);
        scanf("%f",&vet[i]);
    }
}

int maiormenor(float vet[],int tamanho, int n)
{
    int i,menor=menorT(vet,tamanho);
    
    for (i=0;i<tamanho;i++)
    {
        if((vet[i]<n) && (vet[i]>menor))
        {
            menor=vet[i];
        }
    }
    return menor;
}

int menormaior (float vet[],int tamanho,int n)
{
    int i,maior=maiorT(vet,tamanho);
    
    for (i=0;i<tamanho;i++)
    {
        if((vet[i]>n) && (vet[i]<maior))
        {
            maior=vet[i];
        }
    }
    return maior;
}
int maiorT (float vet[],int tamanho)
{
    int i,maior=-1000000;
    
    for(i=0;i<tamanho;i++)
    {
        if(maior<vet[i])
        {
            maior=vet[i];
        }
    }
    return maior;
}

int menorT (float vet[],int tamanho)
{
    int i, menor=10000;
    
    for(i=0;i<tamanho;i++)
    {
        if(menor>vet[i])
        {
            menor=vet[i];
        }
    }
    return menor;
}














