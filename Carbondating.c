//Carbon Dating
#include <stdio.h>
#include <math.h>
void main()
{
 double hl, age, rem, loss;
 printf("How much carbon has been lost (0-100%%)? ");
 scanf("%lf", &loss);
 hl = 5730.0;
 rem = 1.0 - (loss/100.0);
 age = -(hl / log10(2.0)) * log10(rem);
 printf("'\nThe object is %lf years old.\n", age);
}