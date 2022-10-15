// Menukar variable tanpa bantuan variabel

#include <iostream>

using namespace std;

int main(){
  int a = 12;
  int b = 24;

  cout << "Sebelum: a = " << a << " b = " << b << '\n'; 

  a = a + b - (b = a); // mengubah nilai a menjadi nilai b, semetara itu sebelum diubah menukar nilai b dengan nilai a terlebih dulu [ undefined behavior mungkin terjadi :) ]

  cout << "Sesudah: a = " << a << " b = " << b << '\n'; 
}
