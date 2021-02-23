#include "person.h"

person::person(const char *id, const char *fname, const char *lname, const char *familyid)
{
	allocMemory();

	strcpy(this->id, id);
	strcpy(this->fname, fname);
	strcpy(this->lname, lname);
	strcpy(this->familyId, familyid);
}

person::~person() {
	freeMemory();
}

person::person(const person &p1) 
{
	freeMemory();
	allocMemory();

	strcpy(this->id, p1.id);
	strcpy(this->fname, p1.fname);
	strcpy(this->lname, p1.lname);
	strcpy(this->familyId, p1.familyId);
}

void person::allocMemory() 
{
	this->id = (char *) malloc(100 * sizeof(char));
	this->fname = (char *) malloc(100 * sizeof(char));
	this->lname = (char *) malloc(100 * sizeof(char));
	this->familyId = (char *) malloc(100 * sizeof(char));
}

void person::freeMemory() 
{
	free(this->id);
	free(this->fname);
	free(this->lname);
	free(this->familyId);

	this->id = NULL;
	this->fname = NULL;
	this->lname = NULL;
	this->familyId = NULL;
}

void person::getPccId(char * pccId) const
{
	strcpy(pccId, this->id);
}

