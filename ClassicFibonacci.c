#include <stdio.h>
#include <time.h>

long int fib(int n)
{
    if (n==0 || n==1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}

int main() {
    double time_spent = 0.0;

    clock_t begin = clock();
    printf("%ld\n",fib(35));

    clock_t end = clock();

    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time elpased is %f seconds", time_spent);
}
