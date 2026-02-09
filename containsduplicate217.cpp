#include<iostream>
#include<set>
using namespace std;

int main()
{

vector<int> n = {1,2,3,4};
int size = n.size();

set<int> s;

for(int i=0;i<size;i++)
{
s.insert(n[i]);
}

int setsize = s.size();
if(size!=setsize)
{
cout<<"True";
}
else{
cout<<"False";
};

};
