#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Constants for ranks and suits
#define NUM_RANKS 13  // Ranks: 2–10, J, Q, K, A (represented as 0–12)
#define NUM_SUITS 4   // Suits: clubs, diamonds, hearts, spades (0–3)
#define NUM_CARDS 5   // Number of cards in a hand

// Global variables used to analyze the hand
int num_in_rank[NUM_RANKS]; // Counts how many times each rank appears
int num_in_suit[NUM_SUITS]; // Counts how many times each suit appears

// Flags that indicate the type of hand
bool straight, flush, four, three;
int pairs; // Number of pairs found (0, 1, or 2)

// Function declarations
void read_cards(void);      // Reads a hand of 5 cards from the user
void analyze_hand(void);    // Analyzes the hand to identify hand type
void print_result(void);    // Prints the result (e.g. "Flush", "Straight", etc.)

int main()
{
    for (;;) { // Infinite loop to process multiple hands
        read_cards();      // Read the user's 5-card hand
        analyze_hand();    // Analyze what kind of hand it is
        print_result();    // Output the result
    }
    return 0; // Not reached (the program only exits if user inputs '0')
}

/*********************************************************
 * read_cards:
 * Reads 5 cards from the user into num_in_rank and num_in_suit.
 * Also checks for invalid or duplicate cards.
 *********************************************************/
void read_cards(void) {
    bool card_exists[NUM_RANKS][NUM_SUITS]; // Tracks which specific cards have been entered
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    // Initialize card tracking arrays
    for (rank = 0; rank < NUM_RANKS; rank++) {
        num_in_rank[rank] = 0;
        for (suit = 0; suit < NUM_SUITS; suit++) {
            card_exists[rank][suit] = false;
        }
    }

    for (suit = 0; suit < NUM_SUITS; suit++) {
        num_in_suit[suit] = 0;
    }

    // Read cards one by one
    while (cards_read < NUM_CARDS) {
        bad_card = false;

        printf("Enter a card: ");

        // Read rank character
        rank_ch = getchar();
        switch (rank_ch) {
            case '0':               exit(EXIT_SUCCESS); // Exit program
            case '2':               rank = 0; break;
            case '3':               rank = 1; break;
            case '4':               rank = 2; break;
            case '5':               rank = 3; break;
            case '6':               rank = 4; break;
            case '7':               rank = 5; break;
            case '8':               rank = 6; break;
            case '9':               rank = 7; break;
            case 't': case 'T':     rank = 8; break;
            case 'j': case 'J':     rank = 9; break;
            case 'q': case 'Q':     rank = 10; break;
            case 'k': case 'K':     rank = 11; break;
            case 'a': case 'A':     rank = 12; break;
            default:                bad_card = true; break;
        }

        // Read suit character
        suit_ch = getchar();
        switch (suit_ch) {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true; break;
        }

        // Read and discard extra characters, check for invalid input
        while ((ch = getchar()) != '\n') {
            if (ch != ' ') bad_card = true;
        }

        // Validate and record the card
        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (card_exists[rank][suit])
            printf("Duplicate card; ignored.\n");
        else {
            num_in_rank[rank]++;        // e.g., num_in_rank[6]++ for '8'
            num_in_suit[suit]++;        // e.g., num_in_suit[3]++ for 's'
            card_exists[rank][suit] = true;
            cards_read++;
        }
    }
}

/*********************************************************
 * analyze_hand:
 * Analyzes the hand to detect flush, straight,
 * four-of-a-kind, three-of-a-kind, and pairs.
 *********************************************************/
void analyze_hand(void) {
    int num_consec = 0; // Count of consecutive ranks
    int rank, suit;

    // Reset flags
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    // Check for flush (all cards same suit)
    for (suit = 0; suit < NUM_SUITS; suit++) {
        if (num_in_suit[suit] == NUM_CARDS)
            flush = true;
    }

    // Check for straight (five consecutive ranks)
    rank = 0;
    while (rank < NUM_RANKS && num_in_rank[rank] == 0)
        rank++; // Skip leading zeroes (ranks not present)

    // Count consecutive ranks
    for (; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++)
        num_consec++;

    if (num_consec == NUM_CARDS) {
        straight = true;
        return; // No need to check further
    }

    // Check for multiples: four-of-a-kind, three-of-a-kind, pairs
    for (rank = 0; rank < NUM_RANKS; rank++) {
        if (num_in_rank[rank] == 4) four = true;
        if (num_in_rank[rank] == 3) three = true;
        if (num_in_rank[rank] == 2) pairs++;
    }
}

/*********************************************************
 * print_result:
 * Prints the result of the analysis (e.g. "Flush", "Pair")
 *********************************************************/
void print_result(void) {
    if (straight && flush)                   printf("Straight flush");
    else if (four)                           printf("Four of a kind");
    else if (three && pairs == 1)            printf("Full house");
    else if (flush)                          printf("Flush");
    else if (straight)                       printf("Straight");
    else if (three)                          printf("Three of a kind");
    else if (pairs == 2)                     printf("Two pairs");
    else if (pairs == 1)                     printf("Pair");
    else                                     printf("High card");
    printf("\n\n");
}
