#ifndef SCREENS
#define SCREENS
#include "gameplay/gameplay.h"
#include "ui/context/game_context.h"

class GameScreen {
public:
    virtual void show(GameContext* gctx) { };
};

class MainMenuScreen : public GameScreen {
public:
    void show(GameContext* gctx) override;
};

class SavesScreen : public GameScreen {
public:
    void show(GameContext* gctx) override;
};

class PlayScreen : public GameScreen {
private:
    Gameplay gameplay;
public:
    void show(GameContext* gctx) override;
};


#endif