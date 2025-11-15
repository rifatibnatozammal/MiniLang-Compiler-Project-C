#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count=0,i=0;

    printf("Enter any string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            count++;
        }
    }
    printf("Total Number space: %d\n", count);
    return 0;
}

