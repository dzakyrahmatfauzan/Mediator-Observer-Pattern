#include "GameEventMediator.h"

void GameEventMediator::registerListener(IEventListener* listener) {
    listeners.push_back(listener);
}

void GameEventMediator::triggerEvent(const std::string& event) {
    for (auto* l : listeners) {
        l->onEvent(event);
    }
}
