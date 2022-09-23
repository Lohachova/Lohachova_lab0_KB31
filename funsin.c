#include <stdio.h>
#include <math.h>

double funsin(double x)
{
    double fsin;
    fsin = exp(-fabs(x))*sin(x);
   
    return fsin;
}

