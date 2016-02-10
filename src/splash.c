#include <pebble.h>
#include "splash.h"
//TextLayer *text_layer;

void createSplashText(Window *window, TextLayer *textLayer){
  textLayer = text_layer_create(GRect(0, 0, 144, 154));
	// Set the text, font, and text alignment
  text_layer_set_text(textLayer, SPLASH_TEXT);
	text_layer_set_font(textLayer, fonts_get_system_font(FONT_KEY_GOTHIC_28_BOLD));
	text_layer_set_text_alignment(textLayer, GTextAlignmentCenter);
  // Add the text layer to the window
	layer_add_child(window_get_root_layer(window), text_layer_get_layer(textLayer));  
}

void createSplashLayer(Window* window, TextLayer *textLayer) {
  createSplashText(window, textLayer);  
}

void destroySplashLayer(TextLayer *textLayer) {
   text_layer_destroy(textLayer);
}

void splashLayer(Window* window, TextLayer *textLayer){
  createSplashLayer(window, textLayer);
  destroySplashLayer(textLayer);
}