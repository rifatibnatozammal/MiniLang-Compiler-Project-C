#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], w[1000];
    int n, a[1000], i, j, k = 0, l, found = 0, t = 0;

    printf("Enter any string: ");
    scanf("%[^\n]", s);

    printf("Enter a word: ");
    scanf("%s", w);

    for (i = 0; s[i]; i++) {
        if (s[i] == ' ')
            a[k++] = i;
    }
    a[k++] = i;
    j = 0;

    for (i = 0; i < k; i++) {
        n = a[i] - j;

        if (n == strlen(w)) {
            t = 0;
            for (l = 0; w[l]; l++) {
                if (s[j + l] == w[l]){
                    t++;
                }
            }

            if (t == strlen(w)) {
                found++;
            }
        }

        j = a[i] + 1;
    }

    printf("Frequency of the word: %d\n", found);

    return 0;
}
