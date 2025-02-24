#include <stdio.h>
#include <math.h>

int main() {
    long long n = 6, m = 6, a = 4;
    
    long long flagstones_n = (n + a - 1) / a;
    long long flagstones_m = (m + a - 1) / a;
    
    long long total_flagstones = flagstones_n * flagstones_m;
    
    printf("%lld\n", total_flagstones);
    
    return 0;
}