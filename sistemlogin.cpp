#include<iostream>
#include<string>
using namespace std;

int main(){
    string nama;
    string pass;
    string x;
    string y;
    x = "William";
    y = "Violalee9801";

  while(nama != x && pass != y)
  {
    cout << "Masukkan Username dan Password \n";
    cout << "Username: ";
    cin >> nama;
    cout << "Password: ";
    cin >> pass;
    if(nama != x && pass != y)
    {
        cout << "Maaf, apa yang anda masukkan itu salah!\n ";
    }
  }
    cout << "Selamat, Anda Berhasil Login ";
    
    return 0;
}