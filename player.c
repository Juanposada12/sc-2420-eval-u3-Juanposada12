#include "player.h"
#include <SDL_ttf.h>
#include <stdlib.h>

Player* create_player(SDL_Renderer* renderer) {
    Player* player = (Player*)malloc(sizeof(Player));
    player->base.x = 350;
    player->base.y = 560;
    player->base.width = 100;
    player->base.height = 20;
    player->base.vel_x = 0;
    player->base.texture = SDL_CreateTextureFromSurface(renderer, SDL_LoadBMP("player.bmp"));
    player->base.update = (void (*)(Entity*, float))player_move;
    player->base.render = entity_render;
    player->health = 100;
    player->score = 0;
    return player;
}

void player_move(Player* self, float deltaTime) {
    entity_update((Entity*)self, deltaTime);
    if (self->base.x <= 0) self->base.x = 0;
    if (self->base.x >= 800 - self->base.width) self->base.x = 800 - self->base.width;
}

void cleanup_player(Player* self) {
    SDL_DestroyTexture(self->base.texture);
    free(self);
}
