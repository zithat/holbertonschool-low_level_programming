#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Int N - Used for a random number */

/* Using if to know if the ramdon number is true or false */

int main() {
    int n;
    
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    if (n > 0) {
        printf("%d is positive\n", n);
    }
    
    if (n < 0) {
        printf("%d is negative\n", n);
    }
    
    if (n == 0) {
        printf("%d is zero\n", n);
    }
    
    return 0;
}
