#include <iostream.h>
#include <conio.h>
#include <math.h>

int hitung (int x, int y)

{
int ls;
ls = x*y;
return (ls);
}

void main()
{
int pilih;
int panjang,lebar ,alas,tinggi,sisi;
float luas;
do
{
clrscr();
cout<<"pilihlah _ _ _ _ _ _ _> "<<endl;
cout<<"1. Luas persegi panjang \n";
cout<<"2. Luas segitiga  \n";
cout<<"3. Luas bujur sangkar \n";
cout<<"4. selesai \n";
cout<<"masukkan pilihan anda : ";
cin>> pilih;

switch (pilih)
{
case 1:
cout<<"masukan nilai panjang : ";
cin>>panjang;
cout<<"masukan nilai lebar : ";
cin>>lebar;
luas=hitung(panjang,lebar);
break;

case 2:
cout<<"masukan nilai alas : ";
cin>>alas;
cout<<"masukan nilai tinggi : ";
cin>>tinggi;
luas=hitung(alas,tinggi);
break;

case 3:
cout<<"masukan nilai sisi : ";
cin>>sisi;
luas=hitung(sisi,sisi);
break;

case 4:
cout<<"terima kasih......."; }

if (pilih =4)
cout<<"luasnya adalah : "<<luas;

getch(); }
while (pilih !=4);
}






