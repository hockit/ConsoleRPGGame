#include "Event.h"


void Event::Fight(Character& character)
{
	system("CLS");

	Enemy enemy = Enemy(character.getLevel() + rand() % 2);

	int enemyDamage;
	int characterDamage;
	int enemyHp = enemy.getHp();
	int characterHp = character.getBaseHp();

	do
	{
		enemyDamage = rand() % (enemy.getDmgMax() + enemy.getDmgMin());		

		std::cout << "Enemy total attack: " << enemyDamage << std::endl;
		characterHp -= enemyDamage;
		std::cout << "Your HP: " << characterHp << std::endl;

		if (characterHp <= 0)
		{
			std::cout << "YOU LOSE!!!" << std::endl;
			system("pause");
			break;
		}
		
		Sleep(1500);

		characterDamage = rand() % 1 + character.getStrenght();

		std::cout << "Your total attack: " << characterDamage << std::endl;
		enemyHp -= characterDamage;
		std::cout << "Enemy HP: " << enemyHp << std::endl;

		if (enemyHp <= 0)
		{
			std::cout << "YOU WIN!!!" << std::endl;
			system("pause");
			character.setLevel();
			updateStats(character);
			break;
		}
		
		Sleep(1500);

	} while (characterHp > 0 && enemyHp > 0);

}

void Event::updateStats(Character& character)
{
	system("CLS");
	int choice{ 0 };
	std::cout << "Welcome apprentice." << std::endl;
	std::cout << "[1] Add health points (+10)" << std::endl;
	std::cout << "[2] Add strenght (+2)" << std::endl;
	std::cout << "[3] Add dexterity (+2)" << std::endl;
	std::cout << " >> ";
	std::cin >> choice;

	do
	{
		switch (choice)
		{
		case 1: character.setHp(10);
			std::cout << "You upgrade health points." << std::endl;
			break;
		case 2: character.setStrenght(2);
			std::cout << "You upgrade strenght." << std::endl;
			break;
		case 3: character.setDexterity(2);
			std::cout << "You upgrade dexterity." << std::endl;
			break;
		default:
			std::cout << "Ivalid input" << std::endl;
			break;
		}
	} while (choice < 1 || choice > 3);
}

