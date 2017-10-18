/*
 * Rewrite the temperature conversion program of Section 1.2 to use a function
 * for conversion.
 * */

#include <stdio.h>

float fahr_to_celsius(float fahr);

int main()
{
    float fahr;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        printf("%3.0f %6.1f\n", fahr, fahr_to_celsius(fahr));
        fahr = fahr + step;
    }
    return 0;
}

float fahr_to_celsius(float fahr)
{
    float celsius;
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    return celsius;
}

