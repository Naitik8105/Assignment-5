//Code for Question 2
#include <stdio.h>
int main()
{
    int divident, divisor;
    printf("Enter divident and divsior\n");
    scanf("%d", &divident);
    scanf("%d", &divisor);
    int quotient = 0, remainder = 0;
    int temp = divident;
    
    if((divident>0)&&(divisor>0)){
    while (temp > divisor)
    {
        temp -= divisor;
        quotient++;
    }
    remainder = temp;
    }

    else if((divident<0)&&(divisor<0)){
    while (temp < divisor)
    {
        temp -= divisor;
        quotient++;
    }
    remainder = temp;
    }

    else if((divident>0)&&(divisor<0)){
    while ((temp +divisor)>0)
    {
        temp += divisor;
        quotient--;
    }
    remainder = temp;
    }

    else if((divident<0)&&(divisor>0)){
    while ((temp +divisor)<0)
    {
        temp += divisor;
        quotient--;
    }
    remainder = temp;
    }

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    
    return 0;
}