//We'll write a main for making a new Binary Tree and for testing its functions

#include <iostream>
#include "BinaryTreeNode.h"
#include "BinaryFunctions.h"

using namespace std;

int main() {
	//First Function - findLongestEvenPath
	cout << "<--------- First function - findLongestEvenPath --------->" << endl;
	BinaryTreeNode* root1 = new BinaryTreeNode("10"); //root
	root1->setLeft(new BinaryTreeNode("6")); //root->left
	root1->getLeft()->setLeft(new BinaryTreeNode("4")); //root->left->left
	root1->getLeft()->setRight(new BinaryTreeNode("8")); //root->left->right

	root1->setRight(new BinaryTreeNode("18")); //root->right
	root1->getRight()->setLeft(new BinaryTreeNode("15")); //root->right->left
	root1->getRight()->setRight(new BinaryTreeNode("21")); //root->right->right
	root1->getRight()->getRight()->setRight(new BinaryTreeNode("22")); //root->right->right->right

	//Calling the Function <--findLongestEvenPath--> and checking for its value (should be 2)
	if (findLongestEvenPath(root1) != 2) {
		cout<< "Exception: output is not as expected (!=2). at findLongestPath" << endl;
	}else {
		cout<< "findLongestEvenPath output: Correct" << endl;
	}

	//Second function - evaluateTree

	cout << "<--------- Second function - evaluateTree --------->" << endl;

	//Making the first Node of the tree
	BinaryTreeNode* root2 = new BinaryTreeNode("+");

	//Setting the left Nodes of the tree
	root2->setLeft(new BinaryTreeNode("*"));
	root2->getLeft()->setLeft(new BinaryTreeNode("-"));
	root2->getLeft()->setRight(new BinaryTreeNode("5"));

	root2->getLeft()->getLeft()->setLeft(new BinaryTreeNode("10"));
	root2->getLeft()->getLeft()->setRight(new BinaryTreeNode("5"));

	//Setting the right Nodes of the tree
	root2->setRight(new BinaryTreeNode("/"));

	root2->getRight()->setLeft(new BinaryTreeNode("21"));
	root2->getRight()->setRight(new BinaryTreeNode("7"));

	//Calling the Function <--evaluateTree--> and checking for its value (should be 28)
	if (evaluateTree(root2) != 28) {
		cout << "Exception: output is not as expected (!=28). at evaluateTree" << endl;
	}else {
		cout << "evaluateTree output: Correct" << endl;
	}

	cout << "Done" << endl;
}


