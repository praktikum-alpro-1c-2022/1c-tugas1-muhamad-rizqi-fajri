#include <string>
#include <iostream>

using namespace std;

int main(){
  string npm = "2210631170081",
         nama = "Muhamad Rizqi Fajri",
         kelas = "1C Informatika",
         hobi = "Tinkering",
         citaCita = "Jadi pilot Gundam";
  int    umur = 20;
  
  cout <<"############################################\n" <<
         "#             IDENTITAS DIRI               #\n" <<
         "############################################\n#\t\t\t\t\t   #\n" <<
         "# npm\t\t: " << npm << "\t\t   #"  << '\n' << 
         "# nama\t\t: " << nama << "\t   #"  << '\n' <<
         "# umur\t\t: " << umur <<  "\t\t\t   #" << '\n' <<
         "# kelas\t\t: " << kelas <<  "\t   #" << '\n' <<
         "# hobi\t\t: " << hobi <<  "\t\t   #" << '\n' <<
         "# cita-cita\t: " << citaCita <<  "\t   #" << '\n' << 
         "#\t\t\t\t\t   #\n############################################\n";

  return 0;
};
