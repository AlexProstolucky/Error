#include <iostream>
using namespace std;

class Goods 
{
protected:
	int price = 0;
	int saleprice = 10;
	string name;
	string country;
	string color;
	string material;
	string weight;
	string statys;
	string type;
public:
	Goods() 
	{
		cout << "Firs constrycor";
	}

	Goods(int p, int sp, string name, string country, string color,
	string material, string weight, string statys,string type)
	{
		this->price = p;
		this->saleprice = sp;
		this->name = name;
		this->country = country;
		this->color = color;
		this->material = material;
		this->weight = weight;
		this->statys = statys;
		this->type = type;
		cout << "The good created:" << endl;
		cout << "Price --> " << p << " Sale price --> " << sp << endl;
		cout << "Name --> " << name << " Color --> " << color << endl;
		cout << "Country --> " << country << endl;
		cout << "Material --> " << material << " Weight --> " << weight << endl;
		cout << "Statys --> " << statys << " Type --> " << type;
	}
};

class Passengercar : public Goods
{
public:
	int number_seats;
private:
	Passengercar(int p, int sp, string name, string country, string color,
		string material, string weight, string statys, string type, int ns): Goods(p, sp, name, country, color, material, weight, statys, type)
	{
		this->number_seats = ns;
		cout << "Number of seats --> " << number_seats << endl;
	}
};

int main()
{
	Passengercar car(100, 150, "BMW", "Mexico", "Black", "Iron", "1 tona", "Sell", "Car", 4);
}