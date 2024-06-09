#include <memory>

#include "engine.h"
#include "renderer.h"

Engine::Engine() : renderer(std::make_unique<Renderer>()) {

}

Engine::~Engine() {

}

void Engine::update() {

}

bool Engine::run_status() {
    return isRunning;
}

void Engine::stop_running() {
    isRunning = false;
}
