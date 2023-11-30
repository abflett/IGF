#include "IGF.hpp"

#include <iostream>
#include <SDL3/SDL.h>

namespace igf
{
    IGF::IGF()
    {

        SDL_Init(SDL_INIT_EVERYTHING);

        SDL_Window *window =
            SDL_CreateWindow("SDLVulk Test", 800, 600, SDL_WindowFlags::SDL_WINDOW_RESIZABLE);

        SDL_Renderer *renderer = SDL_CreateRenderer(
            window, NULL, SDL_RendererFlags::SDL_RENDERER_ACCELERATED);

        SDL_Event event;
        bool m_running = true;
        while (m_running)
        {
            while (SDL_PollEvent(&event))
            {
                if (event.type == SDL_EVENT_QUIT)
                {
                    m_running = false;
                }
                if (event.type == SDL_EVENT_KEY_DOWN)
                {
                    auto keysympressed = event.key.keysym.sym;
                    if (event.key.keysym.sym == SDLK_ESCAPE)
                    {
                        m_running = false;
                    }
                }
            }

            SDL_SetRenderDrawColor(renderer, 100, 149, 237, 255);
            SDL_RenderClear(renderer);
            SDL_RenderPresent(renderer);
        }

        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        }

    IGF::~IGF()
    {
        SDL_Quit();
    }

    void IGF::PrintTest()
    {
        std::cout << "Testing from IGF.cpp"
                  << "\n";
    }
}
