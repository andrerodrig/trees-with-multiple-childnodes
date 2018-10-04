/*Variable Trees - It is defined as a root node that points only to the first child-node, 
 *that in turn, points to its sibling-node, not depending on the number of the child-nodes*/

typedef struct vartree VarTree;
 
/*Create a leaf-node - in this case, an empty tree will mean a tree that has 0 sibling-node and 0 child-node*/
VarTree* varTree_create(char c);
/*Insert a new subtree as child-node of a given node*/
void varTree_insert(VarTree* t,VarTree* st);
/*Travel across all nodes and prints treir information*/
void varTree_print(VarTree* t);
/*Verify the occurrenceof a determined value in one of the tree's nodes*/
int varTree_belong(VarTree* t, char c);
/*Free all allocated memory by the tree*/
void varTree_free(VarTree* t);

/*Calculate the height of the tree*/
int varTree_height1(VarTree* t);

/*Calculate the height of the tree (Considering the variable tree as a variation of the binary tree - which, in fact, it is)*/
int varTree_height2(VarTree* t);
