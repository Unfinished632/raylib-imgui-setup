#include "engine.h"
#include <raylib.h>

Engine::Engine(int windowWidth, int windowHeight, const char* title){
    #ifdef RELEASE_BUILD
        SetTraceLogLevel(LOG_NONE);
    #endif


    InitWindow(windowWidth, windowHeight, title);
    this->windowWidth = windowWidth;
    this->windowHeight = windowHeight;

    IMGUI_CHECKVERSION();

    rlImGuiSetup(true);
}

Engine::~Engine(){
    rlImGuiShutdown();
    CloseWindow();
}

void Engine::StartFrame(){
    BeginDrawing();
    rlImGuiBegin();
}

void Engine::EndFrame(){
    rlImGuiEnd();
    EndDrawing();
}

void Engine::ClearBuffer(){
    ClearBackground(clearColor);
}