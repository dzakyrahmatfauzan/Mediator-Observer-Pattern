#include "UI.h"

void UI::onEvent(const std::string& event) {
    if (event == "attack") {
        std::cout << "[UI] Updating enemy health bar.\n";
    }
}
