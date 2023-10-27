class Solution {
public:
    string addBinary(string a, string b) {
       int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry > 0) {
            // to convert
            int num1 = (i >= 0) ? a[i] - '0' : 0;
            int num2 = (j >= 0) ? b[j] - '0' : 0;
            
            int sum = num1 + num2 + carry;
            carry = sum / 2;
            result = to_string(sum % 2) + result;

            i--;
            j--;
        }

        return result;
    }
};