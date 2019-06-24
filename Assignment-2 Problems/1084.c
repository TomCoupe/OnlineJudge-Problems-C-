#include <stdio.h>
#define EMPTY '.'
#define VEHICLE '1'
/*
* Student ID: 201241037
* Student Name: Tom Coupe
* Email: T.Coupe@student.liverpool.ac.uk
*
* User: sgtcoupe
*
* Problem ID: 1084
* RunID: 40063
* Result: Failed
*/
int main(void) {
    int numOfRows, numOfCols, timesteps, rowIndex, arrivalTime, counter = 0;
    scanf("%d %d %d", &numOfRows, &numOfCols, &timesteps);
    char highway[numOfRows][numOfCols];
    char tmp[timesteps][numOfRows];

    /*
    Starting by setting the array of rows x columns to all empty cells.
    */
    for(int i = 0; i < numOfRows; i++) {
        for(int j = 0; j < numOfCols; j++) {
            highway[i][j] == EMPTY;
        }
    }

    //printing array
    /*for(int i = 0; i < numOfCols; i++) {
        printf("\n");
        for(int k = 0; k < numOfRows; k++) {
            printf("%c",highway[k][i]);
        }

    }*/
    /*
    taking input from user and updating the tmp[][] char array with the positions of vehicles and empty spaces.
    This will take input until EOF is input by the user
    */
    while(scanf("%d %d", &arrivalTime, &rowIndex) != EOF) {
        for(int i = 0; i < timesteps; i++) {
            if(arrivalTime == i) {
                tmp[rowIndex][i] == VEHICLE;
            }
            else {
                tmp[rowIndex][i] == EMPTY;
            }
        }
    }
    /*
    attempting to print an array of the selected time steps and rows of the input
    this is not printing correctly however.
    */
    for(int i = 0; i < timesteps; i++) {
        printf("\n");
        for(int k = 0; k < numOfRows; k++) {
            printf("%c",tmp[i][k]);
        }
    }
}