class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int min_diff = arr[1] - arr[0];

        vector<vector<int>> result;

        for (int i = 0; i < n - 1; i++) {
            int diff = arr[i + 1] - arr[i];

            if (diff < min_diff) {
                min_diff = diff;
                result.clear();   
                result.push_back({arr[i], arr[i + 1]});
            }
            else if (diff == min_diff) {
                result.push_back({arr[i], arr[i + 1]});
            }
        }

        return result;
    }
};
