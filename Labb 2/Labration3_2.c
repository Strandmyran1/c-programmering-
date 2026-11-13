#include <stdio.h>
#include <math.h>

int main()
{
int x;
printf("Enter a number: ");
scanf("%d", &x);

if (x == 0) {
    printf("NULL\n");
} else if (x % 2 == 0) {
    printf("even\n");
} else {
    printf("odd\n");
}

if (x < 0) {
    printf("negative\n");
}

if (x % 3 == 0 && x % 5 == 0 && x % 7 == 0 && x != 0) {
    printf("YES\n");
}

return 0;
}
