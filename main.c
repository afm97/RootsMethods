#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "function.c"
#include "derivative.c"
#include "bisection.c"
#include "newton_raphson.c"

void main(){

    int iterations = 100;
    float root_bisection, root_np,a = 1.0,b = 3.0, x0 = 3,acceptable_iterative_approach = 0.0001;

    root_bisection = bisection(a,b,iterations,acceptable_iterative_approach);
    printf("\t---------------------------------------------------------------------------\n");
    root_np = newton_raphson(x0,iterations,acceptable_iterative_approach);
    printf("The root in the range a = %.2f and b = %.2f is %.5f\n",a,b,root_bisection);
    printf("The root with inicial shot x0 = %.2f is %.5f\n",x0,root_np);
}
