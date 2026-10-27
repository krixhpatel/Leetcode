#include <vector>
#include <utility>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insert = 0;
        for (int i = 0; i < (int)nums.size(); ++i) {
            if (nums[i] != 0) {
                if (i != insert) {
                    swap(nums[insert], nums[i]);
                }
                ++insert;
            }
        }
    }
};