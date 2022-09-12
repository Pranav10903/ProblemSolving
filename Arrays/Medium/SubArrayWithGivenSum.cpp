#include<iostream>

using namespace std;

void subArrWithSumKOptimal(int arr[], int n, int k) {
  int start = 0, end = -1, sum = 0;
  while (start < n) {
    while ((end + 1 < n) && (sum + arr[end + 1] <= k))
      sum += arr[++end];

    if (sum == k) {
      for (int p = start; p <= end; p++)
        cout << arr[p] << " ";
      cout << "\n";
    }
    sum -= arr[start];
    start++;
  }

}
int main() {

  int arr[] = {1, 9, 3, 7};
  int n = sizeof(arr) / sizeof(arr[0]), k = 10;
  cout << "Subarray with given sum is: " << endl;
  subArrWithSumKOptimal(arr, n, k);

  return 0;
}
