#include <iostream>
using namespace std;

int main(){
int bulan, tahun;

  while (true){
    cout << endl;  
    cout << "Masukkan tahun: ";
    cin >> tahun;

    while (true){
      cout << endl;
      cout <<"Kalender Tahun "<< tahun << endl;
      cout <<"Pilih bulan: " << endl;
      cout <<"1. Januari" << endl;
      cout <<"2. Februari" << endl;
      cout <<"3. Maret" << endl;
      cout <<"4. April" << endl;
      cout <<"5. Mei" << endl;
      cout <<"6. Juni" << endl;
      cout <<"7. Juli" << endl;
      cout <<"8. Agustus" << endl;
      cout <<"9. September" << endl;
      cout <<"10. Oktober" << endl;
      cout <<"11. November" << endl;
      cout <<"12. Desember" << endl;
      cout <<"0. Keluar" << endl;
      cout <<"\nPilihan Anda: " << endl;
      cin >> bulan;

      if (bulan == 0){
        break;
}
return 0;
