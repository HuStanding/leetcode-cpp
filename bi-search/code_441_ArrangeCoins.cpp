/*
 * @FilePath: /leetcode-cpp/bi-search/code_441_ArrangeCoins.cpp
 * @Author: huzhu
 * @Date: 2020-06-07 15:19:39
 * @Description: 
 */ 
#include <iostream> 
using namespace std;   

class Solution {
public:
    int arrangeCoins(int n) {
        if(n == 0 || n == 1) return n;
        int level = 1;
        while(n > 0){
            n -= level;
            level++;
        }
        return n == 0 ? level - 1 : level - 2;
    }
};


int main(){
    Solution test = Solution();
    cout << test.arrangeCoins(8) << endl;
}
