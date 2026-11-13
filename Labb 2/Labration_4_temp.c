#include <stdio.h>
#include <math.h>

int main() {
    double temp;

    printf("Enter the temperature in Celsius: ");
    scanf("%lf", &temp);

    if (temp < 0) {
        printf("The temperature is below freezing point.\n");
    } else if (temp >= 0 && temp <= 10) {
        printf("Very cold weather.\n");
    } else if (temp > 10 && temp <= 20) {
        printf("Moderate weather.\n");
    } else if (temp > 20 && temp <= 30) {
        printf("Normal in temperature.\n");
    } else if (temp > 30 && temp <= 40) {
        printf("It's hot.\n");
    } else {
        printf("It's very hot.\n");
    }

    return 0;
}


    