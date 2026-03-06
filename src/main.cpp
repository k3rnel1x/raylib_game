#include "game.h"

int main(int argc, char* argv[])
{
    Game    app;
    app.init();
    return app.run(argc, argv);
}
