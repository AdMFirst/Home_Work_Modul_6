#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED
#include <iostream>

using namespace std;

//konstrukti double linked list
typedef struct kelas infotype;
typedef struct node *adr;

struct kelas{
    //nim ********54 nim ke 9 = 5, di mod 5 = 0. berkaitan dengan kampus
    string fakultas, nama;
    int jumMhs;
};
struct node{
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};


void show_all_data_reverse(List L);
void show_all_data(List L);
void insert_last(List &L, adr P);
adr create_new_element(infotype info);
void create_list(List &L);

#endif // DLL_H_INCLUDED
