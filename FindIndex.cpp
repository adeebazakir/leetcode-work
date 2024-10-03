#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Find the middle index

        if (nums[mid] == target) {
            return mid;  // Target found, return the index
        } 
        else if (nums[mid] < target) {
            left = mid + 1;  // Search in the right half
        } 
        else {
            right = mid - 1;  // Search in the left half
        }
    }
    
    // If target is not found, return the index where it should be inserted
    return left;
}

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(6);
    nums.push_back(7);
    int target = 5;

    int index = searchInsert(nums, target);
    cout << "The target should be at index: " << index << endl;

    return 0;
}

