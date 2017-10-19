#ifndef _ARRAYLIST
#define _ARRAYLIST


typedef struct
{
    int size;
    int rSize;
    void* pElement;
}arraylist;

#endif // _ARRAYLIST

arraylist* arrayList_new(void);
int al_add(arraylist* pArray,void* element);
