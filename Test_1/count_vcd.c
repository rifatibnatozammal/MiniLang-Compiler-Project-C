#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[10000];
    int vow = 0, con = 0, dig = 0;
    int len, k;

    printf("Enter any String (it will take input until pressing x): ");
    scanf("%[^x]", str);  
    len = strlen(str);

    for (k = 0; k < len; k++) {
        char ch = str[k];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vow++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            con++;
        }
        else if (ch >= '0' && ch <= '9') {
            dig++;
        }
    }

    printf("Vowels = %d\n", vow);
    printf("Consonants = %d\n", con);
    printf("Digits = %d\n", dig);

    return 0;
}
