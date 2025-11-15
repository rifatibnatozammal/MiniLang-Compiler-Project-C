//Write a c program that will take multiple line and count lines and print it

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#include"Line_counting.h"


void line_counting(){
    char string[100];
    printf("Enter Multiples lines of String (until pressing *) : \n");
    scanf("%[^*]",string);

    int length =strlen(string),count=1;

    for(int i=0; i<length;++i){
        if(string[i]=='\n')
            count++;
    }

    printf("%d\n",count);

    //return 0;
}

