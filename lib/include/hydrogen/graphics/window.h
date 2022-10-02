#ifndef HYDROGEN_GRAPHICS_WINDOW_H
#define HYDROGEN_GRAPHICS_WINDOW_H

#include <hydrogen/hydrogen.h>

typedef struct HWindowParams {
    u16 width;
    u16 height;
    u8 shown;
} HWindowParams;

inline HWindowParams hwindow_params() {
    HWindowParams params;
    params.width = 640;
    params.height = 480;
    params.shown = false;
    return params;
}

typedef struct HWindow HWindow;

HWindow *hwindow_create(HWindowParams params);
void hwindow_destroy(HWindow *window);

#endif//HYDROGEN_GRAPHICS_WINDOW_H