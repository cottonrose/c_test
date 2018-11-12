#ifndef __CONTACT_H__
#define __CONTACT_H__

#define NAME_MAX 20
#define SEX_MAX 6
#define NUM_MAX 20
#define ADR_MAX 30
#define MAX 1000
typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char num[NUM_MAX];
	char adr[ADR_MAX];
}PeoInfo;
typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}Contact,*pContact;

void InitContact(pContact p);
void AddContact(pContact p);
void ShowContact(pContact p);
void SubContact(pContact p);
void SearchContact(pContact p);
void ModifyContact(pContact p);
void EmptyContact(pContact p);
void SortContact(pContact p);

#endif //__CONTACT_H__