#ifndef GAME_CONTEXT_H
#define GAME_CONTEXT_H

#include <vector>

typedef enum SCREEN_T {
    MAIN_MENU,
    SAVES_MENU,
    PLAY_MENU,
    GAME_EXIT
} SCREEN_T;

typedef struct Save {

} Save;

typedef struct GameContext {
    SCREEN_T currScr;
    Save*     pickedSave;
    std::vector<Save> saves;
} GameContext;


#endif