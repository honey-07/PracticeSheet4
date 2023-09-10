// Write a C++ program (using function overloaded) to sort 5 integer values, or 5 long values, or 5 double values.
#include<iostream>
using namespace std;

class overload
{
public:
	void sort(int n[5])
		{
			int temp;
		for (int i = 0; i < 5; i++)
		{
			for (int j = i+1; j < 5; ++j)
			{
				if (n[i] > n[j])
				{
					temp=n[i];
					n[i]=n[j];
					n[j]=temp;
				}
			}
			
		}
		cout << "integer sorting : " << endl;
		for (int i = 0; i < 5; ++i)
		{
			
			cout << n[i] << endl;
		}

	}
	void sort(long n[5])
	{
		long temp;
		for (int i = 0; i < 5; i++)
		{
			for (int j = i+1; j < 5; ++j)
			{
				if (n[i] > n[j])
				{
					temp=n[i];
					n[i]=n[j];
					n[j]=temp;
				}
			}
		}
		cout << "long sorting : " << endl;
		for (int i = 0; i < 5; ++i)
		{
			
			cout << n[i] << endl;
		}

		
	}
	void sort(double n[5])
	{
		double temp;
		for (int i = 0; i < 5; i++)
		{
			for (int j = i+1; j < 5; ++j)
			{
				if (n[i] > n[j])
				{
					temp=n[i];
					n[i]=n[j];
					n[j]=temp;
				}
			}
		}

		cout << "double sorting : " << endl;
		for (int i = 0; i < 5; ++i)
		{
			
			cout << n[i] << endl;

		}
	}
};
int main()
{
	overload a;
	int arr1[5] = {5,3,7,1,4};
	long arr2[5] = {54,38,79,31,4};
	double arr3[5] = {5.6,3.4,7.0,1.6,4.9};

	a.sort(arr1);
	a.sort(arr2);
	a.sort(arr3);
return 0;
}
