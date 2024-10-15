#include<iostream>
#include<iomanip>
#include<Windows.h>
using namespace std;
enum colors
{
	BLACK,
	BLUE,
	GREEN,
	AQUA,
	RED,
	PURPLE,
	YELLOW,
	WHITE,
	GRAY,
	LIGHT_BLUE,
	LIGHT_GREEN,
	LIGHT_AQUA,
	LIGHT_RED,
	LIGHT_PURPLE,
	LIGHT_YELLOW,
	BRIGHT_WHITE
};
int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	/*for (size_t i = 0; i <= 256; i++)
	{
		SetConsoleTextAttribute(hConsole, i);
		cout << setw(5) << i;
		if ((i+1) % 16 == 0 && i != 0) cout<<'\n';
	}*/
	int backColor = WHITE;
	int foreColor = RED;
	//WORD wcolor = (backColor(WHITE & 0x0f) << )

	//	SetConsoleTextAttribute(hConsole, 15);
	/*SetConsoleTextAttribute(hConsole, ((PURPLE & 0x0f) << 4) + (RED & 0x0F));
	cout << "Hello" << endl;*/
}