#include <stdio.h>

/*
    Questa funzione aggiunge un nuovo torneo.
*/

void addTournament() {

    int id;
    char name[50];

    // Inserimento dati torneo
    printf("Enter Tournament ID: ");
    scanf("%d", &id);

    printf("Enter Tournament Name: ");
    scanf("%s", name);

    // Conferma aggiunta torneo
    printf("Tournament Added Successfully!\n");
}

/*
    Questa funzione mostra tutti i tornei.
*/

void showTournaments() {

    printf("Showing Tournaments...\n");

    // Qui verranno mostrati i tornei registrati
}

/*
    Questa funzione aggiunge una partita.
*/

void addMatch() {

    int tournamentId;
    int player1;
    int player2;
    int winner;

    // Inserimento dati partita
    printf("Enter Tournament ID: ");
    scanf("%d", &tournamentId);

    printf("Player 1 ID: ");
    scanf("%d", &player1);

    printf("Player 2 ID: ");
    scanf("%d", &player2);

    printf("Winner ID: ");
    scanf("%d", &winner);

    // Conferma aggiunta partita
    printf("Match Added Successfully!\n");
}