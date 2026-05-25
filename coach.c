#include <stdio.h>

/*
    Questa funzione permette di registrare
    un nuovo allenatore nel sistema.
*/

void registerCoach() {

    int coachId;
    char coachName[50];

    // Inserimento dati allenatore
    printf("Enter Coach ID: ");
    scanf("%d", &coachId);

    printf("Enter Coach Name: ");
    scanf("%s", coachName);

    // Messaggio di conferma
    printf("Coach Registered Successfully!\n");
}