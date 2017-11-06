/*
 * Our binary search makes two tests inside the loop, when one would suffice (at
 * the price of more tests outside.) Write a version with only one test inside the loop and
 * measure the difference in run-time.
 * */

#include <stdio.h>

int binsearch(int x, int v[], int n);


int main()
{
    int x = 10;
    int v[] = {1, 2, 3, 4, 10, 11, 15};
    int n = 7;

    printf("%d\n", binsearch(x, v, n));
    return 0;
}


int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while(low <= high && x != v[mid])
    {
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }
    if (x == v[mid])
        return mid;
    else
        return -1;

}
