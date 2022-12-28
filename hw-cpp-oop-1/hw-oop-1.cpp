#include <iostream>
using namespace std;

class Fraction
{
private:
	int num;
	int den;
public:
	void Input()
	{
		cout << "Numerator:";
		cin >> num;
		cout << "Denominator:";
		cin >> den;
	}


	void OutPut()
	{
		cout << "Numerator = " << num << endl;
		cout << "Denominator = " << den << endl;
	}


	void Plus(int number)
	{
		cout << number << " " << num << "/" << den << endl;
	}


	void Minus(int number)
	{
		cout << num - (number * den) << "/" << den << endl;
	}


	void Multiple(int number)
	{
		cout << num * number << "/" << den << endl;
	}


	void Division(int number)
	{
		int newdonominator = den * number;
		bool ismay = true;


		for (int i = num; i != 0; i--)
		{
			if (num % i == 0 && newdonominator % i == 0)
			{
				cout << num / i << "/" << newdonominator / i << endl;
				ismay = false;
				break;
			}
		}


		if (ismay)
		{
			cout << num << "/" << newdonominator << endl;
		}
	}
};


int main()
{
	Fraction first;
	first.Input();
	first.Plus(9);

	cout << endl;
	first.Minus(6);

	cout << endl;
	first.Multiple(2);

	cout << endl;
	first.Division(4);
}