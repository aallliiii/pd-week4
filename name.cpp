# include <iostream>
# include <windows.h>
void gotoxy(int x, int y);
using namespace std;
main ()
{
system("cls");
gotoxy(100,25);
cout<<"ALI";
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}