#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] ;  
    char str2[] = "this is ";   // Second string
    char str3[] = "a test.";    // Third string
    char result[200]="Name is ";           // To store the final concatenated string
    int i = 0, j = 8;
    scanf("%[^\n]", str1);

    fflush(stdin);

    // Copy str1 into result
    while (str1[i] != '\0') {
        result[j++] = str1[i++];
    }
    printf("%s t\n",result);

    return 0;
}