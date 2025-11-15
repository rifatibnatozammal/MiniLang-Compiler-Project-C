#include <stdio.h>
#include <string.h>
#include "article_counter.h"

void article()
{
    char s[1000], w[1000];
    int n, a[1000], i, j, k = 0, l, found = 0, t = 0;

    printf("Enter any string: ");
    scanf("%[^\n]", s);


    char article[6][4]={"A","a","An","an","The","the"};
    int a_count[6];

    for (i = 0; s[i]; i++) {
        if (s[i] == ' ')
            a[k++] = i;
    }
    a[k++] = i;
    j = 0;
    for(int art=0;art<6;art++)
    {
        for (i = 0; i < k; i++) {
            n = a[i] - j;
    
            if (n == strlen(article[art])) {
                t = 0;
                for (l = 0; article[art][l]; l++) {
                    if (s[j + l] == article[art][l]){
                        t++;
                    }
                }
    
                if (t == strlen(article[art])) {
                    found++;
                }
            }
    
            j = a[i] + 1;
        }
        // printf("Frequency of the word: %s %d\n",article[art], found);
        a_count[art]=found;
        found = 0;


    }

    for(int k=0;k<6;k=k+2)
    {
        printf("\n %s = %d\n",article[k] ,a_count[k]+a_count[k+1]);


    }

}