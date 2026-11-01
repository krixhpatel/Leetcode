#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        int i = 0;

        while (i < n) {
            int start = nums[i];
            int j = i;

            // extend the range while the next number is consecutive
            // (cast to long long to avoid overflow with INT_MAX / INT_MIN)
            while (j + 1 < n && (long long)nums[j + 1] == (long long)nums[j] + 1) {
                ++j;
            }

            if (j == i) {
                result.push_back(to_string(start));
            } else {
                result.push_back(to_string(start) + "->" + to_string(nums[j]));
            }

            i = j + 1;
        }

        return result;
    }
};