#include <stdio.h>
#include <string.h>
#include"headers\char_counter.h"

void char_counter() {
    char str[100];
    int i, count = 0;

    printf("Enter any string: ");
    scanf("%[^\n]",str);

    fflush(stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            count++;
        }
    }

    printf("Number of non-space characters: %d\n", count);
    //return 0;
}
