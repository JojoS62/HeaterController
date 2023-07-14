// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.3.4
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Label1;
lv_obj_t * ui_lblFrequencyUnit1;
lv_obj_t * ui_PanelFrequencyMean;
lv_obj_t * ui_lblFrequency;
lv_obj_t * ui_lblFrequencyText;
lv_obj_t * ui_lblFrequencyUnit;
lv_obj_t * ui_PanelFrequencyMax;
lv_obj_t * ui_lblFrequency1;
lv_obj_t * ui_lblFrequencyText1;
lv_obj_t * ui_lblFrequencyUnit2;
lv_obj_t * ui_PanelFrequencyMin;
lv_obj_t * ui_lblFrequency2;
lv_obj_t * ui_lblFrequencyText2;
lv_obj_t * ui_lblFrequencyUnit3;
lv_obj_t * ui_PanelFrequencyStdDev;
lv_obj_t * ui_lblFrequency3;
lv_obj_t * ui_lblFrequencyText3;
lv_obj_t * ui_lblFrequencyUnit4;
void ui_event_ButtonMenu(lv_event_t * e);
lv_obj_t * ui_ButtonMenu;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_Panel5;
lv_obj_t * ui_lblFrequencyText4;
lv_obj_t * ui_Dropdown2;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_lblFrequencyText5;
lv_obj_t * ui_Switch2;
lv_obj_t * ui_Label2;
void ui_event_ButtonMenu1(lv_event_t * e);
lv_obj_t * ui_ButtonMenu1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_ButtonMenu(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_ButtonMenu1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel1, lv_pct(100));
    lv_obj_set_height(ui_Panel1, lv_pct(90));
    lv_obj_set_align(ui_Panel1, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(ui_Panel1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Panel1, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel2 = lv_obj_create(ui_Panel1);
    lv_obj_set_width(ui_Panel2, lv_pct(100));
    lv_obj_set_height(ui_Panel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0x525552), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel2, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel2, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel2, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel2, 4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -120);
    lv_obj_set_y(ui_Label1, 0);
    lv_obj_set_align(ui_Label1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Label1, "15,998.039.946 ");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xF7F504), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_42, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Label1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Label1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Label1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Label1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequencyUnit1 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_lblFrequencyUnit1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequencyUnit1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblFrequencyUnit1, -20);
    lv_obj_set_y(ui_lblFrequencyUnit1, 0);
    lv_obj_set_align(ui_lblFrequencyUnit1, LV_ALIGN_RIGHT_MID);
    lv_label_set_long_mode(ui_lblFrequencyUnit1, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequencyUnit1, "MHz");
    lv_obj_set_style_text_color(ui_lblFrequencyUnit1, lv_color_hex(0xF6F600), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblFrequencyUnit1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblFrequencyUnit1, &lv_font_montserrat_42, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelFrequencyMean = lv_obj_create(ui_Panel1);
    lv_obj_set_width(ui_PanelFrequencyMean, lv_pct(100));
    lv_obj_set_height(ui_PanelFrequencyMean, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PanelFrequencyMean, 0);
    lv_obj_set_y(ui_PanelFrequencyMean, -61);
    lv_obj_set_align(ui_PanelFrequencyMean, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PanelFrequencyMean, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PanelFrequencyMean, lv_color_hex(0x545654), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelFrequencyMean, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_PanelFrequencyMean, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_PanelFrequencyMean, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_PanelFrequencyMean, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_PanelFrequencyMean, 4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequency = lv_label_create(ui_PanelFrequencyMean);
    lv_obj_set_width(ui_lblFrequency, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequency, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblFrequency, -100);
    lv_obj_set_y(ui_lblFrequency, 0);
    lv_obj_set_align(ui_lblFrequency, LV_ALIGN_RIGHT_MID);
    lv_label_set_long_mode(ui_lblFrequency, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequency, "15,998.039.946");
    lv_obj_set_style_text_color(ui_lblFrequency, lv_color_hex(0x08C210), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblFrequency, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblFrequency, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequencyText = lv_label_create(ui_PanelFrequencyMean);
    lv_obj_set_width(ui_lblFrequencyText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequencyText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblFrequencyText, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_lblFrequencyText, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequencyText, "mean");
    lv_obj_set_style_text_font(ui_lblFrequencyText, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequencyUnit = lv_label_create(ui_PanelFrequencyMean);
    lv_obj_set_width(ui_lblFrequencyUnit, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequencyUnit, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblFrequencyUnit, LV_ALIGN_RIGHT_MID);
    lv_label_set_long_mode(ui_lblFrequencyUnit, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequencyUnit, "MHz");
    lv_obj_set_style_text_font(ui_lblFrequencyUnit, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelFrequencyMax = lv_obj_create(ui_Panel1);
    lv_obj_set_width(ui_PanelFrequencyMax, lv_pct(100));
    lv_obj_set_height(ui_PanelFrequencyMax, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PanelFrequencyMax, 0);
    lv_obj_set_y(ui_PanelFrequencyMax, -61);
    lv_obj_set_align(ui_PanelFrequencyMax, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PanelFrequencyMax, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PanelFrequencyMax, lv_color_hex(0x545654), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelFrequencyMax, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_PanelFrequencyMax, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_PanelFrequencyMax, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_PanelFrequencyMax, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_PanelFrequencyMax, 4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequency1 = lv_label_create(ui_PanelFrequencyMax);
    lv_obj_set_width(ui_lblFrequency1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequency1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblFrequency1, -100);
    lv_obj_set_y(ui_lblFrequency1, 0);
    lv_obj_set_align(ui_lblFrequency1, LV_ALIGN_RIGHT_MID);
    lv_label_set_long_mode(ui_lblFrequency1, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequency1, "15,998.039.946");
    lv_obj_set_style_text_color(ui_lblFrequency1, lv_color_hex(0x08C210), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblFrequency1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblFrequency1, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequencyText1 = lv_label_create(ui_PanelFrequencyMax);
    lv_obj_set_width(ui_lblFrequencyText1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequencyText1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblFrequencyText1, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_lblFrequencyText1, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequencyText1, "max");
    lv_obj_set_style_text_font(ui_lblFrequencyText1, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequencyUnit2 = lv_label_create(ui_PanelFrequencyMax);
    lv_obj_set_width(ui_lblFrequencyUnit2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequencyUnit2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblFrequencyUnit2, LV_ALIGN_RIGHT_MID);
    lv_label_set_long_mode(ui_lblFrequencyUnit2, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequencyUnit2, "MHz");
    lv_obj_set_style_text_font(ui_lblFrequencyUnit2, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelFrequencyMin = lv_obj_create(ui_Panel1);
    lv_obj_set_width(ui_PanelFrequencyMin, lv_pct(100));
    lv_obj_set_height(ui_PanelFrequencyMin, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PanelFrequencyMin, 0);
    lv_obj_set_y(ui_PanelFrequencyMin, -61);
    lv_obj_set_align(ui_PanelFrequencyMin, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PanelFrequencyMin, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PanelFrequencyMin, lv_color_hex(0x545654), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelFrequencyMin, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_PanelFrequencyMin, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_PanelFrequencyMin, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_PanelFrequencyMin, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_PanelFrequencyMin, 4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequency2 = lv_label_create(ui_PanelFrequencyMin);
    lv_obj_set_width(ui_lblFrequency2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequency2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblFrequency2, -100);
    lv_obj_set_y(ui_lblFrequency2, 0);
    lv_obj_set_align(ui_lblFrequency2, LV_ALIGN_RIGHT_MID);
    lv_label_set_long_mode(ui_lblFrequency2, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequency2, "15,998.039.946");
    lv_obj_set_style_text_color(ui_lblFrequency2, lv_color_hex(0x08C210), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblFrequency2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblFrequency2, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequencyText2 = lv_label_create(ui_PanelFrequencyMin);
    lv_obj_set_width(ui_lblFrequencyText2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequencyText2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblFrequencyText2, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_lblFrequencyText2, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequencyText2, "min");
    lv_obj_set_style_text_font(ui_lblFrequencyText2, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequencyUnit3 = lv_label_create(ui_PanelFrequencyMin);
    lv_obj_set_width(ui_lblFrequencyUnit3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequencyUnit3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblFrequencyUnit3, LV_ALIGN_RIGHT_MID);
    lv_label_set_long_mode(ui_lblFrequencyUnit3, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequencyUnit3, "MHz");
    lv_obj_set_style_text_font(ui_lblFrequencyUnit3, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelFrequencyStdDev = lv_obj_create(ui_Panel1);
    lv_obj_set_width(ui_PanelFrequencyStdDev, lv_pct(100));
    lv_obj_set_height(ui_PanelFrequencyStdDev, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PanelFrequencyStdDev, 0);
    lv_obj_set_y(ui_PanelFrequencyStdDev, -61);
    lv_obj_set_align(ui_PanelFrequencyStdDev, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PanelFrequencyStdDev, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PanelFrequencyStdDev, lv_color_hex(0x545654), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelFrequencyStdDev, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_PanelFrequencyStdDev, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_PanelFrequencyStdDev, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_PanelFrequencyStdDev, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_PanelFrequencyStdDev, 4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequency3 = lv_label_create(ui_PanelFrequencyStdDev);
    lv_obj_set_width(ui_lblFrequency3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequency3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblFrequency3, -100);
    lv_obj_set_y(ui_lblFrequency3, 0);
    lv_obj_set_align(ui_lblFrequency3, LV_ALIGN_RIGHT_MID);
    lv_label_set_long_mode(ui_lblFrequency3, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequency3, "15,998.039.946");
    lv_obj_set_style_text_color(ui_lblFrequency3, lv_color_hex(0x08C210), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblFrequency3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblFrequency3, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequencyText3 = lv_label_create(ui_PanelFrequencyStdDev);
    lv_obj_set_width(ui_lblFrequencyText3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequencyText3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblFrequencyText3, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_lblFrequencyText3, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequencyText3, "std-dev");
    lv_obj_set_style_text_font(ui_lblFrequencyText3, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequencyUnit4 = lv_label_create(ui_PanelFrequencyStdDev);
    lv_obj_set_width(ui_lblFrequencyUnit4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequencyUnit4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblFrequencyUnit4, LV_ALIGN_RIGHT_MID);
    lv_label_set_long_mode(ui_lblFrequencyUnit4, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequencyUnit4, "MHz");
    lv_obj_set_style_text_font(ui_lblFrequencyUnit4, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonMenu = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_ButtonMenu, 60);
    lv_obj_set_height(ui_ButtonMenu, 25);
    lv_obj_set_x(ui_ButtonMenu, -2);
    lv_obj_set_y(ui_ButtonMenu, 2);
    lv_obj_set_align(ui_ButtonMenu, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_ButtonMenu, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonMenu, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ButtonMenu, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ButtonMenu, lv_color_hex(0x767273), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonMenu, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 20);
    lv_obj_set_y(ui_Label3, 2);
    lv_label_set_text(ui_Label3, "mino Pico F-Meter");
    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0x918A8A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ButtonMenu, ui_event_ButtonMenu, LV_EVENT_ALL, NULL);

}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel4 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Panel4, lv_pct(100));
    lv_obj_set_height(ui_Panel4, lv_pct(90));
    lv_obj_set_align(ui_Panel4, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(ui_Panel4, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Panel4, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel4, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel5 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel5, lv_pct(100));
    lv_obj_set_height(ui_Panel5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Panel5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_Panel5, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel5, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel5, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel5, 4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequencyText4 = lv_label_create(ui_Panel5);
    lv_obj_set_width(ui_lblFrequencyText4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequencyText4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblFrequencyText4, 0);
    lv_obj_set_y(ui_lblFrequencyText4, 1);
    lv_obj_set_align(ui_lblFrequencyText4, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_lblFrequencyText4, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequencyText4, "samples");
    lv_obj_set_style_text_font(ui_lblFrequencyText4, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Dropdown2 = lv_dropdown_create(ui_Panel5);
    lv_dropdown_set_options(ui_Dropdown2, "10\n50\n100\n500\n1000\n");
    lv_obj_set_width(ui_Dropdown2, 150);
    lv_obj_set_height(ui_Dropdown2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Dropdown2, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_Dropdown2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_font(ui_Dropdown2, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Dropdown2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Dropdown2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Dropdown2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Dropdown2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel3 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel3, lv_pct(100));
    lv_obj_set_height(ui_Panel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_Panel3, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel3, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel3, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel3, 4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblFrequencyText5 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_lblFrequencyText5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblFrequencyText5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblFrequencyText5, 0);
    lv_obj_set_y(ui_lblFrequencyText5, 1);
    lv_obj_set_align(ui_lblFrequencyText5, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_lblFrequencyText5, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_lblFrequencyText5, "Trigger ext.");
    lv_obj_set_style_text_font(ui_lblFrequencyText5, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblFrequencyText5, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblFrequencyText5, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblFrequencyText5, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblFrequencyText5, 4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch2 = lv_switch_create(ui_Panel3);
    lv_obj_set_width(ui_Switch2, 68);
    lv_obj_set_height(ui_Switch2, 25);
    lv_obj_set_align(ui_Switch2, LV_ALIGN_RIGHT_MID);
    lv_obj_set_style_bg_color(ui_Switch2, lv_color_hex(0x5D5B5B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 20);
    lv_obj_set_y(ui_Label2, 2);
    lv_label_set_text(ui_Label2, "Settings");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x918A8A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonMenu1 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_ButtonMenu1, 60);
    lv_obj_set_height(ui_ButtonMenu1, 25);
    lv_obj_set_x(ui_ButtonMenu1, -2);
    lv_obj_set_y(ui_ButtonMenu1, 2);
    lv_obj_set_align(ui_ButtonMenu1, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_ButtonMenu1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonMenu1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ButtonMenu1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ButtonMenu1, lv_color_hex(0x767273), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonMenu1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ButtonMenu1, ui_event_ButtonMenu1, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
