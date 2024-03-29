#include <SDL.h>

#include <SDL2/SDL.h> 

// Screen dimension constants
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

// Ship dimension constants
const int SHIP_WIDTH = 64;
const int SHIP_HEIGHT = 64;

int main(int argc, char* args[]) {
    // Initialize SDL
    SDL_Init(SDL_INIT_VIDEO);

    // Create a window
    SDL_Window* window = SDL_CreateWindow("Space Shooter", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    // Create a renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // Load ship image
    SDL_Surface* shipSurface = SDL_LoadBMP("ship.bmp");
    SDL_Texture* shipTexture = SDL_CreateTextureFromSurface(renderer, shipSurface);
    SDL_FreeSurface(shipSurface);

    // Ship position
    int shipX = (SCREEN_WIDTH - SHIP_WIDTH) / 2;
    int shipY = SCREEN_HEIGHT - SHIP_HEIGHT;

    // Game loop flag
    bool quit = false;

    // Event handler
    SDL_Event e;

    // Main game loop
    while (!quit) {
        // Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            // Quit event
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        // Clear the screen
        SDL_RenderClear(renderer);

        // Render ship
        SDL_Rect shipRect = { shipX, shipY, SHIP_WIDTH, SHIP_HEIGHT };
        SDL_RenderCopy(renderer, shipTexture, NULL, &shipRect);

        // Update screen
        SDL_RenderPresent(renderer);
    }

    // Destroy ship texture
    SDL_DestroyTexture(shipTexture);

    // Destroy renderer and window
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    // Quit SDL
    SDL_Quit();

    return 0;
}
