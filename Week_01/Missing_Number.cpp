class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int sum = n * (n + 1) / 2;
        int actualSum = 0;
        for (int i = 0; i < n; i++) {
            actualSum += arr[i];
        }
        return sum - actualSum;
    }
    
};
