#ifndef GAMESHELF_H
#define GAMESHELF_H

#include "Show.h"

class GameShelf {
    private:
        Show shelf[1];
        int const maxGameCount = 10;
        int currGameCount;

    public:
        GameShelf();
        void add(Show &);
        Show remove();
        int getCurrGameCount();
        class FullShelf{};
        class EmptyShelf{};
};
#endif
