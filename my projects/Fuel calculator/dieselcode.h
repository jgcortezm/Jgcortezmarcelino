
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "colorscode.h"


using namespace std;

int diesel() {
 
    float autonomy, dieselprice, distancekm, prefinalvalueliter, finalvalueliter, finalprice, onepercent, percent35;
    cout << BLUE << "You selected option: \"Calculate Diesel Price\"\n" << RESET << endl;
    cout << "Please enter your vehicle autonomy in kilometers per liter: ";
    cin >> autonomy;
    cout << "You entered the following value for diesel autonomy: " << BLUE << autonomy << RESET << "\n" << endl;
    cout << "Now, enter the price of diesel per LITER: ";
    cin >> dieselprice;
    cout << "You entered the following value for diesel price: " << BLUE << dieselprice << RESET << "\n" << endl;
    cout << "Now, enter the distance you want to travel in KM: ";
    cin >> distancekm;
    cout << "You entered the following value for route distance in KM: " << BLUE << distancekm << RESET << "\n" << endl;
    finalvalueliter = distancekm / autonomy;
    finalprice = finalvalueliter * dieselprice;

    cout << "To travel " << BLUE << distancekm << RESET << " kilometers, your car will need " << BLUE << finalvalueliter << RESET <<" liters of diesel, and the final price that you need to pay will be " << BLUE << finalprice << RESET << endl;

    prefinalvalueliter = distancekm / autonomy;
    onepercent = prefinalvalueliter / 100;
    percent35 = onepercent * 35;
    finalvalueliter = prefinalvalueliter - percent35;
    finalprice = finalvalueliter * dieselprice;
    return 0;
}
