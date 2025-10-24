#include <iostream>
using namespace std;
struct Item {
    int id;
    float cost;
};

int main() {
    Item items[6] = {
        {101, 45.50},
        {102, 65.75}, 
        {103, 25.99}, 
        {104, 75.25}, 
        {105, 40.00},
        {106, 55.00}  
    };

    // Use a for loop to iterate through the array and print items with cost > 50.00
    cout << "Items with cost greater than 50.00:" << endl;
    for (int i = 0; i < 6; i++) {
        if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}
