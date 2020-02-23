#include <iostream>

#include "Show.h"
#include "GameShelf.h"

using namespace std;

//fix  TODO: getline()

void fixBadInput() {
    cin.clear();
    cin.ignore();
    cout << "Invalid input, try again" << endl;
}

int main() {
    bool running = true;
    GameShelf userShelf = GameShelf();

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
                    try {
                        if (userShelf.getCurrGameCount() != 1) {
                            cout << "\n";
                            cout << "Title of Show: " << endl;
                            cin >> title;
                            cout << "\n";
                            cout << "Description of the Show: " << endl;
                            cin >> description;
                        } else {
                            throw GameShelf::FullShelf();
                        } if (cin.fail()) {
                            fixBadInput();
                            continue;
                        } else {
                            cout << "\n";
                            Show *userShow = new Show(title, description);
                            userShelf.add(*userShow); //fix this
                            break;
                        }
                    }
                    catch (GameShelf::FullShelf) {
                        cout << "Error: The Shelf is full. Remove a board game before adding another.";
                        cout << "\n";
                        break;
                    }
                }
                break;
            }
            case 2: {
                try {
                    cout << "\n";
                    userShelf.remove();
                    cout << "\n";
                    break;
                }
                catch (GameShelf::EmptyShelf) {
                    cout << "Error: The Shelf is empty.  Add a board game before removing.";
                    cout << "\n";
                    break;
                }
                //run remove and display attributes
            }
            case 3: {
                cout << "\n";
                cout << "This is how many games are on the shelf: " << userShelf.getCurrGameCount() << endl;
                cout << "\n";
                break;
                //show how many board games are on the shelf
            }
            case 4: {
                running = false;
                break;
                //quit program
            }
        }
    }

    return 0;
}