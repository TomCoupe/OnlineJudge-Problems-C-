#include <stdio.h>
#define DEAD '.';
#define LIVE 'X';
/*
* Student ID: 201241037
* Student Name: Tom Coupe
* Email: T.Coupe@student.liverpool.ac.uk
*
* User: sgtcoupe
*
* Problem ID: 1081
* RunID: 38687
* Result: Compile Error
*/


/*void updateGrid(char grid[row][col], int row, int col, int steps);*/
/*void checkNeighbors(char grid[row][col], int row, int col);*/

/*
Had problems with declaring these functions above the main, i previously tried to declare them as seen above however it caused many problems
due to row and col not being defined. below i tried to use a double pointer to declare my 2d array, this reduced my errors however it did not fix the problem.
*/
void updateGrid(char **grid, size_t rows, size_t col, size_t steps);
void checkNeighbours(char **grid, size_t row, size_t col);

int main(void) {
    int rows, columns, steps;
    scanf("%d %d %d", &rows, &columns, &steps);
    char grid[rows][columns];
    char tempString[columns];

    for(int i = 0; i < rows; i++) {
        scanf("%s", &tempString);
        for(int j = 0; j < columns; j++) {
            grid[i][j] = tempString[j];
        }
    }
    for(int j = 0; j < rows; j++) {
        for(int k = 0; k < columns; k++) {
            updateGrid(grid, j, k, steps);
        }
    }   
}

/*
This function takes my grid array and two int values as the parameters. i first check wether the cell is dead or alive. once i have determined the state of
the cell i can then look at which four of the rules apply to that cell.
*/
void checkNeighbours(char **grid, int row, int col) {
/*
if the cell is dead i am only checking the surrounding 8 values to see if there are exactly three live cells, 
to do this i use a counter variable that is increased everytime a live cell is found, if counter is less than or 
greater than three the cell remains dead however if the counter = 3, the cell is alive.
*/
    if(grid[row][col] == DEAD) {
        int counter = 0;
        for(int i = row - 1; i <= row + 1; i++) {/*row*/
            for(int j = col - 1; j <= col + 1; j++) { /*col*/
                if(grid[i][j] == LIVE) {
                    counter++;
                }
            }
        }
        if(counter == 3) {
            grid[row][col] == LIVE;
        }
        else {
            grid[row][col] == DEAD;
        }
    }
/*
if the cell is alive there are three rules that i need to check for. i again loop through all of the 8 surrounding values 
and use i counter variable that increases each time there is a live cell. if the counter variable is less than two, then the cell will die.
if the counter varibale is 2 or 3 it will remain alive. finally, if the couner is greater than 3 the cell will die. 
*/    
    else if(grid[row][col] == LIVE) {
        int counter1 = 0;
        for(int i = row - 1; i < row + 1; i++) {/*row*/
            for(int j = col - 1; j <= col + 1; j++) { /*col*/
                if(grid[i][j] == LIVE) {
                    counter1++;
                }
            }
        }
        if(counter1 < 2) {
            grid[row][col] == DEAD;
        }
        else if(counter1 == 2 || counter1 == 3) {
            grid[row][col] == LIVE;
        }
        else if(counter1 > 3) {
            grid[row][col] == DEAD;
        }
    }
}
/*
This function is supposed to take my grid[][] and call my checkNeighbours function. once the function is complete, this fucntion
is supposed to output the updated grid. This function is in a while loop that loops until the amount of steps input by the
user is reached, however again i had problems when delcaring the functions which made my program not work correctly.
*/
void updateGrid(char **grid, int row, int col, int steps) {
    int counter = 0;
    while(counter <= steps) {
        for(int j = 0; j < row; j++) {
            for(int k = 0; k < col; k++) {
                checkNeighbours(grid, j, k);
            }
        }
        for(int j = 0; j < row; j++) {
            printf("\n");
            for(int k = 0; k < col; k++) {
                printf("%c", grid[j][k]);
            }
        }
        counter++;
    }

}