#include "Player.h"
#include "UI.h"
#include "Sound.h"
#include "ScoreSystem.h"
#include "GameEventMediator.h"

int main() {
    GameEventMediator mediator;

    UI ui;
    Sound sound;
    ScoreSystem score;

    // Register listeners to the mediator
    mediator.registerListener(&ui);
    mediator.registerListener(&sound);
    mediator.registerListener(&score);

    Player player(&mediator);
    player.attack();

    return 0;
}
