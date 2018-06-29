#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int bool;
#define true 1;
#define false 0;

typedef struct People {
    char *name;
    int age;
    bool married;
    int cpf[4];
    int **friendship;
    int quantityFriends;
} People; 

People **peopleList = NULL;
int sizePeopleList = 0;

void setCpf(int n[4], People *pp)
{
	int i;
	
	for(i = 0; i < 4; i++)
	{
		pp->cpf[i] = n[i];
	}	
};

int sizeString(char * string)
{	
	int i = 0;
	for(i = 0; string[i] != '\0'; i++);
	return i;
}

void setName(char * name, People *pp)
{
	pp->name = (char *) malloc(sizeString(name));
	strcpy(pp->name, name);
}

void setFriend(People *people, People *friend)
{
	int listSize = people->quantityFriends + 1;
	
	people->friendship = (int **) realloc(people->friendship, listSize * sizeof(int *));
	people->friendship[listSize - 1] = friend->cpf;
	
	people->quantityFriends = people->quantityFriends +1;

}

void addPeopleList(People *people)
{
	sizePeopleList = sizePeopleList+1;
	peopleList = (People **) realloc(peopleList, sizePeopleList * sizeof(People *));
	peopleList[sizePeopleList - 1] = people;	
}

void * toBuffer(People **peopleList)
{

	int totalBuffer = 0;

	for(int i = 0; i < sizePeopleList ; i++)
	{
		int qttString = sizeString(peopleList[i]->name)+1;
		int qttFriends = peopleList[i]->quantityFriends;
		totalBuffer += qttFriends + qttString + sizeof(People);		
	}	
	
	int totalBuffer = sum;
	 //return (People *) malloc(sizePeopleList * (sizeof(People *) + sum));
}
	

int main(void)
{

    People alex, jeff, mony;

    alex.age = 0;
    setName("Alex", &alex);
    alex.age = 25;
    alex.married = 0;
    alex.quantityFriends = 0;
	int acpf[4] = {101,111,181,11};
	setCpf(acpf, &alex);
    alex.quantityFriends = 0;
 	alex.friendship = NULL;


    setName("Jeff", &jeff);
    jeff.age = 27;
    jeff.married = 0;
    jeff.quantityFriends = 0; 	
 	int jcpf[4] = {252,232,292,22};
	setCpf(jcpf, &jeff);
	alex.quantityFriends = 0;
 	alex.friendship = NULL;


    setName("Mony", &mony);
    mony.age = 20;
    mony.married = 0;
	int mcpf[4] = {1,2,3,4};
	setCpf(mcpf, &mony);
	mony.quantityFriends = 0;
 	mony.friendship = NULL;


	setFriend(&mony, &jeff);
	setFriend(&mony, &alex);
	setFriend(&alex, &jeff);


	addPeopleList(&mony);
	addPeopleList(&alex);
	addPeopleList(&jeff);


	toBuffer(*&peopleList);


	free(alex.name);
	free(jeff.name);
	free(mony.name);
	
	free(alex.friendship);
//	free(jeff.friendship);
//	free(mony.friendship);
}