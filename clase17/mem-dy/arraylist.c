#include "arraylist.h"
#define R_SIZE_TAM 10
#include <stdio.h>
#include <stdlib.h>

arraylist* arrayList_new(void)
{
    arraylist* pArray = NULL;
    pArray = malloc(sizeof(arraylist));
    if(pArray != NULL)
    {
        pArray->size =0;
        pArray->rSize =R_SIZE_TAM;
        pArray->pElement = malloc(sizeof(void*)*R_SIZE_TAM);
    }
    return pArray;
}


int al_add(arraylist* pArray,void* element)
{
    int retorno = 1;
    if(pArray->size < pArray->rSize)
    {
        *(pArray->pElement+pArray->size) = element;
        pArray->size ++;
        retorno 0;
    }
    return retorno;
}
