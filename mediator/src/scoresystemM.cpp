#include "ScoreSystem.h"

void ScoreSystem::onEvent(const std::string& event) {
    if (event == "attack") {
        std::cout << "[ScoreSystem] Enemy dead? Adding score.\n";
    }
}
