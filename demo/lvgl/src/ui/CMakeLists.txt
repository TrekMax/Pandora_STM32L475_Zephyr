# SPDX-License-Identifier: Apache-2.0

zephyr_include_directories(./)

set(IMAGE 
        images/ui_img__angle_left_double_png.c
        images/ui_img__charging_0_png.c
        images/ui_img__charging_10_png.c
        images/ui_img__charging_1_png.c
        images/ui_img__charging_2_png.c
        images/ui_img__charging_3_png.c
        images/ui_img__charging_4_png.c
        images/ui_img__charging_5_png.c
        images/ui_img__charging_6_png.c
        images/ui_img__charging_7_png.c
        images/ui_img__charging_8_png.c
        images/ui_img__charging_9_png.c
        images/ui_img__guide_scan_png.c
        images/ui_img__launcher_composition_png.c
        images/ui_img__launcher_scan_png.c
        images/ui_img__launcher_setting_png.c
        images/ui_img__status_battery_1_png.c
        images/ui_img__status_battery_2_png.c
        images/ui_img__status_battery_3_png.c
        images/ui_img__status_battery_4_png.c
        images/ui_img__status_battery_5_png.c
        images/ui_img__status_charging_1_png.c
        images/ui_img__status_charging_2_png.c
        images/ui_img__status_charging_3_png.c
        images/ui_img__status_charging_4_png.c
        images/ui_img__status_charging_5_png.c
        images/ui_img__status_wifi_0_png.c
        images/ui_img__status_wifi_1_png.c
        images/ui_img__status_wifi_2_png.c
        images/ui_img__status_wifi_3_png.c
)

zephyr_library_sources(
        ui.c
        ui_helpers.c
        ui_font_PocketDictPenRegular.c
        ${IMAGE}
)