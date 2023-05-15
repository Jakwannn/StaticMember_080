#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) { nim = pNim; /*Definisi Function*/ }
    static int getNim() { return nim; /*Definis Function*/ }
    mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
    id = ++nim;
}

void mahasiswa::printAll() {
    cout << "ID = " << id << endl;
    cout << "Nama + " << nama << endl;
    cout << endl;
}

int main() {
    mahasiswa mhs1(" Aditya Maulana ");
    mahasiswa mhs2(" Taufiq Fathoni ");
    mahasiswa::setNim(9);
    mahasiswa mhs3(" Naufal Dzakwan ");
    mahasiswa mhs4(" Yopang Difa ");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
       
    cout << "akses dari luar object = " << mahasiswa::getNim() << endl;
}