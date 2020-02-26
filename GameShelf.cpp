#include <iostream>
#include "GameShelf.h"
#include "Show.h"

GameShelf::GameShelf() {
    currGameCount = 0;
}

void GameShelf::add(Show &show) {
    if ( currGameCount != 10 ) {
        shelf[currGameCount] = show;
        currGameCount++;
    } else {
        throw FullShelf();
    }
}

Show GameShelf::remove() {

    if (currGameCount != 0) {
        currGameCount--;

        Show tempShow = shelf[currGameCount];
        cout << "This is the board game that was removed: " << endl;
        tempShow.details();

        return tempShow;
    } else {
        throw EmptyShelf();
    }
}

int GameShelf::getCurrGameCount() {
    return currGameCount;
}


