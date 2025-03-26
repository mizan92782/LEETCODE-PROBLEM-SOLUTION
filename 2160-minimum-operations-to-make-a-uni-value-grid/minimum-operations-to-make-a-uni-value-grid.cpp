class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>arr;
        // Flatten the grid into a 1D array
    for (const auto& row : grid) {
        for (int num : row) {
            arr.push_back(num);
        }
    }

    // Sort the array
    sort(arr.begin(), arr.end());

    // Check if all elements can be converted to the same value (divisibility check)
    int base = arr[0] % x;
    for (int num : arr) {
        if (num % x != base) {
            return -1;  // Not possible to make all elements equal
        }
    }

    // Choose the median as the target value
    int median = arr[arr.size() / 2];

    // Calculate the minimum operations needed
    int operations = 0;
    for (int num : arr) {
        operations += abs(num - median) / x;
    }

    return operations;

    }
};