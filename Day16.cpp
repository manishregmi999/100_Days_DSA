#include<iostream>
using namespace std;
int main(){

    //Prime or not - Time Complexity

    int n=9;
    for (int i=2; i*i<=n; i++){// loop will run if i^2<=n
        if(n%i==0){            // so in worst case i^2=n
            cout<<"Composite"; // so i = sqrt n
            break;             // so if input size(n) is 1000, then at worst case total operations required 
        }                      // is sqrt 1000 which is 31.62. This time complexity is denoted as O(sqrt n). This time 
    }                          // complexity is better than O(n), since in O(n) if input size is 1000, in worst case 
                             // 1000 operations should be perfomed. So O(sqrtn) is better than O(n)

//Selection Sort - Time Complexity
int arr[n];
for(int i=0; i<n-1; i++){                 //Here for input size n, loop will run n times(approx.)
    int minIdx = i;                      //One operation(constant)
    for(int j=i+1; j<n; j++){           //Here j will run n times(approx.) in worst case
        if (arr[j] < arr[minIdx]) {     //k number of operations in each inner loop(constant)
            minIdx = j;
        }
    }
    swap(arr[i], arr[minIdx]);         //(Constant)
}   //Here for each outer loop, inner loop will run n times. Since outer loop will also run n times, so total
    //operations performed is n times n which is n^2 times. for eg, if n is 5 so for i=1 inner loop will run 5 times,
    //for i=2 inner loop 5 times, for i=3 inner loop 5 times and so on. So total operations is 5*5 times, which is 5^2
    //Which is 25. It is denoted as O(n^2)

//Recursion - Time complexity



















}