#include <stdio.h>
#include <math.h>
//
//int isPrime(int n);
//
//int main() {
//    int n;
//    printf("Input n: ");
//    scanf("%d", &n);
//
//    for (int i = 0; i <= n; i++) {
//        if (isPrime(i))
//            printf("%d\t", i);
//    }
//
//}
//
//int isPrime(int n) {
//    for (int i = 2; i <= sqrt(n); ++i) {
//        if (n % i == 0)
//            return 0;
//    }
//    return n > 1;
//}

void seive();
int prime[100000];

int main () {
    seive();
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        if(prime[i])
            printf("%d\t", i);
    }
    return 0;
}

void seive() {
    for (int i = 0; i < 100000; ++i)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 0; i < 1000; ++i) {
        if(prime[i]) {
            for (int j = i * i; j < 100000; j += i) {
                prime[j] = 0;
            }
        }
    }
}