#ifndef PERSONMGR_H
#define PERSONMGR_H
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

class personmgr
{
    public:
        // int data;
        // node * previous;
        // node * next;

    private:

};

/* These functions are already written and can be called to test out your code */
// void build (node * & head);  //supplied
// void display (node * head);  //supplied
// void destroy (node * &head); //supplied

// /* *****************YOUR TURN! ******************************** */
// /* place your prototype here */
// void printNth (node * head, int n);
// void insertAtN (node *& head, int n, int value);
void addPerson();
void lookup();
void printHtStats();

#endif