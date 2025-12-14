//bahut baddaa program hai bhyi, kai saare chhote programs ka sangrah hai ye, isko ho ske to file se skip krna




#include <stdio.h>
#include <math.h>

//declarations of functions
long long factorial(int n);
int isPrime(int n);
int isArmstrong(int n);
void fibonacci(int n);
int sumOfDigits(int n);
int reverseNumber(int n);
void binaryEquivalent(int n);
int sumOfFirstNNatural(int n);
void primeFactorsNonRecursive(int n);
void primeFactorsRecursive(int n, int i);

// fact recursion
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// check if prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

// check if armstrong
int isArmstrong(int n) {
    int temp = n, digits = 0;
    while (temp) {
        digits++;
        temp /= 10;
    }
    temp = n;
    int sum = 0;
    while (temp) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == n;
}

// fibonacci series
void fibonacci(int n) {
    long long a = 0, b = 1, c;
    printf("First %d Fibonacci numbers:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%lld ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

// sum of digits
int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

// reverse num
int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

// binary equivalent
void binaryEquivalent(int n) {
    int binary[32];
    int i = 0;
    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

// sum of first N natural numbers
int sumOfFirstNNatural(int n) {
    return n * (n + 1) / 2;
}

//prime factors non-recursive
void primeFactorsNonRecursive(int n) {
    printf("Prime factors (Non-Recursive): ");
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
}

// prime factors recursive
void primeFactorsRecursive(int n, int i) {
    if (n == 1) return;
    if (n % i == 0) {
        printf("%d ", i);
        primeFactorsRecursive(n / i, i);
    } else {
        primeFactorsRecursive(n, i + 1);
    }
}

//main
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nResults for %d : \n", num);
    printf("Factorial: %lld\n", factorial(num));
    printf("Prime: %s\n", isPrime(num) ? "Yes" : "No");
    printf("Armstrong: %s\n", isArmstrong(num) ? "Yes" : "No");
    printf("Sum of digits: %d\n", sumOfDigits(num));
    printf("Reversed number: %d\n", reverseNumber(num));
    binaryEquivalent(num);

    fibonacci(25);

    printf("\nSum of first 25 natural numbers: %d\n", sumOfFirstNNatural(25));

    primeFactorsNonRecursive(num);
    printf("Prime factors (Recursive): ");
    primeFactorsRecursive(num, 2);
    printf("\n");

    return 0;
}
