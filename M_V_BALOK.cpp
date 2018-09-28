/*
  PROGRAM PENGHITUNG LUAS & VOL BALOK
  CREATED		 : ASEP DEDI RUKMANA
  KELAS - NIM 	 : 12.1D.03 - 12182876
*/

#include "iostream.h"
#include "conio.h"
#include "Windows.h"

main(){
 int p,l,t;
 system("color 30");
 cout<<"Program Penghitung VOL & LUAS BALOK \n";

 //proses Input
 cout<<"\nMasukan Nilai Panjang: ";
 cin>>p;
 cout<<"Masukan Nilai Lebar  : ";
 cin>>l;
 cout<<"Masukan Nilai Tinggi : ";
 cin>>t;

 //Proses Perhitungan
 float vol;
 vol=p*l*t;
 float luas;
 luas=(2*p*l)+(2*p*t)+(2*l*t);

 //Proses Output
 cout<<"Volume Balok   = "<<vol<<endl;
 cout<<"Luas Permukaan = "<<luas<<endl;
 getch ();
}




