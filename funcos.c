#include <stdio.h>
#include <math.h>

double funcos(double x)
{
    double fcos;
    fcos = exp(-fabs(x))*cos(x);
   
    return fcos;
}

