#include <iostream>
#include "EntertainmentCollection.h"

template<typename T>
EntertainmentCollection<T>::EntertainmentCollection() {
    currGameCount = 0;
}

template<typename T>
void EntertainmentCollection<T>::add(T &show) {
    if ( currGameCount != 1 ) {
        shelf[currGameCount] = show;
        currGameCount++;
    } else {
        throw FullShelf();
    }
}

template<typename T>
T EntertainmentCollection<T>::remove() {

    if (currGameCount != 0) {
        currGameCount--;

        T tempShow = shelf[currGameCount];
        std::cout << "This is the board game that was removed: " << std::endl;
        tempShow.details();

        return tempShow;
    } else {
        throw EmptyShelf();
    }
}

template<typename T>
int EntertainmentCollection<T>::getCurrGameCount() {
    return currGameCount;
}


