// 02_02_Comp_Start.cpp 
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
	// Base Entree class
	class Entree
	{
	protected:
		char _entree[100];
	public:
		Entree()
		{
			cout << "\nPick an main dish of a Hotdog\nPizza\nHamburger\n" << endl;
			strcpy_s(_entree, "Hotdog");
		}
		const char* getEntree()
		{

			return _entree;
		}

	};


	// Base Side class
	class Side
	{
	protected:
		char _side[100];
	public:
		Side()
		{
			cout << "\nPick a side of french fries\napple slices\ncoleslaw" << endl;
			
			strcpy_s(_side,"apple slices");
		}
		char* getSide()
		{
			return _side;
		}
	};

	class Drink
	{
	protected:
		string drink;
		char _drink[100];
	public:
		Drink()
		{
			cout << "\nPick a drink of Soda, Water, or Juice" << endl;
			strcpy_s(_drink, "Soda of your choice");
			//getline(cin, drink); allowing for future delvelopment of the program to get user input
		}
		char* getDrink()
		{
			return _drink;
		}

	};
	//inheritance class MealCombo that contains a drink, side, entree
	class MealCombo :public Drink, public Side, public Entree {
		protected:
			string meal;
			char _mealCombo[100];
	public:
		MealCombo () {
			cout << "Your meal contiains" << endl;
			strcpy_s(_mealCombo, "A hotdog, apple slices, a soda");
		

		}
		char* getMeal() {
			return _mealCombo;
		}
	};

	int main() {
		std::stringstream ss; //creating a string stream for all char into one
		MealCombo mc1; //object meal combo
		ss << (mc1.getMeal()); //String stream for get meal to drive to console
		std::string s = ss.str();
		cout << s << endl; //print statement

	}
	

// Complex MealCombo object that contains an Entree, a Side and a Drink object