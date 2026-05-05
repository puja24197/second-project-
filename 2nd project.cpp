#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n-1; i++) {
  int minIndex = i;
        for (int j = i+1; j  < n; j++) {
        if (arr[j] < arr[minIndex]){
        minIndex = j;
            }
        }
        int temp = arr[minIndex];
         arr[minIndex] = arr[i];
          arr[i] = temp;
 }
}
int main() {
int arr[] = {18, 68, 48, 8, 88, 28};
    int n = sizeof(arr)/sizeof(arr[0]);
     cout << "Original array (Selection Sort): ";
       for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    selectionSort(arr, n);
      cout << "Sorted array (Selection Sort): ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl << endl;
    return 0;
}
