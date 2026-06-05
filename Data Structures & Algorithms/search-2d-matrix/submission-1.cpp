class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // a matrix is just a vector of vectors (2d array)
        // we can find the size of the vector (rows)
        // find the size of the 0th index of that vector (columns)
        // first find the target row: if leftCol <= target <= rightCol
        // if so, break and we are left with midRow
        // perform binary search between midRow. if not found, return false
        int left = 0;
        int right = matrix.size() - 1;
        int midRow = (left + right) / 2;
        while (left <= right){
            midRow = (left + right) / 2;
            int leftCol = 0;
            int rightCol = matrix[midRow].size() - 1;
            if (target >= matrix[midRow][leftCol] && target <= matrix[midRow][rightCol]){
                break;
            } else if (matrix[midRow][leftCol] < target){
                left = midRow + 1;
            } else{
                right = midRow - 1;
            }
        }

        int leftCol = 0;
        int rightCol = matrix[midRow].size() - 1;
        while(leftCol <= rightCol){
            int midCol = (leftCol + rightCol) / 2;
            if (matrix[midRow][midCol] == target){
                return true;
            } else if (matrix[midRow][midCol] < target){
                leftCol = midCol + 1;
            } else {
                rightCol = midCol - 1;
            }
        }
        return false;
    }
};