#include <stdio.h>
/*
* Student ID: 201241037
* Student Name: Tom Coupe
* Email: T.Coupe@student.liverpool.ac.uk
*
* User: sgtcoupe
*
* Problem ID: 1015
* RunID: 28458
* Result: Accepted
*/

int main(void) {
    int arr[1000];
    int i = 0;
    
    /*using a while loop to take multiple inputs and storitng those inputs in the arr[i]
    this loops until EOF(Ctrl+Z). once EOF the loop stops*/
    while(scanf("%d", &arr[i]) != EOF) {
        i++;
    }
    for(int j = 0; j < i; j++) {
        /*this printf statement takes the int value from the array however it outputs the character value
        of that int, instead of int value. i did this by using %c in the printf*/
        printf("%c", arr[j]);
    }
} 