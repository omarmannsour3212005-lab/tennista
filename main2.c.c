#include <stdio.h>
#include <string.h>

/* Minimal local definition in case tennisti.h is missing. */
typedef struct {
    int id;
    char nome[64];
    char cognome[64];
    int ranking;
    float costo;
    char stato[32];
} Tennista;

Tennista t[100];
int n = 0;
//funzione per  aggiungere un giocatore

void addTennista(){

    printf("\n--- Ajouter Tennista ---\n");

    printf("ID : ");
    scanf("%d",&t[n].id);

    printf("Nome : ");
    scanf("%s",t[n].nome);

    printf("Cognome : ");
    scanf("%s",t[n].cognome);

    printf("Ranking : ");
    scanf("%d",&t[n].ranking);

    printf("Costo : ");
    scanf("%f",&t[n].costo);

    printf("Stato : ");
    scanf("%s",t[n].stato);

    n++;

    printf("Ajout termine.\n");
}
//funzione per  mostrare il giocatore

void showTennisti(){

    if(n == 0){

        printf("\nListe vide.\n");
        return;
    }

    printf("\n===== Tennisti =====\n");

    for(int i=0; i<n; i++){

        printf("\nTennista %d\n",i+1);

        printf("ID : %d\n",t[i].id);
        printf("Nome : %s\n",t[i].nome);
        printf("Cognome : %s\n",t[i].cognome);
        printf("Ranking : %d\n",t[i].ranking);
        printf("Costo : %.2f\n",t[i].costo);
        printf("Stato : %s\n",t[i].stato);
    }
}
//funzione per cercare un giocatore

void searchTennista(){

    int id;
    int test = 0;

    printf("\nEntrer ID : ");
    scanf("%d",&id);

    for(int i=0; i<n; i++){

        if(t[i].id == id){

            printf("\nTennista trouve.\n");

            printf("Nome : %s\n",t[i].nome);
            printf("Cognome : %s\n",t[i].cognome);
            printf("Ranking : %d\n",t[i].ranking);
            printf("Costo : %.2f\n",t[i].costo);
            printf("Stato : %s\n",t[i].stato);

            test = 1;
        }
    }

    if(test == 0){

        printf("ID introuvable.\n");
    }
}
//funzione per impostare un giocatore

void modifyTennista(){

    int id;
    int test = 0;

    printf("\nID a modifier : ");
    scanf("%d",&id);

    for(int i=0; i<n; i++){

        if(t[i].id == id){

            printf("Nouveau nome : ");
            scanf("%s",t[i].nome);

            printf("Nouveau cognome : ");
            scanf("%s",t[i].cognome);

            printf("Nouveau ranking : ");
            scanf("%d",&t[i].ranking);

            printf("Nouveau costo : ");
            scanf("%f",&t[i].costo);

            printf("Nouveau stato : ");
            scanf("%s",t[i].stato);

            printf("Modification effectuee.\n");

            test = 1;
        }
    }

    if(test == 0){

        printf("Tennista non trouve.\n");
    }
}
//funzione per cancellare un giocatore

void deleteTennista(){

    int id;
    int test = 0;

    printf("\nID a supprimer : ");
    scanf("%d",&id);

    for(int i=0; i<n; i++){

        if(t[i].id == id){

            for(int j=i; j<n-1; j++){

                t[j] = t[j+1];
            }

            n--;

            test = 1;

            printf("Suppression terminee.\n");

            break;
        }
    }

    if(test == 0){

        printf("Aucun resultat.\n");
    }
}
// Funzione per calcolare il costo in base alla classifica del giocatore 
void calculateCostByRanking(){

    int r;
    float c;

    printf("\nEntrer ranking : ");
    scanf("%d",&r);

    if(r <= 10){

        c = 7000;

    }else if(r <= 50){

        c = 4000;

    }else{

        c = 1500;
    }

    printf("Le cout est : %.2f\n",c);
}
