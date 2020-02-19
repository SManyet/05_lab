#ifndef GAMESHELF_H
#define GAMESHELF_H

#include "Show.h"

class GameShelf {
    private:
        Show shelf[10];
        int const maxGameCount = 10;
        int currGameCount;

    public:
        GameShelf();
        void add(Show &);
        Show remove();
        int getCurrGameCount();
};
#endif
