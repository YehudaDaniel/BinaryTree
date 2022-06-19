#include "BinaryFunctions.h"


//this function gets a pointer to the root of a tree
//and returns the value of the expression using InOrder scan

double evaluateTree(BinaryTreeNode* root) {

	if (root == nullptr)
		return 0;

	switch (*(root->getValue())) {
		case '+':
			return evaluateTree(root->getLeft()) + evaluateTree(root->getRight());
		case '-':
			return evaluateTree(root->getLeft()) - evaluateTree(root->getRight());
		case '*':
			return evaluateTree(root->getLeft()) * evaluateTree(root->getRight());
		case '/':
			return evaluateTree(root->getLeft()) / evaluateTree(root->getRight());
		default:
			return atoi(root->getValue());
	}
}