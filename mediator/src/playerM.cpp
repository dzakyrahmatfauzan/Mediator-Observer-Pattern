#include "Player.h"
#include <iostream>

Player::Player(GameEventMediator* mediator) : mediator(mediator) {}

void Player::attack() {
    std::cout << "[Player] Attacks!\n";
    mediator->triggerEvent("attack");
}
