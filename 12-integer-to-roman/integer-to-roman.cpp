class Solution {
public:
    string intToRoman(int num) {
        if (num <= 0 || num > 3999) {
            return "Invalid input"; 
        }

        vector<pair<int, string>> rom = {
            {1000, "M"}, {900, "CM"},
            {500, "D"},  {400, "CD"},
            {100, "C"},  {90, "XC"},
            {50, "L"},   {40, "XL"},
            {10, "X"},   {9, "IX"},
            {5, "V"},    {4, "IV"},
            {1, "I"}
        };

        string s;
        for (auto &[val, sym] : rom) {
            while (num >= val) {
                s += sym;
                num -= val; 
            }
        }

        return s;
    }
};
