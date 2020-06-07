/*
 * @FilePath: /leetcode-cpp/bi-search/code_69_Sqrt.cpp
 * @Author: huzhu
 * @Date: 2020-06-07 11:22:53
 * @Description: 
 */ 
#include <iostream> 
using namespace std;   

class Solution {
public:
    int mySqrt(int x) {
        if(x <= 1){
            return x;
        }
        // 使用二分查找算法
        int low = 1;
        long int high = x;
        while(low <= high){
            long int mid = (low + high) >> 1;
            if(mid == x / mid) return mid;
            else if (mid < x /mid) low = mid + 1;
            else  high = mid - 1;
        }
        return high;
    }
};


int main(){
    Solution test = Solution();
    cout << test.mySqrt(2147483647) << endl;
}
