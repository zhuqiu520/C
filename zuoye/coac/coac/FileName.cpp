#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 10
#define HEIGHT 10
#define NUM_MINES 10

// ”Œœ∑∞Â
char board[HEIGHT][WIDTH];
// œ‘ æ∞Â
char displayBoard[HEIGHT][WIDTH];

void initializeBoards() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            board[i][j] = '0';
            displayBoard[i][j] = '*';
        }
    }
}

void placeMines() {
    srand(time(NULL));
    int minesPlaced = 0;
    while (minesPlaced < NUM_MINES) {
        int row = rand() % HEIGHT;
        int col = rand() % WIDTH;
        if (board[row][col] == '0') {
            board[row][col] = 'X';
            minesPlaced++;
        }
    }
}

void calculateNumbers() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (board[i][j] == 'X') continue;

            int mineCount = 0;
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    int ni = i + di;
                    int nj = j + dj;
                    if (ni >= 0 && ni < HEIGHT && nj >= 0 && nj < WIDTH && board[ni][nj] == 'X') {
                        mineCount++;
                    }
                }
            }
            board[i][j] = mineCount + '0';
        }
    }
}

void printBoard(char board[HEIGHT][WIDTH]) {
    printf("  ");
    for (int i = 0; i < WIDTH; i++) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        printf("%d ", i);
        for (int j = 0; j < WIDTH; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

int reveal(int row, int col) {
    if (row < 0 || row >= HEIGHT || col < 0 || col >= WIDTH || displayBoard[row][col] != '*') {
        return 0;
    }

    displayBoard[row][col] = board[row][col];

    if (board[row][col] == 'X') {
        return -1; // Hit a mine
    }

    if (board[row][col] == '0') {
        // Reveal surrounding cells
        for (int di = -1; di <= 1; di++) {
            for (int dj = -1; dj <= 1; dj++) {
                reveal(row + di, col + dj);
            }
        }
    }

    return 1;
}

int main() {
    initializeBoards();
    placeMines();
    calculateNumbers();

    int gameOver = 0;
    while (!gameOver) {
        printBoard(displayBoard);

        printf("Enter row and column to reveal: ");
        int row, col;
        scanf("%d %d", &row, &col);

        if (reveal(row, col) == -1) {
            printf("Game Over!\n");
            printBoard(board);
            gameOver = 1;
        }
    }

    return 0;
}