
/**
 * * g++ -std=c++11 -o test main.cpp ;; does not work with MINGW64 tools
*/
#include<iostream>
#include<vector>
#include<cassert>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      vector<int> res;
      for (int n: nums) {
        if (n!=val) {
            res.push_back(n);
        }
      }  
      int count=0;
      for (int n:res) {
        nums[count++] = n;
      }
      return count;
    }
};
int main() {
    vector<int> arr{2,1,7,4,3,8,3,1};
    Solution soln;
    int count = soln.removeElement(arr,3);
    assert(count==6);

    return 0;
}