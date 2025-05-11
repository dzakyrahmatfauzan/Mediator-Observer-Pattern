#pragma once
#include "IObserver.h"
#include <iostream>

class UI : public IObserver {
public:
    void onNotify(const std::string& event) override;
};
