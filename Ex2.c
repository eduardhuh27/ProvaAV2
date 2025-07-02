#include <stdio.h>

int ordenacao (int n);
void main()
{
    int x,ordem;
    
    printf("Entre com um numero:");
    scanf("%d",&x);
    
    ordem=ordenacao(x);
    
    if(ordem==0)
    {
        printf("%d esta ordenado",x);
    }
    else
    {
        printf("%d nao esta ordenado",x);
    }
    
}
int ordenacao (int n)
{
    int atual, ante;
    
    if(n<10)
    {
        return 0;
    }   
    
    ante=n%10;
    n=n/10;
    
    while (n>0)
    {
        atual=n%10;
        if(ante<atual)
        {
            return 1;
        }
        ante=atual;
        n=n/10;
    }
    
    return 0;
}






