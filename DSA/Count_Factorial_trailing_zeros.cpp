/*Factorial Trailing Zeroes

Given an integer n, return the number of trailing zeroes in n!.

Input: n = 5
Output: 1
Explanation: 5! = 120, one trailing zero.
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
         int count=0;
    while(n>0)
      {
         n/=5;
         count+=n;
      }

    return count;
    }
};

int main()
{

    Solution s;
    int N=50;
    int Zeros=s.trailingZeroes(N);
    cout<<Zeros;

}
