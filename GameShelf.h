#ifndef
#define GAMESHELF_H



class GameShelf {
    private:
        std::string shelf[];
        int maxGameCount;
        int currGameCount;

    public:
        GameShelf();
        void add(std::string &);
        std::string remove();
        int getCurrGameCount();
};
#endif
