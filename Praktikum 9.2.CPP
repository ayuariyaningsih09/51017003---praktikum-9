#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
int persegi (int);

double getRadius();
double square(double);

int main()
{
		const double PI=3.14159;
      double rad;
//cout <<fixed<<showpoint<<setprecision(2);
		cout << "program ini untuk menghitung luas lingkaran. \n";
      rad = getRadius();
      cout << "Luasnya adalah: "<< PI*square(rad) << endl;
      getch();
      return 0;
}

double getRadius()
{
	double radius;
   cout << "masukkan jari jari lingkaran : ";
   cin>> radius;
   return radius;
}

double square(double number)
{
	return number *number;
}
