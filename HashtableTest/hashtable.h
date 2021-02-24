#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "person.h"

class hashTable
{
public:
	hashTable();
	hashTable(const hashTable& aTable);
	~hashTable();

	const hashTable& operator= (const hashTable& aTable);

	void insert(char const * const key, const person& aData);
	bool remove(char const * const key);
	person* retrieve(char const * const key);
	int getSize(void)const;

	friend ostream& operator<<(ostream& out, hashTable& ht);

	struct node
	{
		person item;
		node * next;
		node(const person& aData) : item(aData), next(NULL) {}
	};



	node ** table;
	int capacity;
private:
	int size;
	const static int DEFAULT_CAPACITY = 9973;

	void destroyTable();
	size_t calculateIndex(char const * const key)const;
};
#endif