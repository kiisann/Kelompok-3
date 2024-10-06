#ifndef KALENDER
#define KALENDER
#include <iostream>
#include "Kabisat.cpp"
using namespace std;

bool tahunKabisat (int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

int hariDalamBulan(int bulan, int tahun) {
    switch (bulan) {
        case 1: return 31;
        case 2: return tahunKabisat(tahun) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return 0;
    }
}

int cariHariAwal(int bulan, int tahun) {
    int hari = 1, abad, th, bln, hariAwal;

    if (bulan == 1 || bulan == 2) {
        bulan += 12;
        tahun--;
    }

    abad = tahun / 100;
    th = tahun % 100;
    bln = bulan;

    hariAwal = (hari + 13 * (bln + 1) / 5 + th + th / 4 + abad / 4 + 5 * abad) % 7;

    return (hariAwal + 5) % 7;
}

#endif
