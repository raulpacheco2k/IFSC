// Make a program for a hotel. You can register as many rooms as you want. For each room you must provide the room number,
// the number of places and at least one guest (just enter the guest's name). Remember that you should not exceed the number
// of guests according to the capacity of the room).
// At the end of the program, it should be informed how many rooms were registered and how many guests stayed in total.
// Translated with www.DeepL.com/Translator (free version)

#include <stdio.h>
#include <string.h>

int main(){
float room[999], nPlaces[999];

int nRoom = 0, next = 0, nClients, currentClient, i = 0;

char cliente[150] = "";

do{

	i++;

	printf("Inform the number of the room the customer will be staying in\n");
	scanf("%f", &room[i]);

	printf("What is the number of seats in this room?\n");
	scanf("%f", &nPlaces[i]);

	do{
	nClients++;
	currentClient++;

	printf("Guest name: \n");
	scanf("%s", cliente);

	if(currentClient < nPlaces[i]){
		printf("Enter 1 to add more guests, 0 to exit.\n");
		scanf("%d", &next);
	}else{
		next = 0;
		}		


	}while(next == 1 && currentClient < nPlaces[i]);
		currentClient=0;

		printf("Enter 1 to add more rooms, 0 to exit.");
		scanf("%d", &next);
		nRoom++;

		printf("\n\n\n\n");
	}
while(next == 1);

	printf("Has been registered %d rooms; \nSum total guests: %d.", nRoom, nClients);	
}