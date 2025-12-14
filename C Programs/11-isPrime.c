#include <stdio.h>

int main() {
    int n, i, isPrime = 1; // assume number is prime

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    //for(i=2; i<n; i++) --- IGNORE ---
    //for(i=2; i<=n/2; i++) --- IGNORE ---
    //upto n too long
    //upto n/2 still long, but better than n, works because no factor will be greater than n/2 except n itself
    //optimal is sqrt(n), because if n = a*b, then at least one of a or b must be <= sqrt(n)
    for (i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
