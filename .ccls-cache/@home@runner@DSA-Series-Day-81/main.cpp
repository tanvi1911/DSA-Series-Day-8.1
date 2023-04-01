#include <climits>
#include <iostream>
using namespace std;

// int getMin(int num[], int n) {
//   int mini = INT_MAX;

//   for (int i = 0; i < n; i++) {

//     mini = min(mini, num[i]);
//     // if (num[i] < min){
//     //   min = num[i];
//     // }
//   }
//   return mini;
// }

// int getMax(int num[], int n) {
//   int max = INT_MIN;

//   for (int i = 0; i < n; i++) {
//     if (num[i] > max) {
//       max = num[i];
//     }
//   }
//   return max;
// }

// int arraySum(int arr[], int n) {
//   int sum = 0;
//   for (int i = 0; i < n; i++) {
//     sum = sum + arr[i];
//     arr[i]++;
//   }
//   return sum;
// }

// int main() {

//   int size;
//   cout << "Enter the size of the array: ";
//   cin >> size;

//   int arr[100];
//   cout << "Enter the values: ";
//   for (int i = 0; i < size; i++) {
//     cin >> arr[i];
//   }

//   cout << "The grestest value in the array is: " << getMax(arr, size) <<
//   endl; cout << "The least value in the array is: " << getMin(arr, size) <<
//   endl; cout << "The sum of all elements in the array is: " << arraySum(arr,
//   size) << endl;

//   return 0;
// }

// LINEAR SEARCH

bool search(int arr[], int size, int key) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      return 1;
    }
  }
  return 0;
}

void reverseArray(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  
  while(start <= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
    }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main() {

  int arr[10] = {3, -12, 7, 16, 34, 73, 10, -5, 34, 6};
  // int n;
  // cout << "Enter the key you want to search: ";
  // cin >> n;

  // bool found = search(arr, 10, n);

  // if (found) {
  //   cout << "The Key is present in the array.";
  // } else {
  //   cout << "The key is not present.";
  // }

  printArray(arr, 10);
  reverseArray(arr, 10);
  cout << "\nAfter Reversing:\n";
  printArray(arr, 10);
  return 0;
}
