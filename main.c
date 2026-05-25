#include <stdio.h>
#include <string.h>
#include "structs.h"
#include "files.h"

/*
 * Funzione: inserisciTennista
 * --------------------------
 * Permette all'amministratore di inserire i dati di un tennista.
 * I dati vengono salvati nel file binario tramite la funzione salvaTennista().
 */
void inserisciTennista() {

    // Dichiarazione di una variabile di tipo Tennista
    Tennista player;

    // Titolo della sezione
    printf("\n=== INSERIMENTO TENNISTA ===\n");

    // Inserimento dell'ID univoco del tennista
    printf("Inserisci il ID: ");
    scanf("%d", &player.id);

    // Inserimento del nome
    printf("Inserisci il Nome: ");
    scanf("%s", player.nome);

    // Inserimento del cognome
    printf("Inserisci il Cognome: ");
    scanf("%s", player.cognome);

    // Inserimento della posizione nel ranking ATP/WTA
    printf("Inserisci il Ranking: ");
    scanf("%d", &player.ranking);

    // Inserimento del costo in crediti del tennista
    printf("Inserisci il Crediti: ");
    scanf("%d", &player.crediti);

    // Inserimento dello stato del tennista: 1 disponibile, 0 non disponibile
    printf("Il tennista e disponibile? (1 = Si, 0 = No): ");
    scanf("%d", &player.disponibile);

    // Salvataggio del tennista nel file binario
    salvaTennista(player);

    // Messaggio di conferma
    printf("\nTennista salvato correttamente!\n");

    // Visualizzazione dei dati appena inseriti
    printf("\n=== DATI TENNISTA ===\n");
    printf("ID: %d\n", player.id);
    printf("Nome: %s\n", player.nome);
    printf("Cognome: %s\n", player.cognome);
    printf("Ranking: %d\n", player.ranking);
    printf("Crediti: %d\n", player.crediti);
    printf("Disponibilita: %s\n", player.disponibile ? "Si" : "No");
}

/*
 * Funzione principale del programma.
 * Mostra il menu iniziale e permette all'utente di scegliere
 * se accedere come amministratore, come Fanta-Coach oppure uscire.
 */
int main() {

    // Variabile usata per memorizzare la scelta dell'utente nel menu principale
    int scelta;

    // Titolo del programma
    printf("=== FANTATENNIS ===\n");

    // Menu principale richiesto dalla traccia
    printf("1. Admin\n");
    printf("2. Fanta-Coach\n");
    printf("3. Esci\n");

    // Lettura della scelta dell'utente
    printf("Scegli un'opzione: ");
    scanf("%d", &scelta);

    // Gestione della scelta principale
    switch (scelta) {

        case 1: {

            // Variabile per la scelta nel menu amministratore
            int sceltaAdmin;

            // Menu amministratore
            printf("\n=== ADMIN ===\n");
            printf("1. Aggiungi Tennista\n");
            printf("2. Visualizza Tennisti\n");
            printf("3. Cerca Tennista\n");
            printf("4. Indietro\n");

            // Lettura della scelta admin
            printf("Scegli un'opzione: ");
            scanf("%d", &sceltaAdmin);

            // Gestione delle funzionalità dell'amministratore
            switch (sceltaAdmin) {

                case 1:
                    // Inserimento e salvataggio di un nuovo tennista
                    inserisciTennista();
                    break;

                case 2:
                    // Visualizzazione di tutti i tennisti salvati nel file
                    visualizzaTennisti();
                    break;

                case 3:
                    // Ricerca di un tennista nel file
                    cercaTennista();
                    break;

                case 4:
                    // Ritorno al menu principale
                    printf("Ritorno al menu principale...\n");
                    break;

                default:
                    // Gestione di una scelta non valida
                    printf("Scelta non valida.\n");
            }

            break;
        }

        case 2: {

            // Variabile per la scelta nel menu Fanta-Coach
            int sceltaCoach;

            // Menu dedicato al Fanta-Coach
            printf("\n=== FANTA-COACH ===\n");
            printf("1. Registrazione\n");
            printf("2. Login\n");
            printf("3. Crea Squadra\n");
            printf("4. Visualizza Classifica\n");

            // Lettura della scelta coach
            printf("Scegli un'opzione: ");
            scanf("%d", &sceltaCoach);

            // Gestione delle funzionalità del Fanta-Coach
            switch (sceltaCoach) {

                case 1:
                    printf("Funzione di registrazione non implementata.\n");
                    break;

                case 2:
                    printf("Funzione di login non implementata.\n");
                    break;

                case 3:
                    printf("Funzione di creazione squadra non implementata.\n");
                    break;

                case 4:
                    printf("Funzione di visualizzazione classifica non implementata.\n");
                    break;

                default:
                    printf("Scelta non valida.\n");
            }

            break;
        }

        case 3:
            // Chiusura del programma
            printf("Uscita dal programma...\n");
            break;

        default:
            // Scelta non valida nel menu principale
            printf("Scelta non valida.\n");
    }

    return 0;
}