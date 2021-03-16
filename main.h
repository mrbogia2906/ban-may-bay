#include "common.h"

extern void cleanup(void);
extern void initSDL(void);
extern SDL_Texture *loadTexture(char *filename);
extern void prepareScene(void);
extern void presentScene(void);
extern void blit(SDL_Texture *texture, int x, int y);
extern void doInput(void);

App app;
Entity bullet;
Entity player;
