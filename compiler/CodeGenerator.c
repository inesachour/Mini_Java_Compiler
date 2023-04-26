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
    FILE* file = fopen("D:\\Users\\Ines\\StudioProjects\\mini_java_compiler\\compiler\\code_generator.txt", "w"); 
     if (!file) {
        printf("Error: Could not open file.");
    }
    for (int f = 0; f < indextab; f++) {
        fprintf(file, "%s ", tabCodeInt[f].code_op);
        if (tabCodeInt[f].operande != -1)
            fprintf(file, "%d ", tabCodeInt[f].operande);
        fprintf(file, "\n");
    }
    fclose(file); 
}