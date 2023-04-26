#include <stdio.h>

int linear_search(int arr[], int n, int key) {
  // loop through the array elements
  for (int i = 0; i < n; i++) {
    // if the current element is equal to the key, return its index
    if (arr[i] == key) {
      return i;
    }
  }
  // if the key is not found, return -1
  return -1;
}

int main() {
  int arr[] = {4, 1, 6, 2, 8, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 6;
  int index = linear_search(arr, n, key);
  if (index == -1) {
    printf("Element not found\n");
  } else {
    printf("Element found at index %d\n", index);
  }
  return 0;
}