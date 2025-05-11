#pragma once
#include "IEventListener.h"
#include <iostream>

class Sound : public IEventListener {
public:
    void onEvent(const std::string& event) override;
};
