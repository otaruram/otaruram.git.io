#include <iostream>

using namespace std;

int main()
{
    cout << "Program perhitungan luas persegi : " << endl;
    cout << "Masukan sisi : " ;
    int sisi ;
    cin >> sisi ;
    int luas = sisi * sisi ;
    cout << "Program luas persegi : " << luas << endl;
    cout << "Program perhitungan persegi panjang : " << endl ;
    cout << "Masukan panjang dan lebar : " ;
    int p, l ;
    cin >> p >> l;
    int luaspp = p * l;
    cout << " Luas persegi panjang  : " << luaspp << endl;
    int r ;
    float phi;
    cout << "Masukan jari-jari : ";
    cin >> r ;
    phi = 22/7;
    cout << "Hasil Luas Lingkarana : " <<phi*r*r <<endl;
    return 0;

}
