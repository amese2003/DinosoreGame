#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <conio.h>

void SetConsoleView() {
    system("mode con:cols=100 lines=25");
    system("title Google Dinosaurs. By amese1225");
}

void GotoXY(int x, int y) {
    COORD pos;
    pos.X = x * 2;
    pos.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int GetKeyDown() {
    if (_kbhit() != 0)
        return _getch();

    return 0;
}

void DrawDino(int dinoY) {
    static bool legflag = true;
    printf("        $$$$$$$ \n");
    printf("       $$ $$$$$$\n");
    printf("       $$$$$$$$$\n");
    printf("$      $$$      \n");
    printf("$$     $$$$$$$  \n");
    printf("$$$   $$$$$     \n");
    printf(" $$  $$$$$$$$$$ \n");
    printf(" $$$$$$$$$$$    \n");
    printf("  $$$$$$$$$$    \n");
    printf("    $$$$$$$$    \n");
    printf("     $$$$$$     \n");
    if (legflag)
    {
        printf("     $    $$$    \n");
        printf("     $$          ");
        legflag = false;
    }
    else
    {
        printf("     $$$  $     \n");
        printf("          $$    ");
        legflag = true;
    }
}


int main()
{
    std::cout << "Hello World!\n";

    SetConsoleView();
    while (true) {
        DrawDino(0);
        Sleep(80);
        system("cls");
    }

    system("pause");
}