#ifndef BST_H
#define BST_H

typedef struct bstNode{
int data;
struct bstNode* left;
struct bstNode* right;
}bstNode;

void binary_search_tree_Demo(void);

#endif