/*
* Student ID: 201241037
* Student Name: Tom Coupe
* Email: T.Coupe@student.liverpool.ac.uk
*
* User: sgtcoupe
*
* Problem ID: 1025
* RunID: 25382
* Result: Accepted
*/
#include <stdio.h>
/*defining functions*/
int highestCommonFactor(int a, int b);
int lowestCommonMultiple(int a, int b);

int main(void) {
    int num1, num2, hcf, lcm;
    /*
    I take two integer values as input via scanf,
    I then use those input integers and call them in 
    both of my functions.
    */
    scanf("%d %d", &num1, &num2);
    /*assigning the values returned from the functions to variables. i then use printf to output these values.*/
    hcf = highestCommonFactor(num1, num2);
    lcm = lowestCommonMultiple(num1, num2);
    printf("%d %d", hcf, lcm);
    return 0;
}
/*To calculate the hcf of two numbers i used the Euclidean algorithm*/
int highestCommonFactor(int a, int b) {
    if (a == 0) {
        return b;
    } 
    if (b == 0) {
        return a; 
    }
    /*if a == b, return a. this is because if they are both the same value the highest common factor of both will be equal to the values they hold.*/
    if (a == b) {
        return a; 
    }
    if (a > b) {
        /*if a > b. i recall the function however for the two paramaters input, int a is equal to a - b.
        once this function re-runs, b may be greater than a. in that case i recall the function again however int b 
        in the parameters is equal to b-a.
        eventually a == b, at this point the value is returned.*/
        return highestCommonFactor(a-b, b); 
    }
    return highestCommonFactor(a, b-a);
}
/*in this function i again take the two inputs taken via scanf.
i times those values together and then divide that by the value returned from the hcf function.
the value calculated is the lcm that a and b hold.*/
int lowestCommonMultiple(int a, int b) {
    return (a*b)/highestCommonFactor(a, b);  
}