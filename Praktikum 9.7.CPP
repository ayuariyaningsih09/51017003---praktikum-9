#include <iostream.h>
#include <conio.h>
void tukarAB(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"dalam fungsi tukar AB\n";
cout<<"nilai a="<<a<<"dan nilai b="<<b<<endl;
}

int main()
{
int a,b;
cout<<"masukkan nilai a: ";cin>>a;
cout<<"masukkan nilai b: ";cin>>b;
cout<<"\nnilai a dan b sebelum masuk fungsi tukarAB: \n";
cout<<"nilai a = "<<a<<" dan b "<<b<<endl<<endl;
getch();
return(0);
}
