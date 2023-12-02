#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        printf("SDL could not initialize: Error %s\n", SDL_GetError());
        return 1;
    }

    // SDL Window setup
    SDL_Window *window = SDL_CreateWindow("SDL2 Tutorial",
                                          SDL_WINDOWPOS_UNDEFINED,
                                          SDL_WINDOWPOS_UNDEFINED,
                                          640, 480, 0);

    if (window == nullptr)
    {
        printf("Unable to create window. Error %s\n", SDL_GetError());
        return 1;
    }

    // Wait for 2,000 miliseconds (2 seconds)
    SDL_Delay(2000);

    // Destroy the window and shutdown the program
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

// #include <SDL2/SDL.h>
// #include <iostream>

// int main()
// {
//     if (SDL_Init(SDL_INIT_VIDEO) < 0)
//     {
//         std::cout << "Failed to initialize the SDL2 library\n";
//         return -1;
//     }

//     SDL_Window *window = SDL_CreateWindow("SDL2 Window",
//                                           SDL_WINDOWPOS_CENTERED,
//                                           SDL_WINDOWPOS_CENTERED,
//                                           680, 480,
//                                           0);

//     if (!window)
//     {
//         std::cout << "Failed to create window\n";
//         return -1;
//     }

//     SDL_Surface *window_surface = SDL_GetWindowSurface(window);

//     if (!window_surface)
//     {
//         std::cout << "Failed to get the surface from the window\n";
//         return -1;
//     }

//     SDL_UpdateWindowSurface(window);

//     // SDL_Delay(5000);
// }