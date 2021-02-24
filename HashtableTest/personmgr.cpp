#include "personmgr.h"

personmgr::personmgr() 
{
	persons = new hashTable();
}

personmgr::~personmgr() 
{
	if( persons != NULL )
		delete persons;
}

void personmgr::addPerson(person p)
{
	persons->insert(p.id, p);
}

person* personmgr::findPerson(char *id)
{		
	return persons->retrieve(id);	
}

void personmgr::printHtStats()
{
	int i;
	hashTable::node * curr;

	cout << "Data in the table: " << endl << endl;
	for(i=0; i < persons->capacity; i++)
	{
		for(curr = persons->table[i]; curr; curr = curr->next)		
			//we can use << on data object because we overload << in the data class
			cout << '\t' << curr->item << endl;
	}

}