#ifndef RETERM_RENDERER_H
#define RETERM_RENDERER_H

#include <vector>

class Renderer {
private:
    std::vector<char> currentBuffer;
    std::vector<char> previousBuffer;
    int SCREEN_WIDTH;
    int SCREEN_HEIGHT;


    void static init_terminal();

    void static restore_terminal();

    void move_cursor(int x, int y);

public:
    Renderer();

    ~Renderer();

    void draw();

    void render();

    void clear();
};

#endif //RETERM_RENDERER_H
