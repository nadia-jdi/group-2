#include <stdio.h>
#include <stdlib.h>

#define P1_SYMBOL 'X'
#define P2_SYMBOL 'O'

char board[3][3];

void resetBoard();
void drawboard();
int checkwin();

int main() {
    char response;

    do {
        int player = 1;
        int choice, row, column, gameStatus = 0;
        char mark;

        resetBoard();

        while(1) {
            drawboard();

            player = (player % 2) ? 1 : 2;
            mark = (player == 1) ? P1_SYMBOL:P2_SYMBOL;

            printf("Player %d, enter a number: ", player);
            if (scanf("%d", &choice) != 1) {
                while(getchar() != '\n');
                continue;
            }

            row = (choice - 1) / 3;
            column = (choice - 1) % 3;

            if (choice >= 1 && choice <= 9 && board[row][column] != P1_SYMBOL && board[row][column] != P2_SYMBOL) {
                board[row][column] = mark;
            } else {
                printf("Invalid move! Cell occupied or out of bounds.You will lose your turn!");
                player--;
                getchar(); getchar();
                continue;
            }

            gameStatus = checkwin();

            if (gameStatus == 1) {
                drawboard();
                printf("==> Player %d wins!\n", player);
                break;
            } else if (gameStatus == 2) {
                drawboard();
                printf("==> Game draw\n");
                break;
            }
            player++;
        }

        printf("Would you like to play again? (Y/N): ");
        scanf(" %c", &response);

    } while (response == 'Y' || response == 'y');

    return 0;
}

void resetBoard() {
    char startChar = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = startChar++;
        }
    }
}

void drawboard() {
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (%c) - Player 2 (%c)\n\n\n", P1_SYMBOL, P2_SYMBOL);
    for (int i = 0; i < 3; i++) {
        printf("\t %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("\t---|---|---\n");
    }
    printf("\n");
}

int checkwin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;

    int count = 0;
    for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
            if (board[i][j] != P1_SYMBOL && board[i][j] != P2_SYMBOL) count++;
        }
    }
 if (count==0){
        return 2;
    }
    else{
        return 0;
    }
}
