#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class person
{
    public:
		person(const char *id, const char *fname, const char *lname, const char *familyid);
		person(const person &p1);

		~person();

		friend ostream& operator<<( ostream &output, const person &p ) 
		{ 
			output << "ID : " << p.id;
			return output;            
		}

    private:
		char *id;
		char *fname;
		char *lname;
		char *familyId;

		void allocMemory();
		void freeMemory();
};





#endif