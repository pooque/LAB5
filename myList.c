#include "myList.h"
int isEmpty(Node *p)
{
    return p==NULL;
}
void write_Stiva(Node *p)
{
    while(!isEmpty(p))
    {
        printf("%c on position %d\n",p->char_ofNode,p->i_ofNode);
        p=p->previous;
    }
}
void add_ToStiva(Node **p,char x)
{
    Node *new_Node=(Node*)malloc(sizeof(Node));
    new_Node->char_ofNode=x;
    new_Node->previous=(*p);
    (*p)=new_Node;
}
