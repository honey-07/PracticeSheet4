// Write a C++ program to make inline function to find odd/even.

#include<iostream>
using namespace std;
inline void check(int num)

	{
		if(num % 2 == 0)
			cout << "is even";
		else
			cout << "is odd";
	}																																															

int main()
{
	int n;
	cout << "enter any integer : ";
	cin >> n;

	check(n);
return 0;
	
}
