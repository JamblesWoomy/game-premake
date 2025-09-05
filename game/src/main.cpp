/*
Raylib example file.
This is an example main file for a simple raylib project.
Use this as a starting point or replace it with your code.

-- Copyright (c) 2020-2024 Jeffery Myers
--
--This software is provided "as-is", without any express or implied warranty. In no event 
--will the authors be held liable for any damages arising from the use of this software.

--Permission is granted to anyone to use this software for any purpose, including commercial 
--applications, and to alter it and redistribute it freely, subject to the following restrictions:

--  1. The origin of this software must not be misrepresented; you must not claim that you 
--  wrote the original software. If you use this software in a product, an acknowledgment 
--  in the product documentation would be appreciated but is not required.
--
--  2. Altered source versions must be plainly marked as such, and must not be misrepresented
--  as being the original software.
--
--  3. This notice may not be removed or altered from any source distribution.
 https://www.youtube.com/watch?v=TGo3Oxdpr5o&list=PLwR6ZGPvjVOSRywn9VCQ3yrRVruxzzuo9&index=7
*/

#include "raylib.h"
#include "raymath.h"

#include "game.h"   // an external header in this project
#include "lib.h"	// an external header in the static lib project
#include "spaceship.h"
#include "spaceship.cpp"
#include "gameLoop.h"
#include "gameLoop.cpp"
#include "obstacle.h"
#include "obstacle.cpp"


void GameInit()
{
    SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_RESIZABLE);
    InitWindow(InitialWidth, InitialHeight, "GDP 204 Assessment 2");
    SetTargetFPS(60);

    // load resources
}

void GameCleanup()
{
    // unload resources

    CloseWindow();
}

bool GameUpdate()
{
    return true;
}

void GameDraw()
{
    Color grey = { 29,29,27,255 };
    BeginDrawing();
    ClearBackground(grey);

    //DrawText("Hello Raylib!", 10, 10, 20, GetTextColor());

    EndDrawing();
}

int main()
{
    GameInit();
    //Spaceship spaceship;
    Game game;
    Obstacle obstacle = Obstacle({ 100,100 });

    while (!WindowShouldClose())
    {
        game.HandleInput();
        game.Update();
        if (!GameUpdate())
            break;
        game.Draw();
        obstacle.Draw();
        GameDraw();
    }
    GameCleanup();
    
    return 0;
}