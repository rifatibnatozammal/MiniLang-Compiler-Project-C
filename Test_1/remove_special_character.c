#include <stdio.h>
#include <string.h>

#include "Identifi_comment.h"

int main()
{
    char str[10000], b[10000], ch;
    int j = 0, len, k;

    printf("Enter any String (it will take input until pressing *): ");
    scanf("%[^*]", str);

    len = strlen(str);

    for (k = 0; k <= len - 1; k++) {
        ch = (int)(str[k]);

        if ((ch >= 97 && ch <= 122) ||  
            (ch >= 65 && ch <= 90) ||  
            (ch >= 48 && ch <= 57) ||  
            str[k] == ' ') { 
                 
            b[j++] = str[k];
        }
    }

    // Add null terminator to the string
    b[j] = '\0';

    printf("String Without special characters: %s\n", b);

    return 0;
}
