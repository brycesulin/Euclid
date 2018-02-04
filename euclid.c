/*
 * File: euclid.c
 * Author: Bryce Sulin
 *
 * This program calculates the greatest common denominator from two inputted integers.
 */

#include <stdio.h>

int gcd(int a, int b);

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    int greatestCommonDiv = gcd(a, b);

    printf("The GCD of %d and %d is %d\n", a, b, greatestCommonDiv);
    getchar();
    return 0;
}

/* Function that returns the GCD of two integers */
int gcd(int a, int b) {
    int r;

    if((a == 0) || (b == 0))
        return 0;
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    do
    {
        r = a % b;
        if(r == 0) return b;
        a = b;
        b = r;
    }
    while(1);

    return b;
}