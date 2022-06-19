#include "BinaryTreeNode.h"

BinaryTreeNode::BinaryTreeNode(const char* x){
	m_value = new char[strlen(x) + 1];

	int i;
	for (i = 0; i < strlen(x); i++) {
		m_value[i] = x[i];
	}
	m_value[i] = '\0';


	m_left = nullptr;
	m_right = nullptr;
}

BinaryTreeNode::~BinaryTreeNode(){
	delete[] m_value;
}

const char* BinaryTreeNode::getValue() const{
	return m_value;
}

BinaryTreeNode* BinaryTreeNode::getLeft(){
	return m_left;
}

BinaryTreeNode* BinaryTreeNode::getRight(){
	return m_right;
}

void BinaryTreeNode::setValue(char* x){
	//delete previous str
	delete[] m_value;
	//new str
	m_value = new char[strlen(x) + 1];

	int i;
	for (i = 0; i < strlen(x); i++) {
		m_value[i] = x[i];
	}
	m_value[i] = '\0';
}

void BinaryTreeNode::setLeft(BinaryTreeNode* left){
	m_left = left;
}

void BinaryTreeNode::setRight(BinaryTreeNode* right){
	m_right = right;
}
