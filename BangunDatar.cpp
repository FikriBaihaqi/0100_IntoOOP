#include <iostream>
using namespace std;

class bangunDatar{
    //akses modifier
    private:
        float panjang, Lebar;
    public:
        float luas;

        void input () { // methode input persegi panjang 

            cout << "Masukan Panjangnya = ";
            cin >> panjang;
            cout << "Masukan Lebarnya = ";
            cin >> Lebar;
        }

        float hitungLuas (){
            return panjang * Lebar;
        }
};