#include<iostream>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
	for(int i=0;i<s.length();i++)
	{
        char ch = s[i];
		if(ch=='(' || ch=='{' || ch=='[')
		{
			t.push(ch);
		}
		else
		{
            if(t.empty())
			{
				return false;
			}

			if(ch==')' && t.top()=='('
            || ch=='}' && t.top()=='{'
            || ch==']' && t.top()=='['
            )
			{	
				t.pop();
			}
            else
            {
                return false;
            }
		}

	}
	return t.empty();        
    }
};

int main()
{
    Solution sol;
    bool res = sol.isValid("()[]{)}");
    if(res)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}
