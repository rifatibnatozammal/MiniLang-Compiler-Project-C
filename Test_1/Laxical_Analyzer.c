#include <string.h>
#include <stdio.h>
#include <ctype.h>

#include"Laxical_Analyzer.h"

void keyword(char str[10]) {

    if (strcmp("for", str) == 0 || strcmp("while", str) == 0 || strcmp("do", str) == 0 || strcmp("int", str) == 0) {
        printf("\n%s is a Keyword", str);
    }
    else {
        printf("\n%s is an identifier", str);
    }
}

void Laxical_Analyzer() {
    FILE *f1, *f2, *f3;
    char c, str[10], str1[10];
    int num[100], lineno = 0, tokenvalue = 0, i = 0, j = 0, k = 0;
    printf("\nEnter the C program:");

    f1 = fopen("input", "w");
    while ((c = getchar()) != EOF){
        putc(c, f1);
    }
    fclose(f1);

    //return 0;
}

