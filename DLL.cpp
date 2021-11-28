#include "DLL.h"

void create_list(List &L){
    //menginitialisasi List
    L.first = NULL;
    L.last = NULL;
}

adr create_new_element(infotype info){
    //membuat node baru dengan input infotype
    adr P = new node;
    P->info = info;
    P->next = NULL;
    P->prev = NULL;

    return(P);
}

void insert_last(List &L, adr P){
    //menambah node ke list di paling belakang
    if(L.first == NULL && L.last == NULL){
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}

void show_all_data(List L){
    //menampilkan seluruh isi list
    adr p = L.first;
    cout << "--Menampilkan data--" << endl;
    while(p!=NULL){

        //ubah bagian ini sesuai jenis infotype
        cout << "Nama kelas :"<< p->info.nama <<endl;
        cout << "Fakultas :"<< p->info.fakultas <<endl;
        cout << "Jumlah mahasiswa :"<< p->info.jumMhs <<endl;

        cout << endl;
        p = p->next;
    }
    cout << "--Data selesai ditampilkan--" <<endl;
}

void show_all_data_reverse(List L){
    //menampilkan seluruh isi list
    adr p = L.last;
    cout << "--Menampilkan data dari belakang--" << endl;
    while(p!=NULL){

        //ubah bagian ini sesuai jenis infotype
        cout << "Nama kelas :"<< p->info.nama <<endl;
        cout << "Fakultas :"<< p->info.fakultas <<endl;
        cout << "Jumlah mahasiswa :"<< p->info.jumMhs <<endl;

        cout << endl;
        p = p->prev;
    }
    cout << "--Data selesai ditampilkan--" <<endl;
}
