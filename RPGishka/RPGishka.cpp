#include <iostream>
#include <Windows.h>



void Sesuriti() {

	std::string CityPass = "can be used to enter the city ";
	srand(time(0));
	int ticket = 1 + rand() % 100;
	int pass = 0;
	int gold = 1 + rand() % 1000;
	int GuardGreed = 1 + rand() % 100;
	int Appearance = 1 + rand() % 10;
	int minPrice = 100;
	int maxPrice = 300;
	if (Appearance > 8)
	{
		minPrice -=(minPrice / 100 * 20);
		maxPrice -=(maxPrice / 100 * 20);
	}
	else if (Appearance > 5 && Appearance < 8)
	{
		minPrice = minPrice;
		maxPrice = maxPrice;
	}
	else
	{
		minPrice += (minPrice / 100 * 20);
		maxPrice += (maxPrice / 100 * 20);
	}


	int GuardBribe = minPrice + rand() % maxPrice;

	if (ticket > 50)
	{
		pass = 1;
	}
	else
	{
		pass = pass;
	}


	if (pass == 1)
	{
		std::cout << "you have entered the city";
	}
	else
	{
		if (GuardGreed < 30)
		{
			std::cout << "You can't give a bribe and enter the city";
		}
		else
		{


			std::cout << "You can give a bribe\nYours Gold is " << gold << ".\nDo you want to pay a bribe?\nThe cost of the bribe is "<< GuardBribe;
			std::string G;
			std::cout << "\nChoose yes or no\n";
			std::cin >> G;

			if (G=="Yes") 
				{
				if (gold >= GuardBribe)
					{
					gold -= GuardBribe;
					std::cout << "You have entered the city";
					}
				}
			else if (G=="No") 
			{
				std::cout << "You don't have enough money\nYou didn't enter the city";
			}
			else
			{
				  
			}
		}
		
	}
}
int main()
{
	setlocale(LC_ALL, "");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Sesuriti();

	//srand(time(0));

	//int strength = 100;// сила
	//int basedamage = 50;// базовый урон

	//int critchance = 1 + rand() % 100;// шанс крита

	//int damagemultiplier = 2;// множитель урона от крита
	//int armor = 30;// броня
	//int Phisresist = armor / 1.5;// резист к физическому урону
	//int dodgechance = 1 + rand() % 100;// шанс уклонения

	//int damager = strength + basedamage;
	//int defender = 5;
	//int dodge = 10;
	//int crit = 15;


	//int totalDamage = basedamage + strength;
	//int finalDamage = totalDamage - (totalDamage / 100 * Phisresist);
	//int hp = 500;
	//int finalhp;

	/////////////////

	//if (dodgechance < dodge)
	//{
	//	finalhp = hp;
	//}
	//else
	//{
	//	if (critchance < crit)
	//	{
	//		finalhp = hp - (finalDamage * 2);
	//	}
	//	else
	//	{
	//		finalhp = hp - (finalDamage);

	//	}

	//}

	//std::cout << finalDamage << " HP Orc = " << finalhp << "/" << hp;




}