#include <iostream>

#include "Show.h"
#include "EntertainmentCollection.h"

using namespace std;

void fixBadInput() {
    std::cin.clear();
    std::cin.ignore();
    std::cout << "Invalid input, try again" << endl;
}

int main() {
    bool running = true;
    EntertainmentCollection<Show> userShelf = EntertainmentCollection<Show>();

    while (running) {
        std::cout << "Press 1 to add a board game to the shelf" << endl;
        std::cout << "Press 2 to remove a board game from the shelf" << endl;
        std::cout << "Press 3 to see how many board games are currently on the shelf" << endl;
        std::cout << "Press 4 to quit" << endl;
        std::cout << "\n";

        int userInput;
        std::cin >> userInput;
        if (std::cin.fail() || userInput > 5 || userInput < 1) {
            fixBadInput();
            continue;
        }

        string title;
        string description;

          switch (userInput) {
            case 1: {
                while (true) {
                    try {
                        if (userShelf.getCurrGameCount() != 1) {
                            std::cout << "\n";
                            std::cout << "Title of Show: " << endl;
                            std::cin >> title;
                            std::cout << "\n";
                            std::cout << "Description of the Show: " << endl;
                            std::cin >> description;
                        } else {
                            throw EntertainmentCollection<Show>::FullShelf();
                        } if (std::cin.fail()) {
                            fixBadInput();
                            continue;
                        } else {
                            std::cout << "\n";
                            Show *userShow = new Show(title, description);
                            userShelf.add(*userShow); //fix this
                            break;
                        }
                    }
                    catch (EntertainmentCollection<Show>::FullShelf) {
                        std::cout << "Error: The Shelf is full. Remove a board game before adding another.";
                        std::cout << "\n";
                        break;
                    }
                }
                break;
            }
            case 2: {
                try {
                    std::cout << "\n";
                    userShelf.remove();
                    std::cout << "\n";
                    break;
                }
                catch (EntertainmentCollection<Show>::EmptyShelf) {
                    std::cout << "Error: The Shelf is empty.  Add a board game before removing.";
                    std::cout << "\n";
                    break;
                }
                //run remove and display attributes
            }
            case 3: {
                std::cout << "\n";
                std::cout << "This is how many games are on the shelf: " << userShelf.getCurrGameCount() << endl;
                std::cout << "\n";
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
