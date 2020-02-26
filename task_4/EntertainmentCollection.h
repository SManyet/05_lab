#ifndef ENTERTAINMENTCOLLECTION_H
#define ENTERTAINMENTCOLLECTION_H

template <class T>
class EntertainmentCollection {
    private:
        T shelf[10];
        int const maxGameCount = 10;
        int currGameCount;

    public:
        EntertainmentCollection();
        void add(T &);
        T remove();
        int getCurrGameCount();
        class FullShelf{};
        class EmptyShelf{};
};
#endif
