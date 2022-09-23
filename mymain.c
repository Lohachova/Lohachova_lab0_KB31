#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "newf.h"

double ch;
int main()
{
    
    printf("Enter your number in double format: ");
    scanf("%lf", &ch);
    printf("number = %lf\n", ch);
    printf("Function with sin = %lf\n", funsin(ch));
    printf("Function with cos = %lf\n", funcos(ch));


    return 0;
}
