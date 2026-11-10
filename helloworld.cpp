#include <stdio.h>
#include <windows.h>

int main()
{
SetConsoleOutputCP(CP_UTF8);

char name[50];

    printf("Vad heter du?\n");
    scanf ("%s", name);

    printf ("Hej %s! Vad trevligt att träffas!\n", name);
    return 0;
}    