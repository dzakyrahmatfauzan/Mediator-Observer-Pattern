#pragma once
#include "IObserver.h"
#include <iostream>

class Sound : public IObserver {
public:
    void onNotify(const std::string& event) override;
};
