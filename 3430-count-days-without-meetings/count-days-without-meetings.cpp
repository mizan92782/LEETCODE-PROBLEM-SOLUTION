class Solution {
public:

    static bool compare(vector<int>& x, vector<int>& y) {
        return x[0] < y[0];  // Sort intervals by start time
    }

    int countDays(int days, vector<vector<int>>& meetings) {
        if (meetings.empty()) return days;

        sort(meetings.begin(), meetings.end(), compare);

        long long int first = 0;
        long long int second = 0;
        long long int sum = 0;

        for (int i = 0; i < meetings.size(); i++) {
            cout << "array: " << meetings[i][0] << " : " << meetings[i][1] << endl;
            
            // First interval
            if (first == 0 && second == 0) {
                first = meetings[i][0];
                second = meetings[i][1];
                continue;
            }

            // Non-overlapping interval
            if (second < meetings[i][0]) {
                sum += (second - first + 1);
                cout << i << "-- " << sum << endl;
                first = meetings[i][0];
                second = meetings[i][1];
                continue;
            }

            // Merging overlapping intervals
            second = max(second, static_cast<long long>(meetings[i][1]));
            cout << first << " --> " << second << endl;
        }

        // Add the last merged interval
        if (second != 0) {
            sum += (second - first + 1);
        }

        return days - sum;
    }
};
