#include <stdio.h>

int ler (float *mediaPri,int *somaP,int valor);
int verificarP (int n);

void main()
{
     int somapares,valor,contz=0,contador;
     float mediaprimos;
   
    
        contador=ler(&mediaprimos,&somapares,valor);
    
    printf("Media dos primos:%f\n\nSoma dos pares:%d",mediaprimos,somapares);
    printf("\nQuantidade de valores lidos:%d",contador);
}
int verificarP (int n)
{
    int i,cont=0;
    if (n == 1) 
    {
        return 0;
    }
    if (n == 2) 
    {
        return 1;
    }
  
    if (n % 2 == 0) 
    {
        return 0;
    }
    
    for (int i = 3; i *i <= n; i += 2)
    {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
} 

int ler (float *mediaPri,int *somapares,int valor)
{
    int i,primo,contz=0,cont=0,contp=0,media=0,contd=0;
    *somapares=0;
    *mediaPri=0;
    while(contz!=3)
    {
        printf("Entre com um valor:");
        scanf("%d",&valor);
        if(valor%2==0)
        {
            *somapares+=valor;
        }
      if(valor!=0)
      {
          primo= verificarP(valor);
         if (primo==1)
        {
            media+=valor;
            contp++;
        }
          
      }
      
        
       if (valor==0)
        {
            contz++;
        }
        cont++;
    }
    if (contp> 0) {
        
    
    *mediaPri=(float)media/contp;
}
return cont;
}


