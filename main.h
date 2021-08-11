//
//  main1.h
//  dataStructures-01_linkedList
//
//  Created by Luiz Carlos da Silva Araujo on 11/08/21.
//

#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//##############################################################################
//MARK: - Declarações de Tipos
struct tAluno {
    int matricula;
    char nome[20];
    int serie;
    char turma;
};

struct tNo {
    struct tAluno dado;
    struct tNo *prox;
};


//##############################################################################
//MARK: - Protótipos

char menuPrincipal(void);

struct tAluno receberDadosAluno(struct tNo *inicio);
void listarAluno(struct tAluno, char);
// Entradas com validações
int atribuirMatricula(struct tNo *inicio);
char receberValidarNome(void);


// Utils
struct tNo* retornarPrimeiroNo(struct tNo *inicio);
struct tNo* retornarUltimoNo(struct tNo *inicio);



#endif /* main_h */
