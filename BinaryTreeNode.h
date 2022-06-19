#ifndef BINARYTREENODE_H
#define BINARYTREENODE_H

#include <string.h>
#include <iostream>

using namespace std;

class BinaryTreeNode{
private:
	char* m_value;
	BinaryTreeNode* m_left;
	BinaryTreeNode* m_right;

public:
	BinaryTreeNode(const char* x);
	virtual ~BinaryTreeNode();
	const char* getValue() const;
	BinaryTreeNode* getLeft();
	BinaryTreeNode* getRight();
	void setValue(char* x);
	void setLeft(BinaryTreeNode* left);
	void setRight(BinaryTreeNode* right);
};

#endif