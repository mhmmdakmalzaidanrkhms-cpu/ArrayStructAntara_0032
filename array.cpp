#include <iostream>
using namespace std;

int main() {

    int dataku[5] = {10, 20, 30, 40, 50};

    int datamu[5];



    cout << "Isi data kedua : " << dataku[1] << endl;

    dataku[1] = 200;
    cout << "Isi data kedua setelah diubah : " << dataku[1] << endl;


    cout << "Isi data pertama : ";
    cin >> datamu[0];
    cout << "Isi data kedua : ";
    cin >> datamu[1];
    cout << "Isi data ketiga : ";
    cin >> datamu[2];
    cout << "Isi data keempat : ";
    cin >> datamu[3];
    cout << "Isi data kelima : ";
    cin >> datamu[4];
    cout << endl; 

    
    //
    cout << "data pertama : " << datamu[0] << endl;
    cout << "data kedua : " << datamu[1] << endl;
    cout << "data ketiga : " << datamu[2] << endl;
    cout << "data keempat : " << datamu[3] << endl;
    cout << "data kelima : " << datamu[4] << endl;
    cout << endl;

    cout << "Input Array Menggunakan for" << endl;
    //
    for (int i = 0; i <= 4; i++)
    {
        cout << "Isi data ke-" << i + 1 << " : ";
        cin >> datamu[i];
    }
    cout << endl;


    cout << "Tampilkan data array menggunakan for" << endl;
    //
    for (int i = 0; i <= 4; i++)
    {
        cout << "data ke-" << i + 1 << " : " << datamu[i] << endl;
    }   

}