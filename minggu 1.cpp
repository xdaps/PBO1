#include <iostream>
using namespace std;

int main() {
    int n, m; // n adalah jumlah mahasiswa, m adalah jumlah mata pelajaran
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;
    cout << "Masukkan jumlah mata pelajaran: ";
    cin >> m;
    
    double nilai[n][m]; // Array 2 dimensi untuk menyimpan nilai
    double total[m] = {0}; // Array untuk menyimpan total nilai setiap mata pelajaran
    
    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai untuk mahasiswa ke-" << i + 1 << ":\n";
        for (int j = 0; j < m; j++) {
            cout << "Mata pelajaran ke-" << j + 1 << ": ";
            cin >> nilai[i][j];
            total[j] += nilai[i][j]; // Menambahkan nilai ke total mata pelajaran
        }
    }
    
    cout << "Rata-rata nilai untuk setiap mata pelajaran:\n";
    for (int j = 0; j < m; j++) {
        double rata_rata = total[j] / n;
        cout << "Mata pelajaran ke-" << j + 1 << ": " << rata_rata << endl;
    }
    
    return 0;
}

