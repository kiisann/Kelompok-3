#include <iostream>
#include "kalender.cpp"
#include "Kabisat.cpp"
using namespace std;

int main(){
int bulan, tahun;

    cout << "==========================================" << endl;
    cout << "    Selamat datang di Program Kalender    " << endl;
    cout << "==========================================" << endl;
    cout << endl;  
    cout << "Masukkan tahun: ";
    cin >> tahun;
    cout << endl;
    cout << "Kalender Tahun "<< tahun << endl << endl;
    cout << "Pilih bulan: " << endl;
    cout << "1. Januari" << endl;
    cout << "2. Februari" << endl;
    cout << "3. Maret" << endl;
    cout << "4. April" << endl;
    cout << "5. Mei" << endl;
    cout << "6. Juni" << endl;
    cout << "7. Juli" << endl;
    cout << "8. Agustus" << endl;
    cout << "9. September" << endl;
    cout << "10. Oktober" << endl;
    cout << "11. November" << endl;
    cout << "12. Desember" << endl;
    cout << endl;
    cout <<"Pilihan Anda: ";
    cin >> bulan;

      if (bulan >= 1&& bulan <= 12){
        Kalender(bulan,tahun);
}else { 
cout << "Pilihan tidak valid, silahkan coba lagi." << endl;
      }
return 0;
}
