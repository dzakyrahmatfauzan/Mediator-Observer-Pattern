#include "UI.h"

void UI::onNotify(const std::string& event) {
    if (event == "attack") {
        std::cout << "[UI] Updating enemy health bar.\n";
    }
}
