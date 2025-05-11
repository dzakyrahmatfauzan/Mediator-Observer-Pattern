#pragma once
#include <vector>
#include <string>
#include "IEventListener.h"

class GameEventMediator {
public:
    void registerListener(IEventListener* listener);
    void triggerEvent(const std::string& event);
private:
    std::vector<IEventListener*> listeners;
};
