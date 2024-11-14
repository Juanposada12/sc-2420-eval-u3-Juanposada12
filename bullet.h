#ifndef BULLET_H
#define BULLET_H

#include "entity.h"

typedef struct Bullet {
    Entity base;  // Herencia de Entity
    bool active;  // Estado del proyectil (si está en la pantalla)

    void (*move)(struct Bullet* self, float deltaTime);  // Movimiento del proyectil
} Bullet;

Bullet* create_bullet(SDL_Renderer* renderer, float x, float y);
void bullet_move(Bullet* self, float deltaTime);
void cleanup_bullet(Bullet* self);

#endif
