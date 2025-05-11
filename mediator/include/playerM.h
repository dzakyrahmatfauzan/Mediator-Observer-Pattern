#pragma once
#include <string>
#include "GameEventMediator.h"

class Player {
public:
    Player(GameEventMediator* mediator);
    void attack();
private:
    GameEventMediator* mediator;
};
