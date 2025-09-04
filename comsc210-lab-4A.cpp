// COMSC-210 | Lab 4A | Majd Bohsali
// IDE used: Visual Studio Code
#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime> 
using namespace std; 

// defines Color struct
struct Color {
    int red;
    int green;
    int blue;
};

int main() { 
    srand(time(0));

    const int MIN_N = 25; 
    const int MAX_N = 50; 
    const int MAX_COLOR_INT = 256; 
    vector<Color> colors; 
    int n = rand() % (MAX_N - MIN_N + 1) + MIN_N;

    // generates n random colors
    for(int i = 0; i < n; i++) {
        int redRand = rand() % MAX_COLOR_INT;
        int blueRand = rand() % MAX_COLOR_INT;
        int greenRand = rand() % MAX_COLOR_INT;
        Color tempColor = {redRand, greenRand, blueRand};
        colors.push_back(tempColor); 
    }



    return 0;
}
