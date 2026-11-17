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

    double num1, num2, result;
    char operator;

printf("1. Sum \n2. Sub \n3. Mul \n4. Div \n5. Sqr \n6. Pow \n7. Avg \n8. Exit \n Enter an option: ");
scanf("%c", &operator);

while (operator != 8){
    switch (operator){
        case '1':
        printf("Enter two numbers: ");
        scanf("%.0lf %.0lf", &num1, &num2);
        result = Sum (num1, num2);
        printf("Result: %.0lf\n", result);
        break;
        
        case '2':
        printf("Enter two numbers: ");
        scanf("%.0lf %.0lf", &num1, &num2);
        result = Sub (num1, num2);
        printf("Result: %.0lf\n", result);
        break;
        
        case '3':
        printf("Enter two numbers: ");
        scanf("%.0lf %.0lf", &num1, &num2);
        result = Mul (num1, num2);
        printf("Result: %.0lf\n", result);
        break;

        case '4':
        printf("Enter two numbers: ");
        scanf("%.0lf %.0lf", &num1, &num2);
        if (num2 != 0) {
            result = Div (num1, num2);
            printf("Result: %lf\n", result);
        } else {
            printf("You can not divide by zero\n"); 
        }
        break;
        
        case '5':
        printf("Enter one number: ");
        scanf("%.0lf", &num1);
        result = Sqr (num1);
        printf("Result: %lf\n", result);
        break;
    
        case '6':
        printf("Enter two numbers: ");
        scanf("%.0lf %.0lf", &num1, &num2);
        result = Pow (num1, num2);
        printf("Result: %lf\n", result);
        break;

        case '7': {
        int n;
        double sum = 0.0;
        double currentNum;

        printf("How many numbers do you want to do the average for: ");
        scanf("&d", &n);
        
        for (int a = 0; a < n; a++) {
            printf("Enter a number: %d", a + 1);
            scanf("%lf", &currentNum);
        
            sum = sum + currentNum;
        }
        if (n>0) {
            double Avg = sum / n;
            printf("The avarge is: %lf\n", Avg);    
        }
        else {
            printf("Invalid. \n");
        }
        break;
        }
        case '8':
        printf("Exiting.\n");
        break;
        default:
        printf("Invalid option. Please try again.\n");
        break;
    }
} 
}   
