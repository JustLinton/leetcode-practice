#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) { 
    if(x>=0&&x<10)return true;
    if(x<0||x%10==0)return false;
    int sum=0;
    while(sum<x){
        sum=sum*10+x%10;
        x=x/10;
    }
    // cout<<x<<' '<<sum<<endl;
   if(sum==x||sum/10==x)return true;
   return false;
    }
};
// @lc code=end

