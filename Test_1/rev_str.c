#include <stdio.h>
#include<string.h>
#include"rev_str.h"

void rev_str()
{
    char str[100], re[100];
    int i, s, r, len;

    printf("Enter any string: ");
    fgets(str,sizeof(str),stdin);
    i = 0;
    while(str[i] != '\0'){
        i++;
    }
    len = i;
    r = 0;
    s = len - 1;
    while(s >= 0)
    {
        re[r] = str[s];
        s--;
        r++;
    }
    re[r] = '\0';
    
    printf("\n");
    printf("Original string = %s\n", str);
    printf("Length of String : %d", len);
    printf("Reverse string = %s", re);

    //return 0;
}