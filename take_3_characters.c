// Problem Statement: Write a C program that will take 3 characters and print next 3.

#include <stdio.h>
#include"headers\take_3_characters.h"

void take_3_characters() {
    char x[100];

    printf("New Input : ");
    scanf("%s", x);

    printf("New Output : ");

    int a, b, c;
    a = (int)(x[0]) + 3;
    b = (int)(x[1]) + 3;
    c = (int)(x[2]) + 3;

    printf("%c, %c, %c\n", a, b, c);

    //return 0;
}
