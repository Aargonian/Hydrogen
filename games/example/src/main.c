#include <hydrogen/hydrogen.h>
#include <hydrogen/graphics/graphics.h>

static const u16 WINDOW_WIDTH = 640;
static const u16 WINDOW_HEIGHT = 480;
static const u16 QUAD_WIDTH = 50;
static const u16 QUAD_HEIGHT = 50;
static const u16 QUAD_X = WINDOW_WIDTH/2 - QUAD_WIDTH/2;
static const u16 QUAD_Y = WINDOW_HEIGHT/2 - QUAD_HEIGHT/2;
static const u64 QUAD_RGBA = 0xDD77CCFF;

int main(int argc, char **argv) {
    // Initialize Library
    u8 success = hydrogen_init();
    if (!success) {
        //TODO: Add some simple error-handling code
        return -1;
    }

    // Create Window
    HWindowParams params = hwindow_params();
    params.width = WINDOW_WIDTH;
    params.height = WINDOW_HEIGHT;
    params.shown = true;

    // Ownership of params is passed here, so we don't need to destroy it
    HWindow *window = hwindow_create(params);
    if(!window)
        goto error;

    // Obtain Renderer
    HRenderer *renderer = hrenderer_obtain(window);

    // Add Quad to Scene
    Quad *quad = create_quad(QUAD_WIDTH, QUAD_HEIGHT, QUAD_RGBA);
    quad_set_position(quad, QUAD_X, QUAD_Y);
    hrenderer_add(quad_render_object(renderer));

    // Render
    hrenderer_render(renderer);

    // Kill Application
    hcore_delay(3000);
    hrenderer_release(renderer);
    hwindow_destroy(window);

error:
    // An error occurred, do some cleanup
    if (window) {
        if (renderer) {
            hrenderer_release(renderer);
        }
        hwindow_destroy(window);
    }
}

