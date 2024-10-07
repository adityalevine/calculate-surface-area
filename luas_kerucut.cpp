#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double pi = 3.14159;
    double jari_jari, tinggi_sisi_miring, luas;

    cout << "Masukkan jari-jari alas kerucut: ";
    cin >> jari_jari;

    cout << "Masukkan tinggi sisi miring kerucut: ";
    cin >> tinggi_sisi_miring;

    luas = pi * jari_jari * (jari_jari + tinggi_sisi_miring);

    cout << "Luas permukaan kerucut: " << luas << endl;

    return 0;
}
