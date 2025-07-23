Life Simulator - Rebirth is the sequel to another console-based game I made in C++ several years ago. The purpose of this version was to improve on the original, adding more features, different paths to follow, and actual things to do other than "become super rich". It also served as a chance for me to re-learn C++, as well as learn both Docker and CMake.

Life Simulator - Rebirth puts you in the shoes of the new person in town. Recently moved in from your old town where everything kind of went wrong, you're looking to start your life anew in the brilliant town, "Townsville" (don't ask why it's named that). Get a job, get a house, maybe commit a few crimes, study, try to get into relationships, and uncover the secrets that lie within this serine town.

Currently the game is still in development, and will take a while to finish. Feel free to fork this project and make your own changes or updates to the game whenever you want.

<h1>How to Play</h1>

The project makes use of "CMake" to build and run. Going into the build folder and running the command:

cmake -G "MinGW Makefiles" ..

Or on Linux:

cmake -G "Unix Makefiles" ..

Should generate all of the files, including a Makefile. Then run "mingw32-make" on Windows, or "make" on Linux to build the program. That should create a file you can run ("LSR.exe" on Windows, and just "LSR" on Linux).