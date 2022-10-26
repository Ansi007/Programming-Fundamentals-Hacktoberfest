#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int count = 0;
        if (!(s[0] == ')' || s[0] == ']' || s[0] == '}')) {
            for (int i = 0;i < (int)s.length();i++)
            {
                if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                    st.push(s[i]);
                    count++;
                    continue;
                }
                if (!st.empty())
                {
                    if (s[i] == ')' && st.top() == '(')
                    {
                        count++;
                        st.pop();
                    }
                    else if (s[i] == ']' && st.top() == '[')
                    {
                        count++;
                        st.pop();
                    }
                    else if (s[i] == '}' && st.top() == '{')
                    {
                        count++;
                        st.pop();
                    }
                }
            }
            if (st.empty() && count==(int)s.length())
                return true;
            else
                return false;
        }
        return false;
    }
};
int main()
{
    Solution s;
    s.isValid(")()[]") ? cout << "true" : cout << "false";
	return 0;
}