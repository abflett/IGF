#include "IGFCore.h"
#include <SDL3/SDL.h>

using namespace std;

int main(int argc, char* argv[])
{
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window* window = SDL_CreateWindow("IGF", 800, 600, SDL_WindowFlags::SDL_WINDOW_RESIZABLE);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, nullptr, SDL_RENDERER_ACCELERATED);

	cout << "Hello CMake." << endl;
    bool m_running = true;

    SDL_Event event;
    while (m_running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                m_running = false;
            }
            if (event.type == SDL_EVENT_KEY_DOWN) {
                auto keysympressed = event.key.keysym.sym;
                if (event.key.keysym.sym == SDLK_ESCAPE) {
                    m_running = false;
                }
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

	return 0;
}
