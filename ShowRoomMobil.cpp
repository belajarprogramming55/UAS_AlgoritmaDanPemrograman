#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int MAX_MOBIL = 3;
    string merek[MAX_MOBIL], model[MAX_MOBIL];
    int tahun[MAX_MOBIL];
    double harga[MAX_MOBIL];
    int jumlah = 0;
    int pilihan;

    do {
        cout << "\n=== SHOWROOM MOBIL ===\n";
        cout << "1. Tambahkan data mobil\n";
        cout << "2. Tampilkan semua data mobil\n";
        cout << "3. Keluar dari showroom\n";
        cout << "Pilih Opsi (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
            if (jumlah >= MAX_MOBIL) {
                cout << "\nShowroom sudah penuh\n";
            }else {
                cout << "\n=== Tambahkan Data Mobil ===\n";
                cout << "Merek Mobil: ";
                cin >> merek[jumlah];
                cout << "Model Mobil: ";
                cin >> model[jumlah];
                cout << "Tahun Mobil: ";
                cin >> tahun[jumlah];
                cout << "Harga Mobil: ";
                cin >> harga[jumlah];

                jumlah++;
                cout << "\nData Mobil Sudah Ditambahkan.\n";
            }
            break;

            case 2:
            if (jumlah == 0) {
                cout << "\nBelum ada data showroom\n";
            }else {
                cout << "\n=== Daftar Mobil ===\n";
                cout << fixed << setprecision(0);

                cout << "\nNO | Merek        | Model       | Tahun     | Harga\n";
                cout << "-------------------------------------------------------\n";

                for (int i = 0; i < jumlah; i++) {
                       cout << left
                << setw(5) << i + 1
                << setw(15) << merek[i]
                << setw(15) << model[i]
                << setw(10) << tahun[i]
                << setw(15) << harga[i] << endl;
                }
            }
            break;

            case 3:
            cout << "\nKeluar dari showroom\n";
            break;

            default:
            cout << "\nPilihan tidak valid\n";
        }
    }while (pilihan !=3);
    return 0;
    
}