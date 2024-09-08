#include <iostream>
using namespace std;

class Car
{

private:
	string name;
	string brand;
	int model;

public:
	void getData()
	{
		cout << "enter the name of car"<<endl;
		cin >> name;
		cout << "enter the Brand of car"<<endl;
		cin >> brand;
		cout << "enter the model of car"<<endl;
		cin >> model;
	}
	void putData()
	{
		cout << "Name of Car is: " << name << endl;
		cout << "Brand of Car is: " << brand << endl;
		cout << "Model of Car is: " << model << endl;
	}
};

int main()
{

	Car car1;
	car1.getData();
	
	Car car2;
	car2.getData();
	
	Car car3;
	car3.getData();
	
	car1.putData();
	
	car2.putData();
	
	car3.putData();

	

	return 0;
}
