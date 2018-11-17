#ifndef __CONTACT_H__
#define __CONTACT_H__

#define DEFAULT_SZ 3
#define NAME_MAX 20
#define SEX_MAX 6
#define NUM_MAX 20
#define ADR_MAX 30

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
	PeoInfo *data;
	int sz;
	int capacity;
}Contact,*pContact;

void InitContact(pContact p);
void DestoryContact(pContact p);

void AddContact(pContact p);
void ShowContact(pContact p);
void SubContact(pContact p);
void SearchContact(pContact p);
void ModifyContact(pContact p);
void EmptyContact(pContact p);
void SortContact(pContact p);
int check_capacity(pContact p);

void SaveContact(pContact p);
void LoadContact(pContact p);


#endif //__CONTACT_H__