#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        ans.reserve(matrix.size());
        for (const auto& row : matrix) {
            ans.push_back(accumulate(row.begin(), row.end(), 0));
        }
        return ans;
    }
};