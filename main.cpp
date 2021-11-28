#include "DLL.h"

int pilih_menu(){
    cout << "========== MENU ==========" <<endl;
    cout << "1. Menambah N data baru" <<endl;
    cout << "2. Menampilkan semua data" <<endl;
    cout << "3. menampilkan semua data dari data paling akhir ke data paling depan"<<endl;
    cout << "0. Exit"<<endl;
    cout << "Pilihan menu :";

    int input = 0;
    cin >> input;

    return(input);
}

void menu_satu(List &L){
    //Jika user memilih menu satu
    int x, i;
    infotype baru;
    cout << "Jumlah data yang akan ditambahkan :";
    cin >> x;
    i = 1;
    while(i<=x){
        cout << "Masukkan nama kelas baru :";
        cin >> baru.nama;
        cout << "Masukkan fakultas kelas baru :";
        cin >> baru.fakultas;
        cout << "Masukkan jumlah mahasiswa kelas baru :";
        cin >> baru.jumMhs;
        insert_last(L, create_new_element(baru));
        i++;
    }
}

int main(){
    int pilihan;
    char kembali;
    List daftar_kelas;

    create_list(daftar_kelas);
    pilihan = pilih_menu();
    while(pilihan!=0){
        switch(pilihan){
        case 1:
            menu_satu(daftar_kelas);
            break;
        case 2:
            show_all_data(daftar_kelas);
            break;
        case 3:
            show_all_data_reverse(daftar_kelas);
            break;
        }

        cout<<"Kembali ke menu utama? (Y/N) :";
        cin >> kembali;
        if(kembali == 'Y'){
            pilihan = pilih_menu();
        } else {
            pilihan = 0;
        }
    }

    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
    return 0;
}
