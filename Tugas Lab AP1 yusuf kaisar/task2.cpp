#include <iostream>

using namespace std;

int main()
{ 
    int angka, hasil = 0, digit, i = 1;
    cout << "Masukkan 6 digit angka (bebas): ";
    cin >> angka;

    while(angka > 0) {
        digit = angka % 10 ;
        digit += 2;
        hasil += (digit % 10) * i; 
        angka /= 10; 
        i *= 10; 
    }

    cout << "Hasil dari angka 6 angka tersebut: " << hasil << endl;
    
    return 0;
}