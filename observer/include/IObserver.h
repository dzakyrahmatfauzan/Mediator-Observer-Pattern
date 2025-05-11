#pragma once
#include <string>

class IObserver {
public:
    virtual void onNotify(const std::string& event) = 0;
    virtual ~IObserver() = default;
};
