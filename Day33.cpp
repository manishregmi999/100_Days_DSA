//Sorting Algorithm #2
#include<iostream>
using namespace std;

//Insertion sort
void insertionSort(int arr[], int n)
{
for(int i=1; i<n; i++){
    int cur = arr[i];
    int prev = i-1;
    while(prev>=0 && arr[prev]>cur){
        arr[prev+1]=arr[prev];
        prev--;
    }
    arr[prev+1]=cur;
}
}

void print(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int main()
{
int n = 5;
    int arr[]={4, 1, 5, 2, 3};
    insertionSort(arr, n);
    print(arr, n);

}
