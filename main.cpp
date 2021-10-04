#include <iostream>
#include <string>
using namespace std;


void pakaiIfElse(int kode){
    if (kode == 1)
        printf("Anda memilih Ayam Goreng");
    else if (kode == 2)
        printf("Anda memilih Bebek Goreng");
    else if (kode == 3)
        printf("Anda memilih Lele Goreng");
    else if (kode == 4)
        printf("Anda tidak suka semua");
    else
        printf("Input anda salah");
}


void pakaiSwitchCase(int kode){
    switch(kode){
        case 1:
            printf("Anda memilih Ayam Goreng");
            break;
        case 2:
            printf("Anda memilih Bebek Goreng");
            break;
        case 3:
            printf("Anda memilih Lele Goreng");
            break;
        case 4:
            printf("Anda tidak suka semua");
            break;
        default:
            printf("Input anda salah");
    }
}


void soal1(){
    printf("--- Soal 1 ---\n");
    printf("1. Ayam Goreng\n2. Bebek Goreng\n3. Lele Goreng\n4. Tidak suka semua\n");
    printf("Masukkan kode: ");
    int kode;
    cin >> kode;

    // pakaiIfElse(kode);
    pakaiSwitchCase(kode);
}


void soal2(){
    printf("--- Soal 2 ---\n");
    printf("Masukkan umur: ");
    int umur;
    cin >> umur;
    cin.ignore();  // mengabaikan '\n' dari cin >> umur

    if (umur >= 18){
        printf("Masukkan status pendaftaran [terdaftar/belum terdaftar]: ");
        string statusPendaftaran;
        getline(cin, statusPendaftaran);

        if (statusPendaftaran == "terdaftar")
            printf("Anda berhak memilih");
        else if (statusPendaftaran == "belum terdaftar")
            printf("Status anda belum terdaftar");
        else
            printf("Input anda salah");
    }
    else {
        printf("Anda belum berhak memilih");
    }
}


int main(){
    // soal1();
    soal2();

    return 0;
}
