#include <stdio.h>
#include <math.h>

double add (double a, double b){
    return a + b;
}

double subtract (double a, double b){
    return a-b;
}

double multiply (double a, double b){
    return a*b;
}

double divide (double a, double b){
    return a/b;
}

int main(){
    double num1, num2, result;
    char operator;
    printf("Enter calculation with to numbers and operator as (+ - * /): ");

    scanf("%lf %c %lf", &num1, &operator, &num2);
    switch (operator) {
case '+':
    result = add(num1, num2);
    printf("Result: %lf\n", result);
    break;

case '-':
    result = subtract(num1, num2);
    printf("Result: %lf\n", result);
    break;

case '*':
result = multiply(num1, num2);
    printf("Result: %lf\n", result);
    break;

case '/':
if (num2 != 0) {
    result = divide(num1, num2);
    printf("Result: %lf\n", result);
} else {
    printf("Error: Division by zero is not allowed.\n");
    }
    break;
defult:
    printf("Error: Invalid operator. Please use +, -, *, or /.\n");
    break;
}
return 0;
}


