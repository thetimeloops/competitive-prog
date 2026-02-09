#include<iostream>
using namespace std;

int main(){

string s="anagram";
string t="nagaram";
 sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
}
