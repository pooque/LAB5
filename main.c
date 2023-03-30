#include "myList.h"
int main()
{
    Node *last=(Node*)malloc(sizeof(Node));
    //printf("Cate elemente are sirul de caractere?: ");
    int n;
    scanf("%d ",&n);
    //printf("Aveti %d caractere.",n);
    //printf("\nIntroduceti sirul de caractere: ");
    char x;
    scanf("%c",&x);
    last->char_ofNode=x;
    last->i_ofNode=0;
    last->previous=NULL;
    //printf("\nPrimul caracter este: %c",last->char_ofNode);
    for(int i=1;i<n;i++)
    {
        scanf("%c",&x);
        if(last->char_ofNode=='(' && x==')')
        {
            if(last->previous!=NULL)
            {
                Node *aux=last;
                last=last->previous;
                free(aux);

            }
            else if(i+1<n)
            {
                i++;
                scanf("%c",&last->char_ofNode);
            }
            else
                last=NULL;
        }
        else
        {
            add_ToStiva(&last,x);
            last->i_ofNode=i;
        }
    }
    write_Stiva(last);
    return 0;
}
