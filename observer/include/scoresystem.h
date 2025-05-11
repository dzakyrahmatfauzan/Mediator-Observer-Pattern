#pragma once
#include "IObserver.h"
#include <iostream>

class ScoreSystem : public IObserver {
public:
    void onNotify(const std::string& event) override;
};
