class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // a matrix is just a vector of vectors (2d array)
        // we can find the size of the vector (rows), find the size of the 0th index of that vector (columns)
        // first find the target row: if leftCol <= target <= rightCol, then target can only be within that range
        // if so, break and we are left with midRow (target row)
        // else, if leftCol < target. 
        int left = 0;
        int right = matrix.size() - 1;
        int midRow = (left + right) / 2;
        int leftCol = 0;
        int rightCol = matrix[midRow].size() - 1;
        int midCol = (leftCol + rightCol) / 2;

        while (left <= right){
            midRow = (left + right) / 2;
            if (target >= matrix[midRow][leftCol] && target <= matrix[midRow][rightCol]){
                break;
            } else if (matrix[midRow][rightCol] < target){
                left = midRow + 1;
            } else{
                right = midRow - 1;
            }
        }

        // perform binary search inside midRow. this is a standard array
        while(leftCol <= rightCol){
            midCol = (leftCol + rightCol) / 2;
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