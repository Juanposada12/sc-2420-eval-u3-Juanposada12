#ifndef GAME_H
#define GAME_H

#include <SDL.h>
#include "player.h"
#include "enemy.h"
#include "bullet.h"
#include "button.h"

typedef struct Game {
    SDL_Window* window;
    SDL_Renderer* renderer;
    Player* player;
    Enemy* enemies;      // Usamos un arreglo de enemigos para gestión fácil
    Bullet* bullets;     // Usamos un arreglo de proyectiles
    Button* startButton;
    int score;
    bool isRunning;

    void (*init)(struct Game* self);
    void (*run)(struct Game* self);
    void (*clean)(struct Game* self);
    void (*process_input)(struct Game* self);
    void (*update)(struct Game* self);
    void (*render)(struct Game* self);
} Game;

void game_init(Game* game);
void game_run(Game* game);
void game_clean(Game* game);
void game_process_input(Game* game);
void game_update(Game* game);
void game_render(Game* game);

#endif
