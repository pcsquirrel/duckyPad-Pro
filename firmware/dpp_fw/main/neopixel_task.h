#ifndef __NEOPIXEL_TASK_H
#define __NEOPIXEL_TASK_H

#ifdef __cplusplus
 extern "C" {
#endif 

#include <stdint.h>
#include <string.h>
#include "input_task.h"

#define NEOPIXEL_COUNT MECH_OBSW_COUNT
#define NEOPIXEL_PIN 21

#define BRIGHTNESS_LEVEL_SIZE 5
#define ANIMATION_NONE 0
#define ANIMATION_CROSS_FADE 1

#define THREE 3
#define DEFAULT_BG_RED 64
#define DEFAULT_BG_GREEN 16
#define DEFAULT_BG_BLUE 255
#define DEFAULT_KD_RED 255
#define DEFAULT_KD_GREEN 255
#define DEFAULT_KD_BLUE 255

typedef struct
{
	uint32_t animation_start;
	uint8_t animation_type;
	uint8_t animation_duration;
	uint8_t target_color[THREE];
	double current_color[THREE];
	double step[THREE];
} led_animation;

void neopixel_init(void);
void led_animation_init();
void led_animation_handler(void);
void redraw_bg(uint8_t profile_number);
void play_keydown_animation(uint8_t profile_number, uint8_t sw_number);
void play_keyup_animation(uint8_t profile_number, uint8_t sw_number);
void neopixel_draw_current_buffer(void);
void neopixel_fill(uint8_t rr, uint8_t gg, uint8_t bb);
void neopixel_off(void);
void set_pixel_3color(uint8_t which, uint8_t r, uint8_t g, uint8_t b);
void reset_key_color(uint8_t which);
void draw_settings_led(void);
void get_current_color(uint8_t which, uint8_t* red, uint8_t* green, uint8_t* blue);
void set_pixel_3color_update_buffer(uint8_t which, uint8_t r, uint8_t g, uint8_t b);
void halt_all_animations(void);

extern uint8_t brightness_index_to_percent_lookup[BRIGHTNESS_LEVEL_SIZE];

#define ANIMATION_FREQ_MS 20
#define NEOPIXEL_MUTEX_TIMEOUT_MS 8

#ifdef __cplusplus
}
#endif

#endif


