#include "bst.h"


// tra ve chieu cao cua cay
int MaxDepth(Tree T) {
  if (T == NULL) {
    return 0;
  }
  else {
    int lDepth = MaxDepth(T->left);
    int rDepth = MaxDepth(T->right);

    // use the larger one
    if (lDepth > rDepth) return lDepth+1;
    else return rDepth+1;
  }
}

// tim kiem khoa trong cay
Tree Search(KeyType x, Tree Root) {
	if (Root == NULL) return NULL; // k tim thay
	else if (Root->key == x) return Root; // tim thay khoa
	else if (Root->key < x) return Search(x, Root->right); // tim ben phai
	else return Search(x, Root->left); // tim ben trai
}

int DepthKey(KeyType x, Tree Root, int level) {
	if(Root == NULL) return 0;
    if(Root->key == x) return level;

    if(Root->left == NULL && Root->right == NULL) return 0;

    int levelLeft = DepthKey(x, Root->left, level+1);
    int levelRight = DepthKey(x, Root->right, level+1);

    if(levelLeft == 0) return levelRight;
    else return levelLeft;
}
