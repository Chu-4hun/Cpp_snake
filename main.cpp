#include <iostream>
#include <Windows.h>

#include "Chu_Toolbox.h"
#include "Clases.h"



int main() {
    SetConsoleOutputCP(65001);
    SnakeGame newGame;
    newGame.Start();

    return 0;
}
