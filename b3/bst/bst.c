#include "bst.h"

/* make tree null */
void MakeNullTree(Tree *T) { 
	(*T)=NULL; 
}


/* tree is empty */
int EmptyTree(Tree T) {
	return T==NULL;
}


/* insert x to bstree */
void InsertNode(KeyType x, Tree *Root) {
	if (*Root == NULL) {	
		(*Root)=(NodeType)malloc(sizeof(struct Node));
		(*Root)->key = x;
		(*Root)->left = NULL;
		(*Root)->right = NULL;
	}
 	else if (x < (*Root)->key) InsertNode(x, &((*Root)->left));
 	else if (x > (*Root)->key) InsertNode(x, &((*Root)->right));
} 

/* delete min of right child */
KeyType DeleteMin(Tree *Root) {
	KeyType k;
	if ((*Root)->left == NULL) {
		k=(*Root)->key;
		(*Root) = (*Root)->right;
		return k;
	} 
	else 
		DeleteMin(&((*Root)->left));
}


/* delete x in bstree */
void DeleteNode(KeyType x, Tree *Root) {
	if ((*Root) != NULL)
        	if (x < (*Root)->key)
 			DeleteNode(x, &((*Root)->left));
 		else if (x > (*Root)->key)
 			DeleteNode(x, &((*Root)->right));
		else if ((*Root)->left == NULL)
 			(*Root) = (*Root)->right;
 		else if ((*Root)->right == NULL)
 			(*Root) = (*Root)->left;
                else
			(*Root)->key = DeleteMin(&((*Root)->right));
}

/* In order traversal bstree */
void InOrder(Tree T) {
	if(T != NULL) {
		InOrder(T->left);
		printf("%d ",T->key);
		InOrder(T->right);
	}	
}

