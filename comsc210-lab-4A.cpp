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
    int blue;
    int green;
};

int main() { 
    srand(time(0));

    const int MIN_N = 25; 
    const int MAX_N = 25; 
    vector<Color> colors; 
    int n = rand() % (MAX_N - MIN_N + 1) + MIN_N;

    for(int i = 0; i < n; i++) {
        
    }

    return 0;
}
