#include <stdio.h>
#include "files.h"

void salvaTennista(Tennista t) {
    FILE *file = fopen("tennisti.dat", "ab");

    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return;
    }

    fwrite(&t, sizeof(Tennista), 1, file);
    fclose(file);
}

void visualizzaTennisti() {
    FILE *file = fopen("tennisti.dat", "rb");
    Tennista t;

    if (file == NULL) {
        printf("Nessun tennista salvato.\n");
        return;
    }

    printf("\n=== LISTA TENNISTI ===\n");

    while (fread(&t, sizeof(Tennista), 1, file) == 1) {
        printf("\nID: %d\n", t.id);
        printf("Nome: %s\n", t.nome);
        printf("Cognome: %s\n", t.cognome);
        printf("Ranking: %d\n", t.ranking);
        printf("Crediti: %d\n", t.crediti);
        printf("Disponibile: %s\n", t.disponibile ? "Si" : "No");
    }

    fclose(file);
}
void cercaTennista() {
    FILE *file = fopen("tennisti.dat", "rb");
    Tennista t;
    int idCercato;
    int trovato = 0;

    if (file == NULL) {
        printf("Nessun tennista salvato.\n");
        return;
    }

    printf("Inserisci ID del tennista da cercare: ");
    scanf("%d", &idCercato);

    while (fread(&t, sizeof(Tennista), 1, file) == 1) {
        if (t.id == idCercato) {
            printf("\n=== TENNISTA TROVATO ===\n");
            printf("ID: %d\n", t.id);
            printf("Nome: %s\n", t.nome);
            printf("Cognome: %s\n", t.cognome);
            printf("Ranking: %d\n", t.ranking);
            printf("Crediti: %d\n", t.crediti);
            printf("Disponibile: %s\n", t.disponibile ? "Si" : "No");

            trovato = 1;
            break;
        }
    }

    if (trovato == 0) {
        printf("Tennista non trovato.\n");
    }

    fclose(file);
}