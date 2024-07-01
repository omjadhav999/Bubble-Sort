#include<iostream>
using namespace std;

void bubblesort(int arr[], int size){
    for(int i=1; i<size; i++){      // for(int i=0; i<size-1; i++)
    bool swapped = false;
        for(int j=0; j<size-i; j++){  // for(int j=0; j<size-i-1; j++)
            if(arr[j] > arr[j+1]){ 
                swap(arr[j], arr[j+1]);
                swapped = true; 
            }
        }
        if(swapped == false){
            break; // already sorted array therefore not a single swapping occured.
        }
    }
}

void printarray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    bubblesort(arr, 7);

    cout << "Sorted array: ";
    printarray(arr, 7);

    return 0;
}

/*
The space complexity of bubble sort is O(1).
The time complexity of bubble sort is O(n^2).
The time complexity will be O(n) in best case and O(n^2) in worst case.
*/