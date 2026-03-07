#include "game.h"

int main(int argc, char* argv[])
{
    std::vector<Save> saves;
    saves.at(0).background.at(0).setName("bg");

    Game app(saves);
    app.init();
    return app.run(argc, argv);
}
