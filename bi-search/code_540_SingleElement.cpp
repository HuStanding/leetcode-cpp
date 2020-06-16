/*
 * @FilePath: /leetcode-cpp/bi-search/code_540_SingleElement.cpp
 * @Author: huzhu
 * @Date: 2020-06-16 21:29:01
 * @Description: 
 */ 
#include <iostream>
#include <vector> 
using namespace std;   

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        while(low < high){
            int mid = (low + high) >> 1;
            if(mid % 2 == 1) mid--;  //使得查找区间数量为奇数个
            if(nums[mid] != nums[mid+1]) high = mid;
            else low = mid + 2;
        }
        return nums[low];
    }
};


int main(){
    Solution test = Solution();
    int a[] = {1,1,3,3,4,4,7,8,8};
    vector<int> nums; 
    nums.assign(a,a+9);
    cout << test.singleNonDuplicate(nums) << endl;
}