#pragma once

enum holiday : u_char
{
    H_NONE,
    H_VALENTINES
};

extern void check_for_holiday();

extern std::string game_theme_string();

extern u_char holiday;
