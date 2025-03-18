#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Harga bensin per liter
    const double harga_pertalite = 7000;
    const double harga_pertamax = 9000;
    
    // Variabel untuk input
    string nama_pelanggan, jenis_bensin;
    double jumlah_liter, total_harga;

    // Input dari pengguna
    cout << "Masukkan nama pelanggan: ";
    getline(cin, nama_pelanggan);
    
    cout << "Masukkan jenis bensin (pertalite/pertamax): ";
    cin >> jenis_bensin;

    cout << "Masukkan jumlah liter: ";
    cin >> jumlah_liter;

    // Menghitung total harga berdasarkan jenis bensin
    if (jenis_bensin == "pertalite") {
        total_harga = jumlah_liter * harga_pertalite;
    } else if (jenis_bensin == "pertamax") {
        total_harga = jumlah_liter * harga_pertamax;
    } else {
        cout << "Jenis bensin tidak valid!" << endl;
        return 1; // Keluar dari program dengan kode error
    }

    // Menampilkan struk pembayaran
    cout << "\n===== STRUK PEMBELIAN =====" << endl;
    cout << "Nama Pelanggan : " << nama_pelanggan << endl;
    cout << "Jenis Bensin   : " << jenis_bensin << endl;
    cout << "Jumlah Liter   : " << fixed << setprecision(2) << jumlah_liter << " L" << endl;
    cout << "Total Harga    : Rp" << fixed << setprecision(0) << total_harga << endl;
    cout << "===========================" << endl;

    return 0;
}
