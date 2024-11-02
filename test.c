#include "header.h"
#include <assert.h>
#include <stdio.h>

void run_tests() {
    // tests for every valid outcome
    assert(strcmp(determine_winner("Rock", "Scissors"), "Player1") == 0);
    assert(strcmp(determine_winner("Paper", "Rock"), "Player1") == 0);
    assert(strcmp(determine_winner("Scissors", "Paper"), "Player1") == 0);
    assert(strcmp(determine_winner("Scissors", "Rock"), "Player2") == 0);
    assert(strcmp(determine_winner("Rock", "Paper"), "Player2") == 0);
    assert(strcmp(determine_winner("Paper", "Scissors"), "Player2") == 0);

    // tests for all draws
    assert(strcmp(determine_winner("Rock", "Rock"), "Draw") == 0);
    assert(strcmp(determine_winner("Paper", "Paper"), "Draw") == 0);
    assert(strcmp(determine_winner("Scissors", "Scissors"), "Draw") == 0);

    // tests for every invalid input
    assert(strcmp(determine_winner("Rock", "Lizard"), "Invalid") == 0);
    assert(strcmp(determine_winner("Alien", "Paper"), "Invalid") == 0);
    assert(strcmp(determine_winner("Rock", "Rocky"), "Invalid") == 0);
    assert(strcmp(determine_winner("Rocky", "Rocky"), "Invalid") == 0);

    printf("All tests passed!\n");
}

int main() {
    run_tests();
    return 0;
}

