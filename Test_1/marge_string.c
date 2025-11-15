#include <stdio.h>
#include <string.h>

int main() {
    char temp[100];
    char result[300];  
    int i = 0, j = 0, num;

    printf("Enter Number of String are you Input : ");

    scanf("%d",&num);
    getchar();

    for(int n=1; n<=num; n++){
        printf("Enter String No. %d : ",n);
        scanf("%[^\n]",temp);
        i=0;

        while (temp[i] != '\0') {
            result[j++] = temp[i++];
        }
        getchar();

    }

    result[j] = '\0';

    printf("Concatenated String: %s\n", result);

    return 0;
}
