//Sorting Algorithm
#include<iostream>
using namespace std;
//Bubble Sort
void bubbleSort(int arr[], int n)//O(n^2) = Time complexity
{
    for(int i=0; i<n; i++){
        bool isSwap = false;
    for(int j=0; j<n-i-1; j++){
    if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
        isSwap=true;
    }
    }
        if(isSwap==false){// if in one full inner iteration no swapping occurs then we can conclude that our array is sorted so we can end this oop, although time complexity remains the same but still it will decrease number of iteration if its not worst case.
        return;
    }
}
}
//Selection Sort
void selectionSort(int arr[], int n)
{
for(int i=0; i<n; i++){
int MI = i;
for(int j=i+1; j<n; j++)
{
if(arr[j]<arr[MI])
    {
    MI = j;
    }
}
swap(arr[i], arr[MI]);
    }

}
//Print
void print(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){
    int n = 5;
    int arr[]={5, 88, 3, 2, 1};
    bubbleSort(arr, n);
    print(arr, n);

    selectionSort(arr, n);
    print(arr, n);

}