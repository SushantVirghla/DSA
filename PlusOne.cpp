class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;   
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

/*
1.start from right 
2.if digit is > than 9 increment 
3.if digit is 9 then digit -> 0 and carry 1 
4.add 1 to the left side

digit.size is fun used to get size of array
digit.insert is used to insert and .begin is the location , digits.begin(), 1 ) 1->digit to insert at location
*/
