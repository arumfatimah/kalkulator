#include <iostream> 
using namespace std; 

int main() {
    
    double angka1, angka2, hasil;
    char operasi;

    
    cout << "Kalkulator Sederhana" << endl;
    cout << "Masukkan dua angka: ";
    cin >> angka1 >> angka2; 

   
    cout << "Pilih operasi (+, -, *, /): ";
    cin >> operasi; 

    
    switch (operasi) {
        case '+':
            hasil = angka1 + angka2;
            break;
        case '-':
            hasil = angka1 - angka2; 
            break;
        case '*':
            hasil = angka1 * angka2; 
            break;
        case '/':
         
         
            if (angka2 != 0) {
                hasil = angka1 / angka2; 
                
            } else {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
                return 1; 
                
            }
            break;
        default:
            cout << "Operasi tidak valid!" << endl; 
            return 1;
    }

    
    cout << "Hasil: " << hasil << endl;

    return 0; 