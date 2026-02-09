

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<int> twoSum(vector<int> &nums, int target)
	{
		unordered_map<int,int> hashmap;
        for (int i=0;i<nums.size();i++)
        {
            hashmap[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++)
        {
            int valueToFind = target - nums[i];
	    if(hashmap.find(valueToFind) != hashmap.end() && hashmap[valueToFind] != i)
	    {
		return {i,hashmap[valueToFind]};
	    }	     
        }
      
	return {};

	}
};

int main()
{
	Solution sol; // create object

	vector<int> nums = {3,2,4};
	int target = 6;

	vector<int> result = sol.twoSum(nums, target);

	cout << result[0] << " " << result[1] << endl;
	return 0;
}
