#include "bullet.h"
#include <SDL.h>
#include <stdlib.h>

Bullet* create_bullet(SDL_Renderer* renderer, float x, float y) {
    Bullet* bullet = (Bullet*)malloc(sizeof(Bullet));
    bullet->base.x = x;
    bullet->base.y = y;
    bullet->base.width = 10;
    bullet->base.height = 20;
    bullet->base.vel_x = 0;
    bullet->base.vel_y = -300;  // Velocidad de disparo hacia arriba
    bullet->base.texture = SDL_CreateTextureFromSurface(renderer, SDL_LoadBMP("bullet.bmp"));
    bullet->base.update = (void (*)(Entity*, float))bullet_move;
    bullet->base.render = entity_render;

    bullet->active = true;
    
    return bullet;
}

void bullet_move(Bullet* self, float deltaTime) {
    entity_update((Entity*)self, deltaTime);
    // Si el proyectil se sale de la pantalla, desactivarlo
    if (self->base.y <= 0) {
        self->active = false;
    }
}

void cleanup_bullet(Bullet* self) {
    SDL_DestroyTexture(self->base.texture);
    free(self);
}
//Con la implementación de las clases Enemy y Bullet, hemos seguido el mismo patrón que utilizamos para la clase Player, lo que asegura que el código sea consistente y fácil de extender. Además, al usar una estructura orientada a objetos en C (simulada a través de structs y punteros a funciones), logramos una arquitectura más modular y escalable.