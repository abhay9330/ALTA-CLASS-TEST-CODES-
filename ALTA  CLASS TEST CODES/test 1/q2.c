// Problem Statement
// You are given a positive integer N. Your task is to reverse the digits of the given number and print the reversed number.
// Input
// The input consists of a single positive integer N.
// Output
// Print the number obtained by reversing the digits of N.
// Constraints
// - 1 ≤ N ≤ 10⁹


#include <stdio.h>
int main()
{
   int n, digit, reverse = 0;
  scanf("%d", &n);
    while (n > 0)
    {
       digit = n % 10;
      reverse = reverse * 10 + digit;
      n = n / 10;
    }
    printf("%d", reverse);
    return 0;
}