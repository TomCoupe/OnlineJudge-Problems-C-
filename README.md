#***Problem 1013***

**Title:** Record marks

**Description**
You are in charge of recording marks for a group of students. Input a list of marks. Input ends with 0 (0 itself
is not someone's mark). Output the number of students who scored 1) greater than or equal to 85; 2) between
60 and 84; 3) strictly less than 60.
Make sure you use good coding standards: i.e., create separate functions for processing the input and writing
the output, and be consistent in the way you name variables (also see the “COMP 281 Detailed Marking
Guidelines”).

**Sample Input**

88 71 68 70 59 81 91 42 66 77 83 0

**Sample Output**

>=85:2
60-84:7
<60:2

**HINT**
Remember that there are different ways of obtaining input. For this assignment "scanf" might be convenient,
but make sure to use the correct syntax (it requires a 'pointer' as a second argument.)

#***Problem 1014***

**Title:** Area and circumference of circles

**Description**

In this exercise you have to compute the area and circumference of a series of circles and output their sum.
Specifically, the program will take two radius of two circles as input (r1 <= r2, both integers) and will output
the sum of the areas and the circumferences of all circles starting with r1 and increasing at each step the radius
by '1' until radius r2 has been reached. As an example, suppose 'r2-r1 = 2' then the program has to compute
the sum of the areas and circumferences of three circles with radii r1, r1+1,r2.
Remember that the area of a circle equals Pi*r^2 and the circumference equals 2Pi*r.

Set Pi to 3.14

**Input**
Two integers r1 and r2 with r1<=r2.

**Output**
Two floats, sumofareas and sumofcircumferences.
The result should be in 3 digits precision.

**Sample Input**

3 4

**Sample Output**

78.500
43.960


#***Problem 1015***

**Title:** ASCII code

**Description**

Convert integers (ASCII codes) to characters.

**Input**

A list of positive integers separated by whitespaces (spaces, newlines, TABs). The input ends with EOF.

**Output**

A list of characters. (Do not add end-of-line at the end of the output.)

**Sample Input**

72 101 108 108 111 44
32 119 111 114 108 100 33

**Sample Output**

Hello, world!

**HINT**

H's ASCII code is 72. Blank space's ASCII code is 32.


#***Problem 1025***

**Title:** Largest common factor and smallest common multiple

**Description**

Input two positive integers. Compute their largest common factor and smallest common multiple.

**Sample Input**

2 3

**Sample Output**

1 6


#***Problem 1030***

**Title:** Precise division

**Description**

8/13=0.615384615384615384615384...
For 8/13, the 5-th digit after the decimal point is 8.
Given three positive integers a, b, and n (all at most 60000), you are asked to compute a/b and print out the nth digit after the decimal point.

**Input**

a b n

**Output**

The n-th digit after the decimal point of a/b.

**Sample Input**

8 13 5

**Sample Output**

8

