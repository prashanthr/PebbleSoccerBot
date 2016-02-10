#include <pebble.h>
#include "menu.h"

MenuLayer *menu_layer;
void createMenuLayer(Window* window, TextLayer *textLayer) {
  
}

void destroyMenuLayer(TextLayer *textLayer) {
  
}

void menuLayer(Window* window, TextLayer *textLayer){
  createMenuLayer(window, textLayer);
  destroyMenuLayer(textLayer);
}