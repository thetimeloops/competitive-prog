#include <iostream>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;

	TreeNode(int x)
	{
		val = x;
		left = NULL;
		right = NULL;
	}
};

void inorder(TreeNode *root)
{
	if (root == NULL)
		return;
	inorder(root->left);
	cout << root->val << endl;
	inorder(root->right);
}
int main()
{
	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);

	inorder(root);
}
