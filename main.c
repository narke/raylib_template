#include "raylib.h"

static void
StartGame(void)
{
	const int screenWidth = 1280;
	const int screenHeight = 720;

	InitWindow(screenWidth, screenHeight, "Raylib Template");

	SetTargetFPS(60);
}

static void
EndGame(void)
{
	CloseWindow();
}

static void
Update(void)
{
}

static void
Render(void)
{
	BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Congrats! You created your first window!", 450, 300, 20, LIGHTGRAY);
	EndDrawing();
}

static void
GameLoop(void)
{
	Update();
	Render();
}


int
main(void)
{
	StartGame();

	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		GameLoop();
	}

	EndGame();

	return 0;
}
