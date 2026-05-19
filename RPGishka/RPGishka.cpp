#include <iostream>
#include <Windows.h>

using namespace std;

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
			std::cout << "You can't give a bribe and enter the city\n The guard called for help";
		}
		else
		{


			std::cout << "You can give a bribe\nYours Gold is " << gold << ".\nDo you want to pay a bribe?\nThe cost of the bribe is "<< GuardBribe;
			std::string G;
			std::cout << "\nChoose yes or no\n";
			while (G != "Yes" || G != "No") {

				std::cin >> G;

				if (G=="Yes") 
					{
					if (gold >= GuardBribe)
						{
						gold -= GuardBribe;
						std::cout << "You have entered the city";
						}
					else
					{
						std::cout << "You don't have money";
					}
					}
				else if (G=="No") 
				{
					std::cout << "You don't have enough money\nYou didn't enter the city";
				}
				else
				{
					std::cout << "Incorect input\nChoose yes or no\n";
					
				}

			} 

		}
		
	}
}

void Strategy() 
{
	struct NPC {
		string Name;
		int HP;
		int DMG;
	};

	NPC m[4];

	m[0].Name = "Sword";
	m[0].HP = 75;
	m[0].DMG = 15;

	m[1].Name = "Crossider";
	m[1].HP = 65;
	m[1].DMG = 20;

	m[2].Name = "Archer";
	m[2].HP = 50;
	m[2].DMG = 25;

	m[3].Name = "Spearman";
	m[3].HP = 40;
	m[3].DMG = 30;


	

	NPC PlayerHero;
	NPC Enemy;

	string answer;
	string answer2;
	string Hero;
		cout << "Pick your character\n1 Swordsman		2 Crossider 	3 Archer	4 Spearman\n";
	
	
		cin >> Hero;

		if (Hero == "1") {
			cout << "You choosed a Swordsman\n";
			PlayerHero = m[0];
		}
		else if (Hero == "2") {
			cout << "You shoosed a Crossider\n";
			PlayerHero = m[1];
		}
		else if (Hero == "3") {
			cout << "You choosed an Archer\n";
			PlayerHero = m[2];
		}
		else if (Hero == "3") {
			cout << "You choosed an Spearman\n";
			PlayerHero = m[3];
		}
		else {
			cout << "incorect input\n Pick your character\n1 Swordsman		2 Crossider		3 Archer	4 Spearman\n";
		}
	
	cout << "Congratulations, you got your first hero\nYou can start your adventure or do it later\n1 Start		2 Later\n";

		cin >> answer;
		if (answer == "1") {
			cout << "You started your first adventure!\n";
		}
		else if (answer == "2") {
			cout << "You not stared your adventure\n";
		}
		else {
			cout << "Incorect input\nYou can start your adventure or do it later\n1 Start		2 Later\n";
		}
	cout << "You traveled to the kingdom of Larion through the forest and encountered enemies along the way.\n";
	srand(time(0));
	int r = rand() % 2;
	Enemy = m[r];

	//for (int i = 0; i < size(Player);i++) {
	
	if (PlayerHero.Name == m[0].Name && Enemy.Name == m[2].Name || PlayerHero.Name == m[0].Name && Enemy.Name == m[3].Name) {
		PlayerHero.DMG = m[0].DMG * 1.5;
		if (Enemy.Name == m[2].Name) 
		{
			cout << "Your damage is reduced by 50% vs Archer\n";
		}
		else 
		{
			cout << "Your damage is reduced by 50% vs Spearman\n";
		}
	}
	else if (PlayerHero.Name == m[1].Name && Enemy.Name == m[0].Name) {
		PlayerHero.DMG = m[1].DMG * 1.5;
		cout << "Your damage is increased by 50% vs Swordsman\n";

	}
	else if (PlayerHero.Name == m[2].Name && Enemy.Name == m[1].Name || PlayerHero.Name == m[2].Name && Enemy.Name == m[3].Name) {
		PlayerHero.DMG = m[2].DMG * 1.5;
		if (Enemy.Name == m[3].Name) 
		{
			cout << " Your Damage is increased by 50% vs Spearman\n";
		}
		else
		{
			cout << " Your Damage is increased by 50% vs Crossider\n";
		}
	}
	else if (PlayerHero.Name == m[3].Name && Enemy.Name == m[1].Name || PlayerHero.Name == m[3].Name && Enemy.Name == m[2].Name) {
		cout << "Enemy damage is increased by 50% vs you\n";
	}
	else if (PlayerHero.Name == m[0].Name && Enemy.Name == m[1].Name ) {
		Enemy.DMG = m[1].DMG * 1.5;
		cout << "Enemy damage is increased by 50% vs you\n";
		
	}
	else if (PlayerHero.Name == m[1].Name && Enemy.Name == m[2].Name || PlayerHero.Name == m[1].Name && Enemy.Name == m[3].Name) {
		Enemy.DMG = m[2].DMG * 1.5;
		cout << "Enemy damage is increased by 50% vs you\n";

	}
	else if (PlayerHero.Name == m[2].Name && Enemy.Name == m[0].Name || PlayerHero.Name == m[2].Name && Enemy.Name == m[3].Name) {
		PlayerHero.DMG = m[0].DMG * 1.5;
		cout << "Enemy damage is increased by 50% vs you\n";
	}
	else {
		cout << "No bonuses in this Battle\n";
	}

	cout << "Your " << PlayerHero.Name << " started a fight with\n" << Enemy.Name << "\n";
	int EscapeChance;
	
	int HPmax = PlayerHero.HP;
	int EnemyMaxHP = Enemy.HP;

	while (true) {
		EscapeChance = 1 + rand() % 40;

		cout << "It's your turn\nChoose your action\n1 Attack		2 the escape\n";
		
			// Удар игрока
			cin >> answer2;
			if (answer2 == "1") {
				cout << "You choosed Attack\n Your" << PlayerHero.Name << "hit a " << Enemy.Name << "\n";
				Enemy.HP -= PlayerHero.DMG;
				cout << "Enemy HP " << Enemy.HP << " / " << EnemyMaxHP << "\n";
				
			}
			else if (answer2 == "2") 
			{

				cout << "You choosed escape";
				if (EscapeChance > 40) {
					cout << "Failure\nYou couldn't escape\n ";
				}
				else {
					cout << "Success\n You were able to escape\n";
					break;
				}
			}
			else 
			{
				cout << "incorect answer\n";
			}
			// Удар врага
			cout << "Enemy turn\n";
			cout << Enemy.Name << "Attack your" << PlayerHero.Name << "\n";
			PlayerHero.HP -= Enemy.DMG;
			cout << "Your hero HP" << PlayerHero.HP << " / " << HPmax << "\n";

			if (PlayerHero.HP<=0) {
				
				break;
			}

			if (Enemy.HP <= 0) {

				break;
			}
		
	}
}

