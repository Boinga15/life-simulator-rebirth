#include<iostream>

#include "utils.h"
#include "openingScene.h"

int main() {
    utils::clearScreen();

    bool gameRunning = true;

    while (gameRunning) {
        std::cout << "Life Simulator - Rebirth" << std::endl;
        std::cout << "The sequel that nobody asked for, but the world got.\n" << std::endl;

        std::string options[] = {"Play", "Continue", "Quit", ""};

        int op = utils::optionSelect(options);

        utils::clearScreen();

        switch (op) {
            case 1:
                os::introduction();
                break;
            
            case 2:

                break;

            case 3:
                gameRunning = false;
                break;
            
            default:
                std::cout << "Invalid input, try again.\n\n" << std::endl;
                break;
        }
    }

    return 0;
}