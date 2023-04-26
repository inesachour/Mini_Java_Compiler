#include "stdio.h"
#include <stdlib.h>
#include <string.h>

typedef struct ENTREE_CODE
{
    char* code_op;
    int operande;
} ENTREE_CODE;

int indextab;
ENTREE_CODE tabCodeInt[5000];

ENTREE_CODE creerCode (const char* code,int op){
    ENTREE_CODE ent;
    ent.code_op = (char *)malloc(strlen(code)+2);
    strcpy(ent.code_op, code);
    ent.operande=op;
    return ent;
}

void genererCode(){
   
    for (int f=0;f<indextab;f++){
        printf("%s ",tabCodeInt[f].code_op);
        if(tabCodeInt[f].operande!=-1)
            printf("%d ",tabCodeInt[f].operande);
        printf("\n");
    }
}