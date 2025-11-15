#include <stdio.h>
#include <string.h>

#include"headers\space_counter.h"

void space_counter() {
    char str[100];
    int count = 0, i = 0;

    printf("Enter any string: ");
    scanf("%[^\n]",str);

    fflush(stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    printf("Total number of spaces: %d\n", count);
    //return 0;
}
