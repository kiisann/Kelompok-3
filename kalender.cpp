void Kalender(int bulan, int tahun) {
    int jumlahHari = hariDalamBulan(bulan, tahun);
    int hariAwal = cariHariAwal(bulan, tahun);

    string namaBulan[] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

    cout << endl;
    cout << "Kalender " << namaBulan[bulan - 1] << " " << tahun << endl;
    cout << "Sn Sl Rb Km Jm Sb Mg" << endl;

    for (int i = 0; i < hariAwal; i++) {
        cout << "   ";
    }

    for (int hari = 1; hari <= jumlahHari; hari++) {
        if (hari < 10) {
            cout << " " << hari << " ";
        } else {
            cout << hari << " ";
        }

        if ((hari + hariAwal) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}
