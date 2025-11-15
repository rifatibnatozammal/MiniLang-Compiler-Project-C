//Problem Statement: Write a C program to recognize a set of identifiers as valid or not.
/*
Har       – Valid
_hak      – Valid
#box      – Invalid
9rb       – Invalid
rat_cat   – Valid
cat       – Valid
*/


#include <string.h>

int main() {
    char str[100];

    printf("Enter an identifier: ");
    int count = 0, len = 0, k = 0;

    scanf("%s", str);

    while (str[k] != '\0') {
        len++;
        k++;
    }

    if ((str[0] >= 'a' && str[0] <= 'z') ||
        (str[0] >= 'A' && str[0] <= 'Z') ||
        str[0] == '_') {

        count++;

        for (int i = 1; i < strlen(str); i++) {
            if ((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= '0' && str[i] <= '9') ||
                str[i] == '_') {
                count++;
            }
        }

        if (count == len) {
            printf("%s is valid identifier\n", str);
        }
        else {
            printf("%s is invalid identifier\n", str);
        }
    }

    return 0;
}
