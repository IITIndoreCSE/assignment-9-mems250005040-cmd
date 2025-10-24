#include <iostream>
#include <string>
using namespace std;

struct SalesRecord {
    string month;
    float amount;
};

int main() {
    
    SalesRecord sales[12];

    cout << "Enter sales data for each month:" << endl;
    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << " Name: ";
        getline(cin, sales[i].month);  
        cout << "Sales Amount: ";
        cin >> sales[i].amount;  
        cin.ignore();  
    }

    
    int maxIndex = 0, minIndex = 0;

    
    for (int i = 1; i < 12; i++) {
        if (sales[i].amount > sales[maxIndex].amount) {
            maxIndex = i;  // Update max sales index
        }
        if (sales[i].amount < sales[minIndex].amount) {
            minIndex = i;  // Update min sales index
        }
    }

    
    cout << "\nMonth with maximum sales: " << sales[maxIndex].month
         << " with amount " << sales[maxIndex].amount << endl;

    cout << "Month with minimum sales: " << sales[minIndex].month
         << " with amount " << sales[minIndex].amount << endl;

    return 0;
}
