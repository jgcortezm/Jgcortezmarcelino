#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "colorscode.h"


using namespace std;
int ethanol(){
    float autonomy, ethanolprice, distancekm, prefinalvalueliter, finalvalueliter, finalprice, onepercent1, percent301;
    cout << GREEN << "You selected option: \"Calculate Ethanol Price\"\n" << RESET << endl;
    cout << "Please enter your vehicle autonomy in kilometers per liter: ";
    cin >> autonomy;
    cout << "You entered the following value for ethanol autonomy: " << GREEN << autonomy << RESET << "\n" << endl;
    cout << "Now, enter the price of ethanol per LITER: ";
    cin >> ethanolprice;
    cout << "You entered the following value for ethanol price: " << GREEN << ethanolprice << RESET << "\n" << endl;
    cout << "Now, enter the distance you want to travel in KM: ";
    cin >> distancekm;
    cout << "You entered the following value for route distance in KM: " << GREEN << distancekm << RESET << "\n" << endl;
    prefinalvalueliter = distancekm / autonomy;
    onepercent1 = prefinalvalueliter / 100;
    percent301 = onepercent1 * 30;
    finalvalueliter = percent301 + prefinalvalueliter;
    finalprice = finalvalueliter * ethanolprice;

    cout << "To travel " << GREEN << distancekm << RESET << " kilometers, your car will need " << GREEN << finalvalueliter << RESET << " liters of ethanol, and the final price that you need to pay will be " << GREEN << finalprice << RESET << endl;

    return 0;
}
