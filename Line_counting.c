#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"headers\Line_counting.h"

void line_counting(){
    char string[100];
    printf("Enter Multiples lines of String (until pressing *) : \n");
    scanf("%[^*]",string);

    fflush(stdin);

    int length = strlen(string), count = 1;

    for(int i = 0; i < length; ++i){
        if(string[i] == '\n')
            count++;
    }

    printf("%d\n", count);
}
