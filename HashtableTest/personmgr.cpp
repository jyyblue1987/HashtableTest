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
	return persons->lookup(id);	
}

void personmgr::printHtStats()
{
	int i;
	int use_count = 0;
	for(i=0; i < persons->capacity; i++)
	{
		if( persons->table[i] != NULL )
			use_count++;
	}

	cout << "Table uses " << use_count << " out of " << persons->capacity << " entries.";

}