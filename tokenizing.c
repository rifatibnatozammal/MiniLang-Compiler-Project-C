#include<stdio.h>
#include<string.h>
#include"headers\tokenizing.h"

void tokenizing() {
    char str[100];

    printf("Enter any string:\n");
    fgets(str, sizeof(str), stdin);

    char* token = strtok(str, " ");
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}