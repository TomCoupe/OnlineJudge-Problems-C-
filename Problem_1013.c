/*
* Student ID: 201241037
* Student Name: Tom Coupe
* Email: T.Coupe@student.liverpool.ac.uk
*
* User: sgtcoupe
*
* Problem ID: 1013
* RunID: 27234
* Result: Accepted
*/
#include <stdio.h>

int main(void) {
    int arr[1000];
    int counter1 = 0, counter2 = 0, counter3 = 0, i = 0; 
    /*
    using a while loop to take multiple inputs. i store each input in the int array.
    once 0 is input, it represents the end of the input so i break from the loop.
    */
    while(1) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) {
            break;
        }
        i++;
    }
    /*
    looping through each value stored in the array and comparing it with the other values by
    using a series of if statements. If a condition is met i increase the associated counter variable by one.
    once all values have been looped i output the counter variable scores using the printf statement.
    */
    for(int j = 0; j <= i; j++) {
        if(arr[j] >= 85) {
            counter1++;
        }
        else if(arr[j] >= 60 && arr[j] <= 84) {
            counter2++;
        }
        else if(arr[j] < 60 && arr[j] != 0) {
            counter3++;
        }
    }
    printf(">=85:%d\n", counter1);
    printf("60-84:%d\n", counter2);
    printf("<60:%d\n", counter3);
}