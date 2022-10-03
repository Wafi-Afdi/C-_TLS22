#include <iostream>
using namespace std;
int main(){
    int harga_mobil, harga_sekarang, tahun_mobil;
    cout << "Masukkan umur mobil : ";
    cin >> tahun_mobil;
    cout << "Masukkan harga mobil : ";
    cin >> harga_mobil;

    if(tahun_mobil == 1){
        cout << "Harga Sekarang : " << harga_mobil - (harga_mobil * 0.2);

    } 
    else {
        cout << "Harga sekarang : " << harga_mobil - (harga_mobil * 0.2) - ((tahun_mobil - 1) * (harga_mobil * 0.1));
    }
    return 0;
}