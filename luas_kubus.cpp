#include <iostream>
using namespace std;

int main() {
    double sisi, luas;

    cout << "Masukkan panjang sisi kubus: ";
    cin >> sisi;

    luas = 6 * (sisi * sisi);

    cout << "Luas permukaan kubus: " << luas << endl;

    return 0;
}
