#include <stdio.h>
#include <windows.h>
int main(){
SetConsoleOutputCP(CP_UTF8);
int dagar, dagspris;
printf("Ange antal dagar: \n");
scanf("%d", &dagar);
printf("Pris per dag: \n");
scanf("%d", &dagspris);
printf("Totalt pris för %d dagar: %d\n", dagar, dagar * dagspris);
return 0;
}





