#include <stdio.h>
#include <math.h>
//#include <limits.h>

int main()
{
double x,y;

printf("Write a decimal for x: ");
scanf("%lf", &x);
printf("Write a decimal for y: ");
scanf("%lf", &y);

double largest = fmax(x,y);
printf("The largest number is: %lf\n", largest);
double smallest = fmin(x,y);
printf("The smallest number is: %lf\n", smallest);

double absolute = fabs(x - y);
printf("The absolute value of the difference is: %lf\n", absolute);

double function_1 = pow (x, 2) + 2*x + 1;
printf("The value of the function f(x) = x^2 + 2x + 1 is: %lf\n", function_1);

double function_2 = ((x+y)/3) - 1;
printf("The value of the funktion f(x,y) = (x+y)/3 - 1 is: %lf\n", function_2);

double x2 = pow(x+1, 2)/3.0;
double y2 = pow(y-1, 2)/4.0;
double function_3 = sqrt(x2+y2);
printf("The value of the function f(x,y) = square root ((x+1)^2/3) + square root ((y-1)^2/4) is: %lf\n", function_3);

double function_4 = (1/(x-y));
printf("The value of the function f(x,y) = 1/x - y is: %lf\n", function_4);


return 0;

}
