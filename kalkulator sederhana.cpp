#include <iostream>
using namespace std;

int main(){
    double hasil;
    int pilih;
    double angka1, angka2;

    cout << "========= KALKULATOR SEDERHANA =========" << endl;
    cout << "1. Pertambahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Pilihan anda: ";
    cin >> pilih;

    if(pilih >= 1 && pilih <= 4){
        cout << "Masukkan angka pertama: ";
        cin >> angka1;
        cout << "Masukkan angka kedua: ";
        cin >> angka2;
    }

    if(pilih == 1){
        hasil = angka1 + angka2;
        cout << "Hasilnya adalah: " << hasil << endl;
    }
    else if(pilih == 2){
        hasil = angka1 - angka2;
        cout << "Hasilnya adalah: " << hasil << endl;
    }
    else if(pilih == 3){
        hasil = angka1 * angka2;
        cout << "Hasilnya adalah: " << hasil << endl;
    }
    else if(pilih == 4){
        if (angka2 != 0){
            hasil = angka1 / angka2;
            cout << "Hasilnya adalah: " << hasil << endl;
        } else {
            cout << "Error: Tidak bisa dibagi dengan 0!" << endl;
        }
    }
    else {
        cout << "Inputan gagal, pilihan tidak valid!" << endl;
    }

    return 0;
}
