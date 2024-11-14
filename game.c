#include "game.h"
#include "player.h"
#include "enemy.h"
#include "bullet.h"
#include "button.h"
#include <SDL_ttf.h>
#include <stdlib.h>

void game_init(Game* game) {
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
    game->window = SDL_CreateWindow("Pong Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_BORDERLESS);
    game->renderer = SDL_CreateRenderer(game->window, -1, SDL_RENDERER_ACCELERATED);
    
    game->player = create_player(game->renderer);
    game->enemies = create_enemies(game->renderer);
    game->bullets = create_bullets(game->renderer);
    game->startButton = create_start_button(game->renderer);
    
    game->score = 0;
    game->isRunning = true;
}

void game_run(Game* game) {
    SDL_Event event;

    while (game->isRunning) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT || (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE)) {
                game->isRunning = false;
            }
            game->process_input(game);
        }

        if (!game->startButton->isVisible) {
            game->update(game);
        }

        game->render(game);
    }
}

void game_process_input(Game* game) {
    // Lógica para manejar la entrada del usuario (movimiento del jugador, disparo, etc)
    // Incluir eventos como teclado y mouse.
}

void game_update(Game* game) {
    game->player->update((Entity*)game->player, 0.016); // Actualización de la posición del jugador
    // Llamar al update de enemigos, proyectiles, etc.
}

void game_render(Game* game) {
    SDL_RenderClear(game->renderer);
    // Renderizamos las entidades
    game->player->render((Entity*)game->player, game->renderer);
    // Renderizar enemigos, proyectiles, etc.
    SDL_RenderPresent(game->renderer);
}

void game_clean(Game* game) {
    cleanup_player(game->player);
    cleanup_enemies(game->enemies);
    cleanup_bullets(game->bullets);
    cleanup_button(game->startButton);
    SDL_DestroyRenderer(game->renderer);
    SDL_DestroyWindow(game->window);
    SDL_Quit();
    TTF_Quit();
}
