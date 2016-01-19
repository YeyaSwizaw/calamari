//
// Created by Sam Sleight on 18/01/2016.
//

#include "calamari/application.hpp"

CALAMARI_NS

Application::Application()
    : window(events, 800, 600, "Hello World"), renderer(window), events(*this) {}

void Application::run() {
    while (!window.should_close()) {
        state->tick();

        renderer.clear(0.0f, 0.5f, 0.7f, 1.0f);
        renderer.render();

        window.poll_events();
    }
}

void Application::quit() {
    window.close();
}

CALAMARI_NS_END