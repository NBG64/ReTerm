#ifndef RETERM_ENGINE_H
#define RETERM_ENGINE_H

#include <memory>
#include "renderer.h"

class Engine {
private:
    std::unique_ptr<Renderer> renderer;
    bool isRunning = true;
public:

    Engine();

    ~Engine();

    void update();

    bool run_status();

    void stop_running();
};

#endif //RETERM_ENGINE_H