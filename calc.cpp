#include <iostream>

using namespace std;

void menu() {
    cout << "==============================\n";
    cout << "        Kalkulator C++        \n";
    cout << "==============================\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "5. Keluar\n";
    cout << "==============================\n";
}

int main() {
    int pilihan;
    double a, b, hasil;
    
    do {
        menu();
        cout << "Pilih operasi (1-5): ";
        cin >> pilihan;
        
        if (pilihan >= 1 && pilihan <= 4) {
            cout << "Masukkan angka pertama: ";
            cin >> a;
            cout << "Masukkan angka kedua: ";
            cin >> b;
        }
        
        switch (pilihan) {
            case 1:
                hasil = a + b;
                cout << "Hasil: " << hasil << endl;
                break;
            case 2:
                hasil = a - b;
                cout << "Hasil: " << hasil << endl;
                break;
            case 3:
                hasil = a * b;
                cout << "Hasil: " << hasil << endl;
                break;
            case 4:
                if (b != 0) {
                    hasil = a / b;
                    cout << "Hasil: " << hasil << endl;
                } else {
                    cout << "Error: Pembagian oleh nol tidak diperbolehkan!" << endl;
                }
                break;
            case 5:
                cout << "Terima kasih telah menggunakan kalkulator ini!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
        cout << "\n";
    } while (pilihan != 5);
    
    return 0;
}
