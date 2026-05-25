#include <stdio.h>
#include "tornei.h"
#include "coach.h"
#include "ranking.h"

/*
    Progetto: Fantatennis
    Autore: [Il tuo nome]

    Descrizione:
    Questo programma permette di gestire tornei di tennis,
    partite, allenatori e classifiche.
*/

// Funzione principale del programma
int main() {

    int choice;

    do {

        // Menu principale
        printf("\n===== FANTATENNIS =====\n");
        printf("1. Add Tournament\n");
        printf("2. Show Tournaments\n");
        printf("3. Add Match\n");
        printf("4. Register Coach\n");
        printf("5. Show Ranking\n");
        printf("0. Exit\n");

        // Lettura della scelta dell'utente
        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            // Aggiunge un nuovo torneo
            case 1:
                addTournament();
                break;

            // Mostra tutti i tornei registrati
            case 2:
                showTournaments();
                break;

            // Aggiunge una nuova partita
            case 3:
                addMatch();
                break;

            // Registra un nuovo allenatore
            case 4:
                registerCoach();
                break;

            // Mostra la classifica dei giocatori
            case 5:
                showRanking();
                break;

            // Uscita dal programma
            case 0:
                printf("Goodbye!\n");
                break;

            // Gestione errore scelta non valida
            default:
                printf("Scelta non valida!\n");
        }

    } while(choice != 0);

    return 0;
}