/*
* Student ID: 201241037
* Student Name: Tom Coupe
* Email: T.Coupe@student.liverpool.ac.uk
*
* User: sgtcoupe
*
* Problem ID: 1030
* RunID: 26397
* Result: Accepted
*/

#include <stdio.h>

/*
given a decimal, say 0.08.
if n = 2. and i wanted to find the nth value after the decimal place i could do the following:
0.08 x 10^n.
given n = 2. 10^n = 10 x 10 so this happens:
0.08 x 10 = 0.8
0.8 x 10 = 8 (nth value after decimal place.);

With larger length decimals i can use the modulus to return the single value of that decimal place.
*/

int nthDigit(int a, int b, int n);
long mod_pow(long base, long exponent, long modulus);

int main(void) {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    printf("%d", nthDigit(a, b ,n)); 
}
/*this method effectively returns (baseval^nthVal) % mod.
however the nthVal variable is being checked in an if statement by using a bitwise AND operator.
once (nthVal & 1) is equal to one, the result multiplies itself by the baseval. i then use the modulus to divide that and leave a remainder.*/
long mod_pow(long baseval, long nthVal, long mod) {
    long result = 1;
    while (nthVal > 0) {
        if ((nthVal & 1) == 1)
           result = (result * baseval) % mod;
        /*shifting the nthVal by one bit to the right*/     
        nthVal = nthVal >> 1;
        baseval = (baseval * baseval) % mod;
    }
    return result;
}
/*
in this function i create a variable that multiplies value a by the value returned from the mod_pow() function. this is then divided by value b.
 i then times that value by 10 to then use the modulus to divide it by 10 and leave a remainder. this remainder is the nth digit after the decimal place.
*/
int nthDigit(int a, int b, int n) {
    long tmp = (long) n; /*setting n to a long value as mod_pow() takes a long value for n*/
    double tmp2 = ((double) a * mod_pow(10, tmp-1, b) / (double) b);
    return (int) (10 * tmp2) % 10;
}