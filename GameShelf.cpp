#include <iostream>
#include "GameShelf.h"
#include "Show.h"

GameShelf::GameShelf() {
    currGameCount = 0;
}

void GameShelf::add(Show &show) {
    shelf[currGameCount] = show;
    currGameCount++;
}

Show GameShelf::remove() {
    currGameCount--;
    
    Show tempShow = shelf[currGameCount];
    tempShow.details();

    return tempShow;
}

int GameShelf::getCurrGameCount() {
    return currGameCount;
}


