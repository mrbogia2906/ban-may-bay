#ifndef _STRUCT_H
#define _STRUCT_H
typedef struct {
	SDL_Renderer *renderer;
	SDL_Window *window;
	int up;
	int down;
	int left;
	int right;
	int fire;
} App;

typedef struct {
	int x;
	int y;
	int dx;
	int dy;
	int health;
	SDL_Texture *texture;
} Entity;

#endif // _STRUCT_H
