#include <stdio.h>
#include <stdlib.h>

/* type definition */
typedef int KeyType;

typedef struct Node* NodeType; 

struct Node {	
	KeyType key;
	NodeType left,right;
};

typedef NodeType Tree;

/* prototype */
void MakeNullTree(Tree *T);
int EmptyTree(Tree T);
void InsertNode(KeyType x, Tree *Root);
void DeleteNode(KeyType x, Tree *Root);
void InOrder(Tree T);