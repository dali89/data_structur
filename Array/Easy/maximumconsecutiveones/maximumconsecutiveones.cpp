#include <bits/stdc++.h>

using namespace std;
class Solution {
  public:
    int findMaxConsecutiveOnes(vector < int > & nums) {

    int count=0;
    int n;
    for(int i=0;i<nums.size();i++){
        n=nums[i];
        for(int j=0;j<nums.size();j++){
            if(nums[j]==n)
               count++;
        }
    }
    if(count == 1)
    {
        return n;
    }
    }
};

int main() {
  vector < int > nums = { 1, 1, 0, 1, 1, 1 };
  Solution obj;
  int ans = obj.findMaxConsecutiveOnes(nums);
  cout << "The maximum  consecutive 1's are " << ans;
  return 0;
}