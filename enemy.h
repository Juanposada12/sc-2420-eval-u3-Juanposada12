#ifndef ENEMY_H
#define ENEMY_H

#include "entity.h"

typedef struct Enemy {
    Entity base;  // Herencia de Entity
    int health;   // Salud del enemigo
    bool active;  // Estado del enemigo (si está activo en el juego)

    void (*move)(struct Enemy* self, float deltaTime);  // Movimiento específico del enemigo
} Enemy;

Enemy* create_enemy(SDL_Renderer* renderer);
void enemy_move(Enemy* self, float deltaTime);
void cleanup_enemy(Enemy* self);

#endif
