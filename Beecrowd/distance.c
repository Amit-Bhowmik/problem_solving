<<<<<<< HEAD
/*
Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:

Distance = 

Input
The input file contains two lines of data. The first one contains two double values: x1 y1 and the second one also contains two double values with one digit after the decimal point: x2 y2.

Output
Calculate and print the distance value using the provided formula, with 4 digits after the decimal point
*/

#include <stdio.h>
#include <math.h>
int main ()
{
    float x1, x2, y1, y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    float result = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    float distance = sqrt(result);

    printf("%.4f\n", distance);

    return 0;
=======
/*
Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:

Distance = 

Input
The input file contains two lines of data. The first one contains two double values: x1 y1 and the second one also contains two double values with one digit after the decimal point: x2 y2.

Output
Calculate and print the distance value using the provided formula, with 4 digits after the decimal point
*/

#include <stdio.h>
#include <math.h>
int main ()
{
    float x1, x2, y1, y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    float result = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    float distance = sqrt(result);

    printf("%.4f\n", distance);

    return 0;
>>>>>>> 743ed38 (cf)
}