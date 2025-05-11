#include "Player.h"
#include "UI.h"
#include "Sound.h"
#include "ScoreSystem.h"

int main() {
    Player player;
    UI ui;
    Sound sound;
    ScoreSystem score;

    // Register observers
    player.addObserver(&ui);
    player.addObserver(&sound);
    player.addObserver(&score);

    // Simulate attack
    player.attack();

    return 0;
}
