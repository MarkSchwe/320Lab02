#include <iostream>

using namespace std;

void printArr(int arr[]){
for(int i = 0; i < 8; i++){
    cout << arr[i] << " ";
}
cout << endl;
}

void valswap(int &a, int &b){
int swap = a;
a = b;
b = swap;
}

class deSelsort{
    public: 
    void selectionSort(int arr[], int size);
};
void deSelsort::selectionSort(int arr[], int size){
int index = 0;
while(index <= size/2){
int highest = size-index;
int lowest = index;
int hiVal = arr[highest];
int loVal = arr[lowest];
for(int i = index; i < size-index; i++){
if(arr[i] > hiVal){
hiVal = arr[i];
highest = i;
}
if(arr[i] < loVal){
loVal = arr[i];
lowest = i;
}
}
valswap(arr[size-index],arr[highest]);
valswap(arr[index], arr[lowest]);
index++;
}
}
