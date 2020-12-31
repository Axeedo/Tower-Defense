#include <memory>
#include <Game.h>


int main(int argc, char* args[])
{
    //launch a game instance

    //Following is a smart pointer declaration (experiment)
    //game is deleted automatically when it goes out of scope (like in java)
    std::unique_ptr<Game> game(new Game());

    game->mainLoop();

    return 0;
}

