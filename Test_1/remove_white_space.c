
#include <stdio.h>
#include <string.h>

#include"Identifi_comment.h"

int main()
{
    char c, a[10000], b[10000], d[10000];
    int j = 0, m = 0, len, k, i;

    printf("Enter any String (it will take input until pressing x): ");
    scanf("%[^x]", a);

    len = strlen(a);

    for (k = 0; k <= len - 1; k++) {
        if (a[k] != ' ') {
                 b[j++] = a[k];

        }
    }

    printf("String Without White Space : %s\n",b);

    return 0;
}
