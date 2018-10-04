#include <stdio.h>
#include <stdlib.h>
#include "VarTree.h"

struct vartree{
	char info;
	VarTree *prim;
	VarTree *prox;
};

VarTree* varTree_create(char c)
{
	VarTree* t = (VarTree*) malloc(sizeof(VarTree));
	t->info = c;
	t->prim = NULL;
	t->prox = NULL;
	return t;
}

void varTree_insert(VarTree* t,VarTree* st)
{
	st->prox = t->prim;
	t->prim = st;
}

void varTree_print(VarTree* t)
{
	if(t == NULL)
		printf("<>");
	VarTree* p;
	printf("<%c",t->info);
	for(p = t->prim;p != NULL;p=p->prox)
		varTree_print(p); /*Print each child-subtree*/
	printf(">");
}

int varTree_belong(VarTree* t, char c)
{
	VarTree* p;
	if(t->info == c)
		return 1; 
	else{
		for(p = t->prim; p != NULL; p = p->prox){
			if(varTree_belong(p,c))
				return 1;
		}
	return 0;
	}
}

void varTree_free(VarTree* t)
{
	VarTree* p = t->prim;
	while(p != NULL){
		VarTree* aux = p->prox;
		varTree_free(p);
		p = t;
	}
	free(t);
}

int varTree_height1(VarTree* t)
{
	int hmax = -1; /*-1 handles the case 0 childnodes*/
	VarTree* p;
	for(p = t->prim; p != NULL; p = p->prox){
		int h = varTree_height1(p);
		if(h > hmax)
			hmax = h;
	}
	return hmax + 1;
}

static int max2(int a, int b)
{
	return (a > b) ? a : b;
}

int varTree_height2(VarTree* t)
{
	if(t == NULL)
		return -1;
	else
		return max2(1 + varTree_height2(t->prim),varTree_height2(t->prox));
}

