/*
 * @FilePath: /leetcode-cpp/greedy/code_455_AssignCookies.cpp
 * @Author: huzhu
 * @Date: 2020-06-16 22:38:40
 * @Description: 
 */ 

#include <iostream>
#include <vector>
using namespace std;  

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int res = 0;
        for(int i = 0,j = 0; i < g.size()  && j < s.size() ; j++){
            if(s[j] >= g[i]){
                res++;
                i++;
            }
        }
        return res;
    }
};


int main(int argc, char const *argv[])
{
    Solution test = Solution();
    int a[] = {1,2};
    int b[] = {1,2,3};
    vector<int> g,s;
    g.assign(a,a+2);
    s.assign(b,b+3);
    cout << test.findContentChildren(g, s) << endl;
    return 0;
}
