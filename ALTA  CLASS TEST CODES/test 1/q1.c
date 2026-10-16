

// Problem: Find Minimum and Maximum Number
// Problem Statement
// You are given an integer N representing the number of elements, followed by N integers.
// Your task is to find the smallest (minimum) and largest (maximum) numbers in the given sequence.
// Input
// - The first line contains an integer N, representing the number of elements.
// - The second line contains N space-separated integers.
// Output
// Print the minimum and maximum numbers in the following format:
// Min = X Max = Y
// Here, X is the smallest number and Y is the largest number.
// Constraints
// - 1 ≤ N ≤ 1000
// - -10⁵ ≤ A[i] ≤ 10⁵

#include <stdio.h>
int main() {
int n, i, a, min, max;
    scanf("%d", &n);
    scanf("%d", &a);
    min = max = a;
    for(i = 1; i < n; i++) {
     scanf("%d", &a);
        if(a < min)
         min = a;
        if(a > max)
            max = a;
    }

    printf("Min = %d Max = %d", min, max);
    
}
