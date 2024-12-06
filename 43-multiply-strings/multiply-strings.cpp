class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n = num1.size();
        int m = num2.size();
        vector<int> result(n + m, 0);

        // Multiply each digit of num1 with each digit of num2
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];
                result[i + j + 1] = sum % 10;        // Update current position
                result[i + j] += sum / 10;          // Carry to the next position
            }
        }

        // Convert result to string
        string str = "";
        for (int num : result) {
            if (!(str.empty() && num == 0)) {      // Skip leading zeros
                str += (num + '0');
            }
        }

        return str.empty() ? "0" : str;
    }
};
