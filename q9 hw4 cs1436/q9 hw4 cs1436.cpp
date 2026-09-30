// q9 hw4 cs1436.cpp :Question 9
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    double speed; 
    int hours; 
    do {
        cout << "What is the speed of the vehicle in mph? ";
        cin >> speed;
        if (speed < 0)
            cout << "Error: Speed cannot be negative. Please enter again.\n";
    } while (speed < 0);
    do {
        cout << "How many hours has it traveled? ";
        cin >> hours;
        if (hours < 1)
            cout << "Error: Hours must be at least 1. Please enter again.\n";
    } while (hours < 1);

    cout << "\nHour\tDistance Traveled\n";
    cout << "-----------------------------\n";
    for (int hour = 1; hour <= hours; hour++) {
        double distance = speed * hour;
        cout << setw(4) << hour << "\t" << setw(10) << distance << endl;
    }
    return 0;
}
