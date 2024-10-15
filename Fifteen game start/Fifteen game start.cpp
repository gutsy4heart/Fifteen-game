#include<iostream>
#include<iomanip>
#include<string.h>
#include<conio.h>
#include<Windows.h>
#include"enums.h"
#include"func.h"
using namespace std;

int menuChoice(const char* Menu[], int length) {
	unsigned char key{};
	int choice{};
	while (key != 13)
	{
		system("cls");
		for (size_t i = 0; i < length; i++)
		{
			if (choice == i)
			{
				cout << '>';
			}
			else
			{
				cout << ' ';
			}
			cout <<' ' << Menu[i] << endl;
		}
		key = _getch();
		if (key == 224)
		{
			key = _getch();
		}switch (key)
		{
		case UP:
			choice--;
			if (choice < 0) choice = length - 1;
			
			break;
		case DOWN:
			(++choice) %= length;
			//if (choice > length - 1) choice = 0;
			
			break;
		}
	}
	system("cls");
	return choice;
}

int main() {
	srand(time(NULL));
	short game_field[4][4]{};
	int choice{};
	unsigned char key{};
	const char* levelMenu[4]{
		"Easy",
		"Normal",
		"Hardly"
	};

	fill_game_fields(game_field);
	choice = menuChoice(levelMenu, 3);
	
	system("pause");
	start_position(game_field,choice);
	show_fields(game_field);

	while (!is_win(game_field))
	{
		key = _getch(); // 224
		key = _getch();
		move(game_field, key);
		system("cls");
		show_fields(game_field);

	}
	system("cls");
	cout << "Win" << endl;
}

