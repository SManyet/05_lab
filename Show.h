#ifndef LAB4_SHOW_H
#define LAB4_SHOW_H
#include <iostream>
using namespace std;


//Task 1:
//Goal: create base class (abstractly models an online streaming service)
//  a- 2 attributes needed (Title, Description)
//  b- default constructor and an overloaded constructor that allows setting values for all attributes
//  c- Define a virtual function play.  Define a non-virtual function called Details
//     that prints out hte two attributes from 1a
//  d- Include in submission how each member will be available in derived classes

class Show {
protected: // made to be protected so derived classes can access them
    //two attributes for abstract class
    string title;
    string description;

public:
    //two constructors
    Show();
    Show(string, string);

    //functions
    virtual void play();
    void details();

    //getters and setters
    string getTitle();
    void setTitle(string);
    string getDescription();
    void setDescription(string);

};


#endif //LAB4_SHOW_H
