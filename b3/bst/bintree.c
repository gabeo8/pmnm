#include <stdio.h>
#include "bst.h"


int main() {
	// them khoa tu  4, 2, 5, 1, 3
	// kq duyet trung tu: 1, 2, 3, 4, 5

	Tree T;
	MakeNullTree(&T);
	int i;	
	InsertNode(4, &T);
	InsertNode(2, &T);
	InsertNode(5, &T);
	InsertNode(1, &T);
	InsertNode(3, &T);
	
	// duyet
	InOrder(T);
	printf("\n");

	// chieu cao cua cay
	printf("Chieu cao cua cay: %d", MaxDepth(T)); // 3
	printf("\n");

	// tim khoa 4 trong cay
	printf("\n");
	if (Search(4, T)) printf("Tim thay 4");
	else printf("Khong tim thay 4");
	
	printf("\n");
	// tim khoa 10 trong cay
	printf("\n");
	if (Search(10, T)) printf("Tim thay 10");
	else printf("Khong tim thay 10");
	printf("\n");
	
	printf("Do sau cua khoa 3 la %d", DepthKey(3, T, 1));

	printf("\n");

	return 0;
}
