//
// Created by Thomas on 02/08/2025.
//

#ifndef BASIC_H
#define BASIC_H

typedef struct item {
    char name[30];
    char type[30];
    int damage; //referente ao dano que será aplicado
    int defense; //vai aumentar a vida maxima quando equipado
}item;

typedef struct inventory {
    struct inventory *next;
    struct invetory *prev;
    struct item item;
}inventory;

typedef enum{
    guerreiro,
    arqueiro
}class;
typedef struct player {
    char name[50];
    enum class class;
    int hp, maxhp;
    int xp, lvl;
    int atk; // atk = dano do item equipado + bonus da classe
    struct item equipado[2];// 2 itens podem ser quipados como 2 de ataque, ou um ataque e um de defesa, por exemplo
    struct inventario* inv;
}player;

typedef struct enemy {
    char name[50];
    int atk;
    int hp, hpmax;
    int rewardxp;
};

#endif //BASIC_H
