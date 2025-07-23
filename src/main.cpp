#include<iostream>

#include "utils.h"

int main() {
    clearScreen();

    bool gameRunning = true;

    while (gameRunning) {
        std::cout << "Life Simulator - Rebirth" << std::endl;
        std::cout << "The sequel that nobody asked for, but the world got.\n" << std::endl;

        std::string options[] = {"Play", "Continue", "Quit", ""};
        
        int op = optionSelect(options);

        clearScreen();

        switch (op) {
            case 1:

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