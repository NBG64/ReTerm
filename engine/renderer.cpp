#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>
#include "renderer.h"

Renderer::Renderer() {
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    currentBuffer.resize(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');
    previousBuffer.resize(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');
    init_terminal();
}

Renderer::~Renderer() {
    restore_terminal();
}

void Renderer::init_terminal() {
    std::cout << "\033[2J";
    std::cout << "\033[?25l";
}

void Renderer::restore_terminal() {
    std::cout << "\033[?25h";
    std::cout << "\033[0;0H";
}

void Renderer::draw() {}

void Renderer::render() {}

void Renderer::clear() {
    std::fill(currentBuffer.begin(), currentBuffer.end(), ' ');
}