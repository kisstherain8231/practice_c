#include<stdlib.h>
#include<stdio.h>

#define Max  10;

struct List
{
    int Number;
    char Name[Max];
    struct  List * Next;
};

typedef struct List Node;
typedef Node * Link;


void Free_List(Link Head) 
{
    Link Pointer;

    while (Head != NULL)
    {
        Pointer = Head;
        Head = Head->Next;
        free(Pointer);
    }

}
/**
* 打印list 
*/
void Print_List() 
{
    Link Pointer;
    Pointer  = Head;

    while (Pointer != NULL) 
    {
        printf("##Input Data ##\n");
        printf("Data Number : %d\n", Pointer->Next);
        printf("Data Name : %s\n", Pointer->Name);
        Pointer = Pointer->Next;

    }
}


void main ()
{

    printf("%s\n", );


}



