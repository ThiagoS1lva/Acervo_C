#include<stdio.h>
#include<stdlib.h>



int main()
{

    float a, b ,c, m;
    
    printf ("Digite o número do peso 1: ");
    scanf("%f", &a);
    
    printf ("Digite o número do peso 2: ");
    scanf("%f", &b);
    
    printf ("Digite o número do peso 3: ");
    scanf("%f", &c);
    
    m = (a * 1 + b * 2 + c * 3) / 6;
    
    printf ("A média ponderada entre esses número é %f.", m);
    
    
    return 0;
}