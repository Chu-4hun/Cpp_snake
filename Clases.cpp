#include <iostream>
#include <array>

#include "Chu_Toolbox.h"
#include "Clases.h"

const int gameField_x = 20;
const int gameField_y = 10;
bool gameField[gameField_x][gameField_y];



class OutputWindow {
private:
    int p_gameField_x, p_gameField_y;

public:
    OutputWindow(int x, int y):p_gameField_x(x),p_gameField_y(y){};
    OutputWindow(bool input_GameField[gameField_x][gameField_y]):p_gameField_x(gameField_x),p_gameField_y(gameField_y){};

    void PritnField(){
        for (int i = 0; i<p_gameField_y; i++){
            for (int j = 0; j < p_gameField_x; ++j) {
                if(gameField[j][i] == false){
                    std::cout <<"_";
                } else{
                    std::cout <<"*";
                }

            }
            std::cout<<std::endl;


        };

    }
};
void SnakeGame::Start() {
        OutputWindow outputWindow(gameField);
        outputWindow.PritnField();
}



