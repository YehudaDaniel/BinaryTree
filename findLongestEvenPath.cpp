#include "BinaryFunctions.h"


using namespace std;

//this recursive function gets a pointer to a root of a binaryTree
//and returns the longest path of even numbers
int findLongestEvenPath(BinaryTreeNode* tree) {
	int lenLeft;
	int lenRight;
	int max;

	if (tree == nullptr || atoi(tree->getValue()) % 2 != 0) { //if the value is odd
		return -1;
	}else {
		lenLeft = findLongestEvenPath(tree->getLeft()) + 1;
		lenRight = findLongestEvenPath(tree->getRight()) + 1;
	}
	
	max = (lenLeft > lenRight) ? lenLeft : lenRight;

	return max;
}