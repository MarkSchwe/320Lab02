#include "deSelsort.h"
#include "BinarySearch.h"
#include <iostream>

using namespace std;

void print(int arr[], int size){
for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
}
cout << endl;
}

int main(){
    srand(time(0));
    deSelsort SelSort;
    BinarySearch Bsearch;
    int size = 10000;
    int arr[size];
    for(int i = 0; i < size; i++){
    arr[i] = (rand() % 100000);
    }
    print(arr,size);
    SelSort.selectionSort(arr,size-1);
    print(arr,size);
    int success = 0;
    int fail = 0;
    for(int i = 0; i < 10000; i++){
        int search = (rand() % 100000);
        int result = Bsearch.Bsearch(arr,0,size+1,search);
    if(result == search){
        success++;
    } else {
        fail++;
    }
    }
    double fail2 = (double) fail;
    double success2 = (double) success;
    double average = (fail/10000.0-success);
    cout << average << endl;
    return 0;
}
