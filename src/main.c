#include <gb/gb.h>
#include <stdio.h>

void main() {

    uint8_t currently_pressed_buttons;

    printf("Press any button");

    while (1) {
        currently_pressed_buttons = joypad();

        // Just a quick test for inputs
        if (currently_pressed_buttons & J_DOWN)
            printf("Down");
        if (currently_pressed_buttons & J_UP)
            printf("Up");
        if (currently_pressed_buttons & J_RIGHT)
            printf("Right");
        if (currently_pressed_buttons & J_LEFT)
            printf("Left");
        if (currently_pressed_buttons & J_A)
            printf("A");
        if (currently_pressed_buttons & J_B)
            printf("B");
        if (currently_pressed_buttons & J_START)
            printf("START");
        if (currently_pressed_buttons & J_SELECT)
            printf("SELECT");
        
        printf("\n");

        while (currently_pressed_buttons == joypad());
    }
}