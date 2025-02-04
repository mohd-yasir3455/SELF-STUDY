// class Solution {
//      string map[10] = {"",    "",    "abc",  "def", "ghi",
//                       "jkl", "mno", "pqrs", "tuv", "wxyz"};

//     void solve(string digits, string output, int index, vector<string>& ans ) {
//         // base case
//         if (index >= digits.length()) {
//             ans.push_back(output);
//             return;
//         }
//        //extracting 2 from '23' i.e is given digit
//         int num = digits[index] - '0';
//         // value contain the abc , def like values
//         string value = map[num];
//         // take all the cases of the particular digits(here its num) value 
//         for (int i = 0; i < value.length(); i++) {
//             output.push_back(value[i]);
//             solve(digits, output, index + 1, ans );
//             // poping like a  , b , c letter which are not pairs
//             output.pop_back();
//         }
//     }

// public:
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         string output = "";
//         int index = 0;
//         if (digits.length() == 0) {
//             return ans;
//         }
           
//         solve(digits, output, index, ans );
//         return ans;
//     }
// };