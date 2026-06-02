class Solution {
public:
    int binarySearch(vector<vector<int>>& array, int low, int high, int number_to_search_for) {

        int n= array.size();
        int m= array[0].size();

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (number_to_search_for == array[mid/m][mid%m]){
                return mid;
            }

            if (number_to_search_for > array[mid/m][mid%m]){
                low = mid + 1;
            }

            if (number_to_search_for < array[mid/m][mid%m]){
                high = mid - 1;
            }

        }

        return -1;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m= matrix[0].size();

        return binarySearch(matrix,0,m*n-1,target)!=-1;
    }
};
