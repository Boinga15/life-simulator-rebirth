#include "openingScene.h"
#include "utils.h"

void os::introduction() {
    std::cout << "You used to be a regular person, living a normal life in a neighbourhood." << std::endl;
    std::cout << "Granted, it was a shady one, but small as well. You stil felt safe by knowing everyone there." << std::endl;
    std::cout << "Unfortunately, an incident left you poorly maimed and injured." << std::endl;
    std::cout << "You can't recollect any details about what happened. You don't know who did it, or what happened." << std::endl;
    std::cout << "When you came to, however, you were in a hospital. And when you got back home, all of your stuff was missing." << std::endl;
    std::cout << "This was the tipping point. Deciding to get away from your old life to try start a new one, you moved towns." << std::endl;
    std::cout << "Despite its name, \"Townsville\" seemed like a nice place to start." << std::endl;
    std::cout << "With whatever you had left, you bought and set up a small house in Townsville." << std::endl;
    std::cout << "Now on the drive to that town, you have a lot of time to think. Time to ponder some questions." << std::endl;
    std::cout << "Questions like, for example, who you are." << std::endl;
    
    utils::pauseGame();

    os::characterCreation();
}

void os::characterCreation() {
    utils::clearScreen();
}