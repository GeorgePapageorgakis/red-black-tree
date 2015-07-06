/**
    def_header.c
	Using windows.h for coloring the nodes in console.
	
    @author George Papageorgakis
    @version 1.0 01/2012
*/
#ifndef DEF_HEADER_H
#define	DEF_HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>   // WinApi header

void Left_Rotate(struct node *x);
void Right_Rotate(struct node *y);
void fix_insert(struct node *aux);
void rb_insert(struct node *x,struct node *y,struct node *temp);
void RB_transplant(struct node *aux,struct node *auxchild);

struct node *tree_successor(struct node *aux_succ);

void RB_delete_fix(struct node *x,struct node *w);
void RB_delete(struct node* z,struct node* y,struct node *x);
void search_delete(struct node *aux,int z);

void io_print(struct node *aux,struct node *auxnill);
void tree_print(struct node *aux,struct node *nill);

int check(struct node *aux,int z,int chk);

enum type {black, red};

struct node {
	enum type color;
	int key;
	struct node *LC, *RC, *P;
};

#endif	/* DEF_HEADER_H */