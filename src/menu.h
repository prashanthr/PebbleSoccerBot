#pragma once
static const char* MENU_TRACK = "TRACK";
static const char* MENU_STATS = "STATS";
static const char* MENU_CREDITS = "CREDITS";

void createMenuLayer(Window* window, TextLayer *textLayer);
void destroyMenuLayer(TextLayer *textLayer);
void menuLayer(Window* window, TextLayer *textLayer);