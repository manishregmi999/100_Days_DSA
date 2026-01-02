#include<iostream>
#include<vector>
using namespace std;

int main(){
    // //Leetcode question : Single number problem
    int ans=0;
    vector<int> vec={1, 2, 3, 4, 5, 1, 2, 3, 4};
    for(int val : vec){
        ans=ans^val;
    }
    cout<<ans;

    //To print all the subarrays of an array
    int array[]={1, 2, 3, 4, 5};
    int n=5;
    for(int str=0; str<n; str++){
        for(int end=str; end<n; end++){
            for(int i=str; i<=end; i++){
                cout<<array[i];
            }
            cout<<" ";
        }
    

    //Maximum Subarray Sum
    int max_sum=INT_MIN;
    for(int str=0; str<n; str++){
        int current_sum=0;
        for(int end=str; end<n; end++){
            current_sum=current_sum+array[end];
            max_sum=max(current_sum, max_sum);
        }
}
cout<<"Maximum subarray sum : "<<max_sum<<endl;
}
