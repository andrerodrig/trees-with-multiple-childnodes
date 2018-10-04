/* Program to Create and manipulate a tree with a variable number of child-nodes - Using linked-list*/

#include <stdio.h>
#include <stdlib.h>
#include "VarTree.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Creating the nodes*/
	VarTree* t1 = varTree_create('a');
	VarTree* t2 = varTree_create('b');
	VarTree* t3 = varTree_create('c');
	VarTree* t4 = varTree_create('d');
	VarTree* t5 = varTree_create('e');
	VarTree* t6 = varTree_create('f');
	VarTree* t7 = varTree_create('g');
	VarTree* t8 = varTree_create('h');
	VarTree* t9 = varTree_create('i');
	VarTree* t10 = varTree_create('j');
	
	/*Linking the nodes and forming trees (textual notation)*/
	
	varTree_insert(t8,t9);
	varTree_print(t8);
	printf("\n\n");
	
	varTree_insert(t7,t8);
	varTree_print(t7);
	printf("\n\n");
	
	varTree_insert(t8,t10);
	varTree_print(t7);
	printf("\n\n");
	
	varTree_insert(t1,t7);
	varTree_print(t1);
	printf("\n\n");
	
	varTree_insert(t2,t3);
	varTree_insert(t1,t2);
	varTree_print(t1);
	printf("\n\n");
	
	varTree_insert(t7,t5);
	varTree_insert(t7,t4);
	varTree_insert(t2,t6);
	varTree_print(t1);
	printf("\n\n");
	
	int h1 = varTree_height1(t1);
	printf("\nHeight: %d", h1);

	varTree_free(t1);
	return 0;
	

}
