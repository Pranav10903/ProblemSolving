#include<iostream>

#include<bits/stdc++.h>

using namespace std;

int longestSubArrWithSumK_BF(int arr[], int n, int k) {
  int maxLength = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += arr[j];
      if (sum == k)
        maxLength = max(maxLength, (j - i + 1));
    }

  }
  return maxLength;
}

int main() {

  int arr[] = {7,1,6,0};
  int n = sizeof(arr) / sizeof(arr[0]), k = 7;

  cout << "Length of the longest subarray with sum K is " << 
  longestSubArrWithSumK_BF(arr, n, k);

  return 0;
}
