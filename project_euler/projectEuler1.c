#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

long sum_to_N(long n){ return(n*(n+1))/2;}

int main() {
    
    char buf[20];
    bool firstLine = true;
    size_t num_tests;
    long sum;
    
    while(fgets(buf, sizeof buf, stdin) != NULL) {
        if(firstLine) {
            firstLine=false;
            num_tests = atoi(buf);
            continue;
        }
        
        int t_case=atol(buf);
        long m3 = t_case % 3 == 0 ? (t_case/3)-1 : t_case/3;
        long m5 = t_case % 5 == 0 ? (t_case/5)-1 : t_case/5;
        long m15 = t_case % 15 == 0 ? (t_case/15)-1 : t_case/15;
        
        sum = ((3*sum_to_N(m3))+5*sum_to_N(m5))-(15*sum_to_N(m15));
        fprintf(stdout, "%li\n", sum);
    }
    return 0;
}

