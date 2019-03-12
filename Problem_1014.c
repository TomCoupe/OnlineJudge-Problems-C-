/*
* Student ID: 201241037
* Student Name: Thomas Coupe
* Email: T.Coupe@student.liverpool.ac.uk
*
* User: sgtcoupe
*
* Problem ID: 1014
* RunID: 25377
* Result: Accepted
*/
#include <stdio.h>
#define PI 3.14

float getArea(int a);
float getCircumference(int a);

int main(void) {
    int rad1, rad2, tmp , counter;
    float sumofareas, sumofcircumferences;
    scanf("%d %d", &rad1, &rad2);
    /*ensuring rad1 is less than rad2*/
    if(rad1 > rad2) {
        tmp = rad2;
        rad2 = rad1;
        rad1 = tmp;
    }
    /*
    setting counter to the value of rad1. this loop loops from rad1 to every value up to rad2
    inside the loop im getting the area and circumference for each counter value by calling my getArea() and
    getCircumference. i then add the value returned the variables inside the loop. once this loop is done, the sum of the areas and circumference
    of all counter values is output.
    */
    for(counter = rad1; counter <= rad2; counter++) {
        sumofareas += getArea(counter);
        sumofcircumferences += getCircumference(counter);
    }
    printf("%.3f\n%.3f", sumofareas, sumofcircumferences);
}
/*
area = PI*r^2
*/
float getArea(int a) {
    float area = PI * a * a;
    return area;
}
/*
circumference = 2 x PI * r
*/
float getCircumference(int a) {
    float circ = 2 * PI * a;
    return circ;
}
