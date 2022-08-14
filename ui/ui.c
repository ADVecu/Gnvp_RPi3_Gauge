// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0 Beta1
// LVGL VERSION: 8.2
// PROJECT: Thermostat

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Arc_Group;
void ui_event_Arc1(lv_event_t * e);
lv_obj_t * ui_Arc1;
lv_obj_t * ui_Temp_Bg;
lv_obj_t * ui_Temp_Num_Bg;
lv_obj_t * ui_Label_Celsius;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Arc1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Label_Celsius, target_obj, "", "°");
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x464B55), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Screen1, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, 130);
    lv_obj_set_align(ui_Label2, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label2, "Temperature\nControl");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xD2CDC8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_Group = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Arc_Group, 400);
    lv_obj_set_height(ui_Arc_Group, 400);
    lv_obj_set_align(ui_Arc_Group, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc_Group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Arc_Group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1 = lv_arc_create(ui_Arc_Group);
    lv_obj_set_width(ui_Arc1, 350);
    lv_obj_set_height(ui_Arc1, 350);
    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_Arc1, 15, 35);
    lv_arc_set_value(ui_Arc1, 23);
    lv_obj_set_style_radius(ui_Arc1, 350, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0x1E232D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x0F1215), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc1, 15, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x36B9F6), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc1, 15, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Temp_Bg = lv_obj_create(ui_Arc_Group);
    lv_obj_set_width(ui_Temp_Bg, 280);
    lv_obj_set_height(ui_Temp_Bg, 280);
    lv_obj_set_align(ui_Temp_Bg, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Temp_Bg, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Temp_Bg, 280, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Temp_Bg, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temp_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Temp_Bg, lv_color_hex(0x3C414B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Temp_Bg, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Temp_Bg, lv_color_hex(0x2D323C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Temp_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Temp_Bg, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Temp_Bg, lv_color_hex(0x050A0F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Temp_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Temp_Bg, 80, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Temp_Bg, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_Temp_Bg, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_Temp_Bg, 30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Temp_Num_Bg = lv_obj_create(ui_Temp_Bg);
    lv_obj_set_width(ui_Temp_Num_Bg, 200);
    lv_obj_set_height(ui_Temp_Num_Bg, 200);
    lv_obj_set_align(ui_Temp_Num_Bg, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Temp_Num_Bg, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Temp_Num_Bg, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Temp_Num_Bg, lv_color_hex(0x0C191E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temp_Num_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Temp_Num_Bg, lv_color_hex(0x191C26), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Temp_Num_Bg, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Temp_Num_Bg, lv_color_hex(0x5A646E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Temp_Num_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Celsius = lv_label_create(ui_Temp_Num_Bg);
    lv_obj_set_width(ui_Label_Celsius, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Celsius, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Celsius, 10);
    lv_obj_set_y(ui_Label_Celsius, 0);
    lv_obj_set_align(ui_Label_Celsius, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_Celsius, "23°");
    lv_obj_set_style_text_color(ui_Label_Celsius, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Celsius, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Celsius, &ui_font_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Arc1, ui_event_Arc1, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
