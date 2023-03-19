#include <iostream>
#include <string>

using namespace std;

string formattime(int waktu) 
{
    int jam, menit, detik;
    char timeString[9]; 
    
    jam = waktu / 3600;
    menit = (waktu % 3600) / 60;
    detik = waktu % 60;
    
    sprintf(timeString, "%02d:%02d:%02d", jam ,menit ,detik);

    return string(timeString); 
}

int main() 
{
    int waktu;

    cout << "Masukkan waktu dalam detik: ";
    cin >> waktu;
    string formattedtime = formattime(waktu);
    cout << "Maka waktu anda selama: " << formattedtime << endl;

    return 0;
}