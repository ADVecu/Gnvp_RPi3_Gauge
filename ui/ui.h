// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0 Beta1
// LVGL VERSION: 8.2
// PROJECT: Thermostat

#ifndef _THERMOSTAT_UI_H
#define _THERMOSTAT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Arc_Group;
void ui_event_Arc1(lv_event_t * e);
extern lv_obj_t * ui_Arc1;
extern lv_obj_t * ui_Temp_Bg;
extern lv_obj_t * ui_Temp_Num_Bg;
extern lv_obj_t * ui_Label_Celsius;




LV_FONT_DECLARE(ui_font_Number);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
