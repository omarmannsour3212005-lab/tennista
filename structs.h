#ifndef STRUCT_H
#define STRUCT_H

typedef struct {
    int id;
    char nome[50];
    char cognome[50];
    int ranking;
    int crediti;
    int disponibile; // 1 = disponibile, 0 = non disponibile
} Tennista;

typedef struct {
    int id;
    char nome[50];
    char vincitore[50];
    int iniziato; // 0 = non iniziato, 1 = iniziato
} Torneo;

typedef struct {
    int id;
    int idTorneo;
    int idTennista1;
    int idTennista2;
    int vincitore;
    int setTennista1;
    int setTennista2;
    int ace1;
    int ace2;
    int doppiFalli1;
    int doppiFalli2;
    int break1;
    int break2;
} Match;

typedef struct {
    char nickname[50];
} Coach;

typedef struct {
    char nicknameCoach[50];
    int idTorneo;
    int idTennisti[6];
    int punteggioTotale;
} Squadra;

#endif