 #include <stdio.h>
int aredondar (float x); 
void main () 
{ 
//float x;
int aprox,i,x;
printf("Entre com um numero:");
scanf("%f",&x); 
for(i=0;i>=5;i++)
{
aprox=(x%10);
printf("%d",aprox);
} 
//aprox= aredondar(x); 
// printf("%d",aprox);
} 
int aredondar (float x)
{ 
int aprox;
aprox=x; 
if(x>=(aprox+0.5)) 
{ return (x+1); }
return x; 
}
