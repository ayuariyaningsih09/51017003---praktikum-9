#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

int panjang,lebar; //deklarasi variabel global

void input(); //deklarasi prototipe fungsi

void luas ()
{
int ls;//deklarasi variabel lokal
ls = panjang * lebar;
cout <<"luasnya adalah : "<<ls;
}

void keliling()
{
int kl;//deklarasi variabel lokal
kl = (2*panjang) + (2*lebar);
cout <<"keliling adalah: "<<kl;
}

void diagonal()
{
float dg; //deklarasi variabel lokal
dg = ((panjang*panjang) + (lebar*lebar));
cout<<"diagonalnya adalah : "<<dg;
}

void main()
{
 int pilih;
 do
{
clrscr();
cout<<"pilihlah -------> "<<endl;
cout<<"1. Luas persegi panjang\n";
cout<<"2. Keliling persegi panjang\n";
cout<<"3. Diagonal persegi panjang\n";
cout<<"4. SELESAI\n";
cout<<"Masukkan Pilihan anda : ";
cin>>pilih;

if (pilih = 4)
  input();      //pemanggil fungsi input
 switch(pilih)
{
 case 1 : luas();    //pemanggil funsi luas
          break;
 case 2 : keliling();    //pemanggil funsi keliling
          break;
 case 3 : diagonal();    //pemanggil funsi diagonal
          break;
 case 4 : cout<<"Terima kasih ...!";
}
   getch();
 } while (pilih !=4);
}

void input()
{

  cout<<"Masukkan nilai panjang : ";
  cin>>panjang;
  cout<<"Masukkan nilai lebar : ";
  cin>>lebar;
  return;
}

