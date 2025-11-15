
#include <stdio.h>
#include <string.h>

#include"Identifi_comment.h"

void identifi_comment()
{
    char c, a[10000], b[10000], d[10000];
    int j = 0, m = 0, len, k, i;

    printf("Enter any String with single line comment to check (it will take input until pressing x): ");
    scanf("%[^x]", a);

    len = strlen(a);

    for (k = 0; k <= len - 1; k++) {
        if (a[k] == '/' && a[k + 1] == '/') {
            k += 2;
            while (k <= len - 1) {
                if (a[k] == '\n')
                    break;
                 b[j++] = a[k++];
            }
        }
    }

    b[j] = '\0';
    printf("\nSingle line comments: %s\n", b);

    for (i = 0; i < len - 1; i++) {
        if (a[i] == '/' && a[i + 1] == '*') {
            i += 2;
            while (a[i] != '*' && a[i + 1] != '/') {
                d[m++] = a[i++];
            }
        }
    }
    d[m] = '\0';
    printf("\n Multi line comments: %s\n", d);
    //return 0;

}
