#include <stdio.h>
#include <math.h>

double Sum (double num1, double num2){
    return num1 + num2;
}

double Sub (double num1, double num2){
    return num1-num2;
}

double Mul (double num1, double num2){
    return num1*num2;
}

double Div (double num1, double num2){
    return num1/num2;
}

double Sqr (double num1){
    return sqrt(num1);
}

double Pow (double num1, double num2){
    return pow(num1,num2);
}

double Avg (double num1, double num2){
    return (num1+num2)/2;
}

int main() {

    double num1, num2m, result;
    char operator;

printf("1. Sum (+)\n2. Sub (-)\n3. Mul (*)\n4. Div (/)\n5. Sqr (s)\n6. Pow (^)\n7. Avg (a)\n8. Exit (e)\n Enter an option: ");
scnanf("%c", &operator);

while (operator != 'e'){

    
}
}
