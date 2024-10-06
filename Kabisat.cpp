#include <iostream>
using namespace std;

bool tahunKabisat (int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}
