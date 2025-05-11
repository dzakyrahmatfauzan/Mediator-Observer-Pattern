#pragma once
#include "IEventListener.h"
#include <iostream>

class ScoreSystem : public IEventListener {
public:
    void onEvent(const std::string& event) override;
};
