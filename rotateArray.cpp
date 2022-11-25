//189. Rotate Array
#include <iostream>
using namespace std;

int main (){
        void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for(int i = 0 ;i<nums.size();i++){
            temp[(i + k) % nums.size()]= nums[i];
        }
        //copy temp into num vector!
        nums = temp;
    }
}