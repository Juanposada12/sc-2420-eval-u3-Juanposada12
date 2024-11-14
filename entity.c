#include "entity.h"

void entity_update(Entity* self, float deltaTime) {
    self->x += self->vel_x * deltaTime;
    self->y += self->vel_y * deltaTime;
}

void entity_render(Entity* self, SDL_Renderer* renderer) {
    SDL_Rect rect = { (int)self->x, (int)self->y, (int)self->width, (int)self->height };
    SDL_RenderCopy(renderer, self->texture, NULL, &rect);
}
