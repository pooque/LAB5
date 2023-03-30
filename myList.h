#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct stiva_Nodes
{
    char char_ofNode;
    int i_ofNode;
    struct stack_ofNode *previous;
}Node;
int isEmpty(Node *p);
void write_Stiva(Node *p);
void add_ToStiva(Node **p,char x);
