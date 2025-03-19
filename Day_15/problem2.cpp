// 74. Search a 2D Matrix
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
             int rows = matrix.size(), cols = matrix[0].size();
        int low = 0, high = rows * cols - 1;
    
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int midElement = matrix[mid / cols][mid % cols];
    
            if (midElement == target) return true;
            else if (midElement < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
    
    
    };