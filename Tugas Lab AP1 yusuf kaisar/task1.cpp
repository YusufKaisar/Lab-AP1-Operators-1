#include <iostream>

using namespace std;

int main()
{
    int angka;
    cout << "Silahkan input 4 digit angka: ";
    cin >> angka;

    angka = angka + 8;
    angka = angka / 3;
    angka = angka % 5;
    angka = angka * 5;

    cout << "Hasil dari perhitungan: " << angka << endl;

    return 0;
}