#pragma once
#include <vector>
#include <string>
#include "IObserver.h"

class Player {
public:
    void addObserver(IObserver* observer);
    void attack();
private:
    std::vector<IObserver*> observers;
    void notify(const std::string& event);
};
