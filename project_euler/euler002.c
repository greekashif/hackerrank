#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned long ulong;

ulong fib(ulong a, ulong b, ulong * odd_z, ulong n) {
    ulong c=a+b;
    if((c+b)>= n) { return 0; }
    if(a%2 == 0) { *odd_z+=(b+c); }
    return fib(b,c,odd_z, n);
}

int main() {

    int T;
    scanf("%d",&T);
    ulong odd_z = 0;
    ulong *sum = &odd_z;
       
    while(T--) {
        ulong N;
        scanf("%lu",&N);
        fib(0,1,&odd_z, N); 
        printf("%lu\n",*sum);
        *sum=0;
    }
    return 0;
}
