#include <iostream>
using namespace std;

int pokok(int jam_kerja) {
    int gaji_pokok_per_jam = 7500;
    return (jam_kerja <= 8) ? jam_kerja * gaji_pokok_per_jam : 8 * gaji_pokok_per_jam;
}

int lembur(int jam_kerja) {
    int gaji_pokok_per_jam = 7500;
    if (jam_kerja > 8) {
        return (jam_kerja - 8) * gaji_pokok_per_jam * 1.5;
    } else {
        return 0;
    }
}

int makan(int jam_kerja) {
    if (jam_kerja >= 9) {
        return 10000;
    } else {
        return 0;
    }
}

int transport(int jam_kerja) {
    if (jam_kerja >= 10) {
        return 13000;
    } else {
        return 0;
    }
}

int main() {
    string NIP, nama;
    int jam_kerja;

    cout << "Masukkan NIP: ";
    cin >> NIP;
    cout << "Masukkan Nama: ";
    cin >> nama;
    cout << "Masukkan Jumlah Jam Kerja: ";
    cin >> jam_kerja;

    int gaji_pokok = pokok(jam_kerja);
    int gaji_lembur = lembur(jam_kerja);
    int uang_makan = makan(jam_kerja);
    int uang_transport = transport(jam_kerja);

    cout << "\nNIP: " << NIP << endl;
    cout << "Nama: " << nama << endl;
    cout << "Gaji Pokok: Rp. " << gaji_pokok << endl;
    cout << "Gaji Lembur: Rp. " << gaji_lembur << endl;
    cout << "Uang Makan: Rp. " << uang_makan << endl;
    cout << "Uang Transport: Rp. " << uang_transport << endl;

    return 0;
}
