#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class person
{
    public:
		person();
		person(const char *id, const char *fname, const char *lname, const char *familyid);
		person(const person &p1);

		~person();


		friend ostream& operator<<( ostream &output, const person &p ) 
		{ 
			output << "ID : " << p.id << endl;
			output << "First Name : " << p.fname << endl;
			output << "Last Name : " << p.lname << endl << endl;
			return output;            
		}

		char *id;


    private:
		char *fname;
		char *lname;
		char *familyId;

		void allocMemory();
		void freeMemory();
};





#endif