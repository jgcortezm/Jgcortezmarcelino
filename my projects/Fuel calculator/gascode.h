#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "colorscode.h"


using namespace std;

int gasregular() {

    float autonomy, gasprice, distancekm, finalvalueliter, finalprice;
    cout << YELLOW << "You selected option: \"Calculate Gas Price\"\n" << RESET << endl;
    cout << "Please enter your vehicle autonomy in kilometers per liter: ";
    cin >> autonomy;
    cout << "You entered the following value for gas autonomy: " << YELLOW << autonomy << RESET << "\n" << endl;
    cout << "Now, enter the price of gas per LITER: ";
    cin >> gasprice;
    cout << "You entered the following value for gas price: " << YELLOW << gasprice << RESET << "\n" << endl;
    cout << "Now, enter the distance you want to travel in KM: ";
    cin >> distancekm;
    cout << "You entered the following value for route distance in KM: " << YELLOW << distancekm << RESET << "\n" << endl;
    finalvalueliter = distancekm / autonomy;
    finalprice = finalvalueliter * gasprice;

    cout << "To travel " << YELLOW << distancekm << RESET << " kilometers, your car will need "<< YELLOW << finalvalueliter <<  RESET <<" liters of gas, and the final price that you need to pay will be " << YELLOW <<finalprice << RESET << endl;

    return 0;
}