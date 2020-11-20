#include <stdio.h>
#include <time.h>

int lookup[60] = {0};

long int fib(int n)
{
    if (n==0 || n==1){
        return 0;
    }

    else{
        if(lookup[n]!=0){
            return lookup[n];
        }
        else if(lookup[n-1]!=0){
                lookup[n]=lookup[n-1]+lookup[n-2];
                return lookup[n-1]+lookup[n-2];
        }
        else{
            return fib(n-1)+fib(n-2);
        }

    }
    return 0;
}


int main()
{
    lookup[0]=0;
    lookup[1]=1;
    lookup[2]=1;
    // to store execution time of code
    double time_spent = 0.0;

    clock_t begin = clock();
   printf("%ld\n",fib(35));

    clock_t end = clock();

    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time elpased is %f seconds", time_spent);

}