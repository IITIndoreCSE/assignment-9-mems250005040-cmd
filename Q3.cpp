#include <iostream>
using namespace std;

// Define a structure 'Point'
struct Point {
    float x;
    float y;
};

int main() {
    Point points[7]; // Declare an array of 7 'Point' structures
    int countFirstQuadrant = 0;

    // Input coordinates for all 7 points
    cout << "Enter the coordinates (x y) for 7 points:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Point " << i + 1 << ": ";
        cin >> points[i].x >> points[i].y;
    }

    // Count how many points lie in the first quadrant (x > 0 and y > 0)
    for (int i = 0; i < 7; i++) {
        if (points[i].x > 0 && points[i].y > 0) {
            countFirstQuadrant++;
        }
    }

    // Display the result
    cout << "\nNumber of points in the first quadrant: " 
         << countFirstQuadrant << endl;

    return 0;
}
