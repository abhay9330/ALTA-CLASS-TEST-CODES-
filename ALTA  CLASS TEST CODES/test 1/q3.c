
// Problem Statement
// You are given an array of N integers. Your task is to reverse the order of the elements in the array and print the reversed array.
// Input
// The first line contains an integer N, representing the number of elements in the array.
// The second line contains N space-separated integers.
// Output
// Print the elements of the array in reverse order, separated by spaces.
// Constraints
// - 1 ≤ N ≤ 1000
// - -10⁵ ≤ A[i] ≤ 10⁵



#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i =0 ; i <n ; i++){
        scanf("%d", &arr[i]);
    }
    int rev[n];
    int j = 0;
    for(int i = n-1 ; i>=0 ; i--){
        rev[j++]=arr[i];
    }
    for(int i = 0 ;i<n; i++){
        printf("%d ", rev[i]);
    }
    
}