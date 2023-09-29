# include <iostream>
# include <windows.h>
using namespace std;
void printmaze();
void gotoxy(int x, int y);
void printmove (int x, int y);
main()
{
int x=5;
int y=2;
system("cls");
printmaze ();
while(1)
{
printmove (x,y);
y=y+1;
if (y==8){
y=7;
while(y>2){
printmove (x,y);
y=y-1;
}

}

}
gotoxy(2,10);
}

void printmaze()
{
cout<<"#####################"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#                   #"<<endl;
cout<<"#####################"<<endl;
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmove(int x ,int y)
{
gotoxy(x,y);
cout<<"P";
Sleep(500);
gotoxy(x,y);
cout<<" ";
}