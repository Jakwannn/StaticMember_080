#include <iostream>
using namespace std;


class buku
{
    string judul;

public:
    buku setJudul(string Judul)
    {
        this->judul = judul;
        return *this; //chain function
    }
    string getJudul()
    {
        return this->judul;
    }
} bukunya;
int main()
{
    bukunya.setJudul("Matematika");
    cout << bukunya.getJudul();
    cout << bukunya.setJudul("Matemtika").getJudul(); //chain function calls
    return 0;
}
