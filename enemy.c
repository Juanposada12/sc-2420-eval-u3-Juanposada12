#include "enemy.h"
#include <SDL.h>
#include <stdlib.h>

Enemy* create_enemy(SDL_Renderer* renderer) {
    Enemy* enemy = (Enemy*)malloc(sizeof(Enemy));
    enemy->base.x = rand() % 800;  // Posición aleatoria en el eje X
    enemy->base.y = rand() % 300;  // Posición aleatoria en el eje Y
    enemy->base.width = 50;
    enemy->base.height = 50;
    enemy->base.vel_x = 0;
    enemy->base.vel_y = 100;  // Velocidad de caída del enemigo
    enemy->base.texture = SDL_CreateTextureFromSurface(renderer, SDL_LoadBMP("enemy.bmp"));
    enemy->base.update = (void (*)(Entity*, float))enemy_move;
    enemy->base.render = entity_render;

    enemy->health = 50;
    enemy->active = true;
    
    return enemy;
}

void enemy_move(Enemy* self, float deltaTime) {
    entity_update((Entity*)self, deltaTime);
    // Si el enemigo se sale de la pantalla, desactivarlo
    if (self->base.y >= 600) {
        self->active = false;
    }
}

void cleanup_enemy(Enemy* self) {
    SDL_DestroyTexture(self->base.texture);
    free(self);
}
