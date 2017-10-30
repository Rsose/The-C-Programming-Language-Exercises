/*
 * Write a program to determine the ranges of char , short , int , and long
 * variables, both signed and unsigned , by printing appropriate values from standard headers
 * and by direct computation. Harder if you compute them: determine the ranges of the various
 * floating-point types.
 * */

#include <stdio.h>
#include <limits.h>

int main() {
    printf("Unsigned Char min to min: %d --> %d\n", CHAR_MIN ,UCHAR_MAX);
    printf("Unsigned Short min to max: 0 --> %d\n", USHRT_MAX);
    printf("Unsigned Int min to max: 0 --> %d\n", UINT_MAX);
    printf("Unsigned Long min to max: 0 --> %ld\n", ULONG_MAX);
    printf("Signed Char min to max: %d --> %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Signed Short min to max: %d --> %d\n", SHRT_MIN, SHRT_MAX);
    printf("Signed Int min to max: %d --> %d\n", INT_MIN, INT_MAX);
    printf("Signed Long min to max: %ld --> %ld\n", LONG_MIN, LONG_MAX);
    return 0;
}
