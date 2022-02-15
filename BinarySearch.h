#include <iostream>

using namespace std;

class BinarySearch{
public:
    int Bsearch(int arr[],int start, int end, int search);

};

int BinarySearch::Bsearch(int arr[], int start, int end, int search){
    //cout << search << endl;
//cout << arr[start] << " " << arr[end] << endl;
int middle = (end-1 + start)/2;
//cout << arr[middle] << endl;
if((start == end+1) || (start+1 == end)){
    if(arr[start] == search){
        cout << "Item found" << endl;
        return arr[start];
    }
    if(arr[end] == search){
        cout << "Item found" << endl;
        return arr[end];
    }
    if(arr[start+1] == search){
        cout << "Item found" << endl;
        return arr[start];
    }
    if(arr[end-1] == search){
        cout << "Item found" << endl;
        return arr[end];
    }
    if(arr[end] != search && arr[start] != search){
        cout << "Item not found" << endl;
        return arr[middle];
    }
}
if((arr[middle] == search) || (arr[start] == arr[end]) || arr[end] == arr[middle] || arr[start] == arr[middle]){
    if(arr[middle] == search){
        cout << "Item is found" << endl;
        return arr[middle];
    }
    if(start == end || arr[middle] != search){
        cout << "item not found" << endl;
        return arr[end];
    }
}
if(search < arr[middle] && start != end){
//cout << "TestSmall" << endl;
return Bsearch(arr,start,middle,search);
}
//cout << "TestBig" << endl;
if(search > arr[middle] && start != end){
return Bsearch(arr,middle,end,search);
}
return 0; 
}
