#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, int> pemilih;
    int totalpemilih;

    cout << "=== SISTEM VOTING MEREK MOBIL ===" << endl;
    cout << "Masukkan Jumlah Pemilih: ";
    cin >> totalpemilih;
    cin.ignore();

    for (int i = 1; i <= totalpemilih; i++) {
        string merek;
        cout << "Pemilih ke-" << i << ", Pilih Merek mobil: ";
        getline(cin, merek);
        pemilih[merek]++;
    }
    cout << "\n=== Hasil VOTING ===" << endl;
    for (auto& pemilih : pemilih) {
        cout << pemilih.first << ": " << pemilih.second << " Suara" << endl;
    }
    return 0;
}