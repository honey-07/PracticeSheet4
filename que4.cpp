/*Create a function power() to raise a number m to power n. the function takes a double value for m and int value for n, and returns the result correctly. 
Use the default value of 2 for n to mke the function calculate squares when this argument is omitted */

#include<iostream>
using namespace std;

class calculate
{
public:
	 double power(double m, int n=2)
	{
		double result=1.0;
		for (int i = 1; i <= 2; i++)
		{
			result = result * m;
		}
		return result;
	}
	int square(int n)
	{
		int sq=n*n;
		return sq;
	}
};
int main()
{
	calculate a;
	int n=3,sq;
	double result;
	result=a.power(5.5);
	sq=a.square(n);
		cout<<"power is : "<< result;
		cout<<"square is : "<<sq;
 
	return 0;
}
