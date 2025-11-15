#include <stdio.h>

#include "headers\article_counter.h"
#include "headers\tokenizing.h"
#include "headers\Line_counting.h"
#include "headers\Identifi_comment.h"
#include "headers\rev_str.h"
#include "headers\count_vcd.h"
#include "headers\remove_special_character.h"
#include "headers\marge_string.h"
#include "headers\identifiers.h"
#include "headers\remove_white_space.h"
#include "headers\frequency_of_the_word.h"
#include "headers\take_3_characters.h"
#include "headers\space_counter.h"
#include "headers\char_counter.h"

void display_string_operations() {
    printf("\n--------- String Operations ---------\n\n");
    printf("1.\tReverse a string\n");
    printf("2.\tTokenize a string\n");
    printf("3.\tConcatenate multiple strings\n");
    printf("4.\tRemove white spaces from input\n");
    printf("5.\tRemove special characters from input\n");
}

void display_text_analysis() {
    printf("\n--------- Text Analysis ---------\n\n");
    printf("6.\tCount vowels, consonants, and digits\n");
    printf("7.\tCount frequency of articles (a, an, the)\n");
    printf("8.\tCount the frequency of a word\n");
    printf("9.\tCount non-space characters in input\n");
    printf("10.\tCount spaces in input\n");
}

void display_code_analysis() {
    printf("\n--------- Code Analysis ---------\n\n");
    printf("11.\tDetect comments in code\n");
    printf("12.\tCheck if identifiers are valid or not\n");
    printf("13.\tPrint next 3 characters after input\n");
}

void display_misc_operations() {
    printf("\n--------- Miscellaneous ---------\n\n");
    printf("14.\tCount lines in input\n");
}

int main() {
    int choice = 0;  

    while (1) {
        
        display_string_operations();
        display_text_analysis();
        display_code_analysis();
        display_misc_operations();

        printf("\nEnter your choice (0 to exit): ");
        scanf("%d", &choice);

        /*if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n');  // Clear the input buffer
            continue;  // Prompt the user again
        }
            */
        fflush(stdin);


        if (choice == 0) {
            printf("Exiting the program.\n");
            break;  
        }

        switch (choice) {
            case 1: rev_str(); break;
            case 2: tokenizing(); break;
            case 3: marge_string(); break;
            case 4: remove_white_space(); break;
            case 5: remove_special_character(); break;
            case 6: count_vcd(); break;
            case 7: article(); break;
            case 8: frequency_of_the_word(); break;
            case 9: char_counter(); break;
            case 10: space_counter(); break;
            case 11: identifi_comment(); break;
            case 12: identifiers(); break;
            case 13: take_3_characters(); break;
            case 14: line_counting(); break;
            default: printf("Invalid choice! Please try again.\n"); break;
        }
    }

    return 0;
}
