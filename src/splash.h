#pragma once
static const char* SPLASH_TEXT = "Hello, \n Welcome to SoccerBot!";

void createSplashText(Window *window, TextLayer *textLayer);
void createSplashLayer(Window* window, TextLayer *textLayer);
void destroySplashLayer(TextLayer *textLayer);
void splashLayer(Window* window, TextLayer *textLayer);