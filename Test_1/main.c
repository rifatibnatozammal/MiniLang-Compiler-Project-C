#include <stdio.h>
#include "article_counter.h"
#include "tokenizing.h"
#include "Line_counting.h"
#include "Identifi_comment.h"
#include "rev_str.h"
#include "Laxical_Analyzer.h"
#include "take_3_characters.h"

int main() {
    int choice;

    printf("MiniLang - Choose an Operation:\n");
    printf("1. Count lines in input\n");
    printf("2. Count frequency of articles (a, an, the)\n");
    printf("3. Detect comments in code\n");
    printf("4. Reverse a string\n");
    printf("5. Tokenize a string\n");
    printf("6. Detect keywords and identifiers\n");
    printf("7. Print next 3 characters after input\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    fflush(stdin);  // Clears the input buffer (works in some compilers like GCC)


    switch (choice) {
        case 1:
            line_counting();  // Function for line counting
            break;
        case 2:
            article();  // Function for counting articles
            break;
        case 3:
            identifi_comment();  // Function for detecting comments
            break;
        case 4:
            rev_str();  // Function for reversing string
            break;
        case 5:
            tokenizing();  // Function for tokenizing string
            break;
        case 6:
            Laxical_Analyzer();  // Function for detecting keywords and identifiers
            break;
        case 7:
            take_3_characters();  // Function for printing next 3 characters
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
