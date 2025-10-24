#include <iostream>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    Color colors[5] = {
        {100, 150, 200}, // First color (RGB: 100, 150, 200)
        {50, 100, 150},  // Second color (RGB: 50, 100, 150)
        {200, 50, 100},  // Third color (RGB: 200, 50, 100)
        {255, 0, 255},   // Fourth color (RGB: 255, 0, 255)
        {0, 255, 0}      // Fifth color (RGB: 0, 255, 0)
    };

    for (int i = 0; i < 3; i++) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }


    cout << "New RGB values after inverting the first 3 colors:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << " - RGB: "
             << colors[i].red << ", "
             << colors[i].green << ", "
             << colors[i].blue << endl;
    }

    return 0;
}