void Shop() {

	struct SHOP {
		string Name;
		int price;
		int weight;
	};
	SHOP m[5];
	m[0].Name = "Health Potion";
	m[0].price = 50;
	m[0].weight = 1;

	m[1].Name = "Mana potion";
	m[1].price = 50;
	m[1].weight = 1;

	m[2].Name = "Sword";
	m[2].price = 300;
	m[2].weight = 10;

	m[3].Name = "Shield";
	m[3].price = 250;
	m[3].weight = 8;

	m[4].Name = "Magic staf";
	m[4].price = 300;
	m[4].weight = 7;
	
	int Gold = 400;
	int MaxWeight = 15;
	int YourWeight = 0;
	int answ;
	string answ2;

	
	cout << "You visited a shop\n You can buy this items\n";

	cout << "\n Choose what you wanna buy";
	for (int i = 0;i < 5;i++) {

		cout << "\n" << m[i].Name << "\tCost " << m[i].price << "\tWeight " << m[i].weight << "\n";
	}
	while (Gold > 0) 
	{
		cin >> answ;
		
		
		cout << "You choosed " << m[answ-1].Name << "\n Do you really want buy this item?\nYes\tNo\n";
		cin >> answ2;
		if (answ2 == "Yes" && Gold > m[answ-1].price && YourWeight + m[answ-1].weight < MaxWeight)
		{
			Gold -= m[answ-1].price;
			cout << "You buyed " << m[answ - 1].Name << "\n Your gold is " << Gold << "\n";
		}
		else 
			{
				cout << "Error\n";
			} 
		





	}
	
}

int main()
{
	setlocale(LC_ALL, "");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Shop();
	//Strategy();

	//Sesuriti();

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