#include<iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
    queue<char> q;
    int firstoccurance;
    for(int i=0;i<needle.length();i++)
    {
        q.push(needle[i]);
    }
    
    for(int i=0;i<haystack.length();i++)
    {
        cout<<haystack[i]<<q.front()<<endl;
        if(q.front()==haystack[i])
        {
            cout<<"ander";
            q.pop();
            if(q.empty())
            {   
                return i-needle.length()+1;
                break;
            }
        }
    }
    return -1;
}
};

int main()
{
    Solution sol;
    int res= sol.strStr("leetcode","leeto");
    cout<<res<<endl;

}