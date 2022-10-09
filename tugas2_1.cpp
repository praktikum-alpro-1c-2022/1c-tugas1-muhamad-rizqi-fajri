// Menukar varibel dengan bantuan variabel

#include <iostream>

using namespace std;

int main(){
  int a = 12;
  int b = 24;
  int tmp;
  cout << "Sebelum: a = " << a << " b = " << b << '\n';
  
  tmp = a;
    a = b;
    b = tmp;

  cout << "Sesudah: a = " << a << " b = " << b << '\n';


  return 0;
}
