//
// Created by mmm on 2025/10/28.
//
#include <stdio.h>
#include <time.h>
#define num 1000000

int isprime_1(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isprime_2(int n) {
    if (n <= 1 || n == 4) return 0;
    if (n == 2 || n == 3) return 1;
    for (int i = 2; i * i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isprime_3(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i * i < n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int count;
    clock_t start, end;
    double duration;

    // Method 1
    count = 0;
    start = clock();
    for (int j = 1; j <= num; j++) {
        if (isprime_1(j)) count++;
    }
    end = clock();
    duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Method 1: Found %d primes in %.6f seconds\n", count, duration);

    // Method 2
    count = 0;
    start = clock();
    for (int j = 1; j <= num; j++) {
        if (isprime_2(j)) count++;
    }
    end = clock();
    duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Method 2: Found %d primes in %.6f seconds\n", count, duration);

    // Method 3
    count = 0;
    start = clock();
    for (int j = 1; j <= num; j++) {
        if (isprime_3(j)) count++;
    }
    end = clock();
    duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Method 3: Found %d primes in %.6f seconds\n", count, duration);

    return 0;
}
