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
    vector<Color> colors; 
    srand(time(0));
    int n = rand() % 50 + 1;
    cout << n;

    return 0;
}
