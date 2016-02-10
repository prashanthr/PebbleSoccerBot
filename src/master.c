#include <pebble.h>
#include "splash.h"
#include "menu.h"
#include "master.h"

static Window *s_main_window;
TextLayer *text_layer;

static void main_window_load(Window *window) {
  // Create Window's child Layers here  
}

static void main_window_unload(Window *window) {
  // Destroy Window's child Layers here

}

static void init() {
  // Create main Window
  s_main_window = window_create();
  window_set_window_handlers(s_main_window, (WindowHandlers) {
    .load = main_window_load,
    .unload = main_window_unload,
  });
  //CREATE SPLASH LAYER
  splashLayer(s_main_window, text_layer); 
  menuLayer(s_main_window, text_layer);
  window_stack_push(s_main_window, true);
  
}

static void deinit() {
  // Destroy main Window
  window_destroy(s_main_window);
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}