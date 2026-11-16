#include <stdio.h>
#include <math.h>  // Krävs för att använda avancerad matte som sqrt()

int main() {
    // Vi använder 'double' (ett stort decimaltal) eftersom mattefunktioner 
    // i C nästan alltid kräver och returnerar decimaltal.
    double area = 3452.0;
    
    // Räkna ut roten ur (square root) arean
    double sida = sqrt(area);
    
    // %f används i printf för att skriva ut decimaltal (float/double)
    printf("Om en kvadrat har arean %f, ar sidan %f lang.\n", area, sida);
    
    return 0;
}

