#include <stdio.h>
#include <string.h>

#include"headers\marge_string.h"

void marge_string() {
    char temp[100];
    char result[300];  
    int i = 0, j = 0, num;

    printf("Enter the number of strings you want to input: ");
    scanf("%d", &num);
    getchar();

    for (int n = 1; n <= num; n++) {
        printf("Enter string No. %d: ", n);
        scanf("%[^\n]", temp);
        i = 0;

        while (temp[i] != '\0') {
            result[j++] = temp[i++];
        }
        getchar();
    }

    result[j] = '\0';

    printf("Concatenated string: %s\n", result);

    //return 0;
}
