#include <iostream>

using namespace std;

int main()
{ 
    int angka, digit1, digit2, digit3 ,digit4, hasil;
    cout << "Silahkan input 4 digit angka: ";
    cin >> angka;

    digit1 = angka / 1000;
    digit2 = (angka % 1000) / 100;
    digit3 = (angka % 100) / 10;
    digit4 = angka % 10;
    hasil = digit1 + digit2 + digit3 + digit4;

    cout << "Hasil dari perhitungan: " << hasil << endl;

    return 0;
}