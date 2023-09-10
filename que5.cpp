// Write a C++ Program to addition and subtraction of two values using Constructor.

#include<iostream>
using namespace std;
 class addsub
 {
 public:
 	int x,y;

 	addsub(int a, int b)
 	{
 		x=a;
 		y=b;
 		cout << "addition : " << x+y << endl;
 		cout << "substraction : " << x-y <<endl;
 	}
 };
 int main()
 {
    int a,b;
    cout << "enter value of a : ";
    cin >> a;
    cout << "enter value of b : ";
    cin >> b;
    addsub(a,b);
 	return 0;

 }
