#include "Player.h"
#include <iostream>

void Player::addObserver(IObserver* observer) {
    observers.push_back(observer);
}

void Player::attack() {
    std::cout << "[Player] Attacks!\n";
    notify("attack");
}

void Player::notify(const std::string& event) {
    for (auto* obs : observers) {
        obs->onNotify(event);
    }
}
