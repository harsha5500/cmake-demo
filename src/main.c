#include "SDL.h"
#include "SDL_image.h"

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow("SDL2Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
    
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    SDL_Delay(3000);

    SDL_DestroyWindow(window);
    SDL_Quit();

    SDL_version compile_version;
    const SDL_version *link_version=IMG_Linked_Version();
    SDL_IMAGE_VERSION(&compile_version);
    printf("compiled with SDL_image version: %d.%d.%d\n", 
        compile_version.major,
        compile_version.minor,
        compile_version.patch);
    printf("running with SDL_image version: %d.%d.%d\n", 
        link_version->major,
        link_version->minor,
        link_version->patch);

    printf("Hello, world!\n");
    return 0;
}
