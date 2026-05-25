#include<stdio.h>
#include<string.h>



#ifndef TENNISTI_H
#define TENNISTI_H

typedef struct{
    int id;
    char nome[50];
    char cognome[50];
    int ranking;
    float costo;
    char stato[20];
}Tennista;

void addTennista();
void showTennisti();
void searchTennista();
void modifyTennista();
void deleteTennista();
void calculateCostByRanking();

#endif

