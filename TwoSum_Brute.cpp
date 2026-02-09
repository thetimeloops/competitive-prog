#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<int> twoSum(vector<int> &nums, int target)
	{
		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i + 1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					return {i, j};
				}
			}
		}
		return {-1,-1};
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

