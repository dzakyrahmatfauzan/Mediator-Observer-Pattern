#include "ScoreSystem.h"

void ScoreSystem::onNotify(const std::string& event) {
    if (event == "attack") {
        std::cout << "[ScoreSystem] Enemy dead? Adding score.\n";
    }
}
