#include "Sound.h"

void Sound::onNotify(const std::string& event) {
    if (event == "attack") {
        std::cout << "[Sound] Playing attack sound.\n";
    }
}
