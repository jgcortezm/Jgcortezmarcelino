#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "colorscode.h"
#include "titlecode.h"
#include "gascode.h"
#include "ethanolcode.h"
#include "dieselcode.h"
#include "credits.h"
#include "menuini.h"
#include "stillwant.h"


using namespace std;


int main() {

    int optionmenu, wvariable1 = 0;

    while (wvariable1 == 0) {
        title(); 
        credits();
        menuini();
        cin >> optionmenu;

        switch (optionmenu) {
                    case 1:
                        cout << "\n";
                        cout << "\n";
                        cout << "\n";
                        cout << "\n";
                        gasregular();
                        int exitv1;
                        stillwant();
                        cin >> exitv1;
                        if (exitv1 == 2) {
                            cout << "Thank you for using the Fuel Calculator\n" << endl;
                            exit(0);
                        }
                        break;
            

                    case 2:
                        cout << "\n";
                        cout << "\n";
                        cout << "\n";
                        cout << "\n";
                        ethanol();
                        int exitv2;
                        stillwant();
                        cin >> exitv2;
                        if (exitv2 == 2) {
                            cout << "Thank you for using the Fuel Calculator\n" << endl;
                            exit(0);
                        }
                        break;

                    case 3:
                        cout << "\n";
                        cout << "\n";
                        cout << "\n";
                        cout << "\n";
                        diesel();
                        int exitv3;
                        stillwant();
                        cin >> exitv3;
                        if (exitv3 == 2) {
                            cout << "Thank you for using the Fuel Calculator\n" << endl;
                            exit(0);
                        }
                        break;

                    case 4:
                        int exitv4;
                        credits();
                        stillwant();
                        cin >> exitv4;
                        if (exitv4 == 2) {
                            cout << "Thank you for using the Fuel Calculator\n" << endl;
                            exit(0);
                        }
                        break;

                    case 5:
                        cout << "Thank you for using the Fuel Calculator\n" << endl;
                        exit(0);

                    default:
                        int exitvd;
                        cout << "Invalid option\n" << endl;
                        stillwant();
                        cin >> exitvd;
                        if (exitvd == 2) {
                            cout << "Thank you for using the Fuel Calculator\n" << endl;
                            exit(0);
                        }
                }
            }

            return 0;
        }