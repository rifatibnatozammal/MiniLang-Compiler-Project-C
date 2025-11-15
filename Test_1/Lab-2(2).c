/*Problem : Write C program that will tokenize
 a string not using strtok() library Function*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str1[50];
    char str2[60][60];

    int length,etr=0,i,j = 0;
    printf("Enter any string : \n");
    fgets(str1,sizeof(str1),stdin);

    length = strlen(str1);
    for(i=0;i<=length;i++)
    {
        if(str1[i]==' '||str1[i]=='/0')
        {
            str2[etr][j]='\0';
            etr++;
            j=0;
        }
        else
        {
            str2[etr][j]=str1[i];
            j++;
        }
    }

    printf("After Tokenization:\n");
    for(i=0;i<etr;i++)
    {
        printf("%s\n",str2[i]);
    }

    return 0;
}
