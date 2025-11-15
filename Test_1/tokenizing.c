#include<stdio.h>
#include<string.h>
#include"tokenizing.h"

void tokenizing()
{
    char str[100];

    printf("Enter any String:\n");
    fgets(str, sizeof(str), stdin);

    char* token = strtok(str," ");
    while(token!=NULL)
    {
        printf("%s\n",token);
        token = strtok(NULL," ");
    }

    //return 0;
}
