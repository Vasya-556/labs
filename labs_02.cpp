// Lab_02.cpp
// < Кобрин Василь >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 3
#include <iostream>
#include <cmath>

using namespace std;

int main()

{
 double x; 
 double z1; 
 double z2;
 
 cout << "x = "; cin >> x;
 
 z1 = ((sin(2*x))+(sin(5*x))-(sin(3*x)))/((cos(x))+1-(pow(sin(2*x),2)*2*x));
 

 cout << "z1 = " << z1 << endl;
 cout << "z2 = " << z2 << endl;
 
 cin.get();
 return 0;
}
