#ifndef PERSONMGR_H
#define PERSONMGR_H
#include <iostream>
#include "person.h"
#include "hashtable.h"

class personmgr
{
    public:
		personmgr();
		~personmgr();

        void printHtStats();
		void addPerson(person p);
		person* findPerson(char *id);

    private:
		hashTable *persons;
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