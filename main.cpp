#include <iostream>

#include "Show.h"

using namespace std;

void fixBadInput() {
    cin.clear();
    cin.ignore();
    cout << "Invalid input, try again" << endl;
}

int main() {

    bool running = true;
    while (running) {
        cout << "Press 1 to add a board game to the shelf" << endl;
        cout << "Press 2 to remove a board game from the shelf" << endl;
        cout << "Press 3 to see how many board games are currently on the shelf" << endl;
        cout << "Press 4 to quit" << endl;
        cout << "\n";

        int userInput;
        cin >> userInput;
        if (cin.fail() || userInput > 5 || userInput < 1) {
            fixBadInput();
            continue;
        }

        string title;
        string description;

        /*
         * 1.	Create a program that tests the shelf class.  Prompt the user for which class method to invoke.  This may look like:
Press 1 to add a board game to the shelf.
Press 2 remove a board game from the shelf.
Press 3 see how many board games are currently on the shelf.
Press 4 to quit.

a.	When adding a board game to the shelf, dynamically create (using the new operator) the board game.  You may want to set attribute values in the board game class.
b.	When removing a board game you may want to display the attribute values set when the board game was created.
2.	Use your test program to test all member functions and ensure the class is working correctly.  At this time, only test conditions that should not throw an error.  You don’t need to test conditions such as adding a board game when the shelf is full or removing a board game when the shelf is empty as that will be part of the next task.
3.	Include in the lab report a screen shot(s) board of the output of your tests.

         */

        switch (userInput) {
            case 1: {
                while (true) {
                    cout << "\n";
                    cout << "Title of Show: " << endl;
                    cin >> title;
                    cout << "\n";
                    cout << "Description of the Show: " << endl;
                    cin >> description;
                    if (cin.fail()) {
                        fixBadInput();
                        continue;
                    } else {
                        cout << "\n";
                        break;
                    }
                }
                break;
            }
            case 2: {

            }
            case 3: {

            }
            case 4: {
                running = false
            }

        }
    }

    return 0;
}