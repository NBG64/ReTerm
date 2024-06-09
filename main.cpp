#include <iostream>

#include "engine/engine.h"

int main([[maybe_unused]] int argc, [[maybe_unused]] char **argv) {
    Engine engine;

    while (engine.run_status()) {
        engine.update();
    }

    return 0;
}