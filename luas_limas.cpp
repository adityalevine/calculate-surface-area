#include <iostream>
using namespace std;

int main() {
    double luas_alas, tinggi_sisi_miring, keliling_alas, luas;

    cout << "Masukkan luas alas limas: ";
    cin >> luas_alas;

    cout << "Masukkan keliling alas limas: ";
    cin >> keliling_alas;

    cout << "Masukkan tinggi sisi miring limas: ";
    cin >> tinggi_sisi_miring;


    luas = luas_alas + 0.5 * keliling_alas * tinggi_sisi_miring;

    cout << "Luas permukaan limas: " << luas << endl;

    return 0;
}
