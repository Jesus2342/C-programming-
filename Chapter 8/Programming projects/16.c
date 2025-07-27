#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>  // For tolower()

#define MAX_LEN 30           // Maximum length of input words
#define ALPHABET_SIZE 26     // Total number of letters in the English alphabet

int main()
{
    // Declare input arrays and initialize to 0
    char first[MAX_LEN] = {0};
    char second[MAX_LEN] = {0};

    // Array to store letter frequency differences
    int letter_count[ALPHABET_SIZE] = {0};

    // Flag to determine if words are anagrams
    bool is_anagram = true;

    // Ask user to enter the first word
    printf("Enter first word: ");
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0';  // Remove trailing newline

    // Ask user to enter the second word
    printf("Enter second word: ");
    fgets(second, sizeof(second), stdin);
    second[strcspn(second, "\n")] = '\0';  // Remove trailing newline

    // Count each letter in the first word
    for (int i = 0; first[i] != '\0'; i++) {
        char c = tolower(first[i]);  // Convert to lowercase
        if (c >= 'a' && c <= 'z') {  // Only count alphabet characters
            letter_count[c - 'a']++; // Map 'a'-'z' to index 0-25
        }
    }

    // Subtract counts using letters from the second word
    for (int i = 0; second[i] != '\0'; i++) {
        char c = tolower(second[i]);  // Convert to lowercase
        if (c >= 'a' && c <= 'z') {   // Only count alphabet characters
            letter_count[c - 'a']--; // Subtract the count
        }
    }

    // If any count is not zero, the words are not anagrams
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (letter_count[i] != 0) {
            is_anagram = false;
            break;
        }
    }

    // Final result
    if (is_anagram) {
        printf("The words are anagrams :)\n");
    } else {
        printf("The words are NOT anagrams.\n");
    }

    return 0;
}
