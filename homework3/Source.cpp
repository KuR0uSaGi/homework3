#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<math.h>
int main() {
    long int a, suma, sumb, b;
    scanf_s("%ld", &a);
    b = floor(a);
    suma = a % 2;
    sumb = a % 3;
    if (a > 30 || a == 0 || a < 0 || a != b)
        printf("Invalid date.");
    else if (a <= 30 && a != 0 && suma == 0 && sumb == 0)
        printf("Both of them.");
    else if (a <= 30 && a != 0 && suma != 0 && sumb != 0)
        printf("Nothing.");
    if (a <= 30 && a != 0 && suma == 0 && sumb != 0)
        printf("TONMAI A");
    else if (a <= 30 && a != 0 && sumb == 0 && suma != 0)
        printf("TONMAI B");
    return 0;
}