#include <stdio.h>
#include <windows.h>

int main() {
SetConsoleOutputCP(CP_UTF8);
int n1 = 4;
int n2;
printf("Ange ett heltal: ");
scanf("%d", &n2);
int sum = n1 + n2;
printf("Summan av %d och %d är: %d\n", n1, n2, sum);
return 0;
}