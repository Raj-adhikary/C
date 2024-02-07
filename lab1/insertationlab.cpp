

#include <iostream>
using namespace std;

void printArray(int array[], int size)
{


  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];//array's 2nd element will be in key varibale
    int j = step - 1;// j is in array 1 number index


    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];//swapping the value
      --j;
    }
    array[j + 1] = key;//next index to check
  }
}
int main() {
    int n;
    cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int size = sizeof(arr) / sizeof(arr[0]);//array size
  insertionSort(arr, size);//here
  cout << "Sorted array in ascending order:\n";//a message for printed array
  printArray(arr, size);//function called to printout the array
}
