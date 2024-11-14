#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"

typedef struct Player {
    Entity base; // Herencia de Entity
    int health;
    int score;

    void (*move)(struct Player* self, float deltaTime);
} Player;

Player* create_player(SDL_Renderer* renderer);
void player_move(Player* self, float deltaTime);
void cleanup_player(Player* self);

#endif
