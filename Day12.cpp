#include<iostream>
#include<vector>
using namespace std;

//LeetCode 169. Majority Element

class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        int count;
        int n=nums.size();
        for(int val : nums)
        {
            count=0;
            for(int ele : nums)
            {
                if(val==ele)
                {
                count++;
                }
            }
            if(count>(n/2)){
                return val;
            }
        } 
             return -1;
    }        
 };

int main(){
    vector<int> m={1, 2, 2, 1, 1};
    int n= 5;
   Solution s1;
   cout<<s1.majorityElement(m)<<endl;
}


//Optimized

#include<iostream>
#include <algorithm>//for sorting function
#include<vector>
using namespace std;
class Solution {
public:

    int majorityElement(vector<int>& nums) {
        //Sort
        sort(nums.begin(), nums.end());

        //count frequency
        int n = nums.size();
        
        
        int count=1;
        for(int i=1; i<n; i++){
            if(nums[i]==nums[i-1]){
                count++;
               if(count>n/2){
                return nums[i];
               }
            }
            else{
                count=1;
            }
        }
        return nums[0];
    }
    };

int main(){
    vector<int> m={1,1,1,2,2};
   Solution s1;
   cout<<s1.majorityElement(m)<<endl;
    }


//Moore's Voting Algorithm

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

    int majorityElement(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int count=0;
        for(int i=0; i<n; i++){
            if(count==0){
             ans=nums[i];
            }
            if(ans==nums[i]){
                count++;
            }
            else{
                count--;
            }
        
    }
    return ans;
    
    }
    
    };

    int main(){
    vector<int> m={1,1,1,2,2, 3, 3, 3, 3, 3};
   Solution s1;
   cout<<s1.majorityElement(m)<<endl;
    }
