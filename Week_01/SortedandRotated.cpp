class Solution {
public:
    bool check(vector<int>&arr) {
        int count = 0;               // Initialize count 
        int n = arr.size();        

        
        for (int i = 1; i < n; i++) {
            if (arr[i - 1] > arr[i]) {
                count++;            
            }
        }

        
        if (arr[0] < arr[n - 1]) {
            count++;                
        }

        // Return true if there is 1 or 0 breaks, false otherwise
        return count <= 1;  
    }
};
