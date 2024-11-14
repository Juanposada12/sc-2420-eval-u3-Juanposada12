#ifndef ENTITY_H
#define ENTITY_H

#include <SDL.h>

typedef struct Entity {
    float x, y, width, height, vel_x, vel_y;
    SDL_Texture* texture;

    void (*update)(struct Entity* self, float deltaTime);
    void (*render)(struct Entity* self, SDL_Renderer* renderer);
} Entity;

void entity_update(Entity* self, float deltaTime);
void entity_render(Entity* self, SDL_Renderer* renderer);

#endif

