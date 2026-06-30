class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        unordered_map<string, bool> mp{
            {"*", true},
            {"+", true},
            {"-", true},
            {"/", true}
        };

        for (string c: tokens ) {
            if (mp.find(c) != mp.end()){
                int num1 = s.top();
                s.pop();

                int num2 = s.top();
                s.pop();

                int sol;

                if (c == "*"){
                    sol = num2 * num1;
                } else if (c == "+") {
                    sol = num2 + num1;
                } else if (c == "-") {
                    sol = num2 - num1;
                } else {
                    sol = num2 / num1;
                }
                s.push(sol);
            } else {
                s.push(stoi(c));
            }
        }

        return s.top();
    }
};
