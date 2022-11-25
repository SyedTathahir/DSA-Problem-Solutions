// leetcode : 1752. Check if Array Is Sorted and Rotated
#include<iostream>
using namespace std; 

int main(){
    
        bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        for(int i = 1 ;i < n ;i++){//linear traversing whole array
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0])//cyclic traversing 
            count++;
        return count<=1;
    }
}