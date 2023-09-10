// Create a class employee with name, salary, age as member, use get_data() and show() functions. Display details of 3 manager employees
#include<iostream>
using namespace std;

class employee
{
public:
	string name;
	int salary,age;
		void get_data()
		{
			cout << "Enter employee name : ";
			cin >> name;
			cout << "Enter employee salary : ";
			cin >> salary;
			cout << "Enter employee age : ";
			cin >> age;

		}
		void show()
		{
			cout << "name : " << name << endl;
			cout << "salary : " << salary << endl;
			cout << "age : "<< age <<endl;

		}

};
int main()
{
	employee e1,e2,e3;
	e1.get_data();
	e2.get_data();
	e3.get_data();
	e1.show();
	e2.show();
	e3.show();
	return 0;
}
