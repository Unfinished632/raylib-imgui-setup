#include <raylib.h>
#include <imgui.h>
#include <rlImGui.h>

#include "engine.h"

int main(){
    Engine* engine = new Engine(500, 500, "Example");

    //Game Loop
    while(!WindowShouldClose()){
        engine->StartFrame();
        engine->ClearBuffer();

        //Loop code...
        
        engine->EndFrame();
    }

    delete engine;

    return 0;
}