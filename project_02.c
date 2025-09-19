#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;

    srand(time(0));
    computer = (rand() % 3) + 1;

    printf("Rock, Paper, Scissors Game!\n");
    printf("Enter your choice:\n1. Rock\n2. Paper\n3. Scissors\n");
    scanf("%d", &player);

    if (player== 1) {
        printf("You chose Rock\n");
    }
    else if (player == 2) {
        printf("You chose Paper\n");
    }
    else if (player == 3) {
        printf("You chose Scissors\n");
    }
    
    if (computer == 1){
        printf("Computer chose Rock\n");
    }
    else if (computer == 2){
        printf("Computer chose Paper\n");
    }
    else if (computer == 3) {
        printf("Computer chose Scissors\n");
    }

    if (player == computer) {
        printf("It's a draw!\n");
    } else if ((player == 1 && computer == 3) ||
               (player == 2 && computer == 1) ||
               (player == 3 && computer == 2)) {
        printf("You win!\n");
    }
    else {
        printf("Computer wins!\n");
    }

    return 0;
}

