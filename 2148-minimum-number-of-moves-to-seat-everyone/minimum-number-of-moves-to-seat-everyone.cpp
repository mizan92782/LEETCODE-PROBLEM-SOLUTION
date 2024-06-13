class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        
        // Sort both the seats and students arrays
        std::sort(seats.begin(), seats.end());
        std::sort(students.begin(), students.end());

        int sum = 0;
        int n = seats.size();

        // Calculate the sum of absolute differences
        for(int i = 0; i < n; ++i) {
            sum += std::abs(seats[i] - students[i]);
        }

        return sum;
    }
};