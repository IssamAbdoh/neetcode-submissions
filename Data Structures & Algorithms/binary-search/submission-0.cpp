class Solution {
public:

    int binarySearch(vector<int>& array, int low, int high, int number_to_search_for) {

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (number_to_search_for == array[mid]){
                return mid;
            }

            if (number_to_search_for > array[mid]){
                low = mid + 1;
            }

            if (number_to_search_for < array[mid]){
                high = mid - 1;
            }

        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        
        return binarySearch(nums,0,nums.size()-1,target);
    }
};
