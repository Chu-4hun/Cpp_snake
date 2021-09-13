#include <iostream>
#include <array>

#include "Chu_Toolbox.h"
#include "Clases.h"


bool gameField[20][20];



class OutputWindow {
private:
    int p_gameField_x, p_gameField_y;
public:
    OutputWindow(int x, int y):p_gameField_x(x),p_gameField_y(y){};
    void PritnField(){
        for (int i = 0; i<p_gameField_y; i++){
            LOG(gameField[i][0]);
            for (int j = 0; j < p_gameField_x; ++j) {
                LOG(gameField[i][j]);
            }
        };

    }
};
void SnakeGame::Start() {
        OutputWindow outputWindow(20,20);
        outputWindow.PritnField();
    }


