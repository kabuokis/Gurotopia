#include "pch.hpp"

#include "holiday.hpp"

u_char holiday = H_NONE;

void check_for_holiday()
{
    std::time_t now  = std::time(nullptr);
    std::tm     time = *std::localtime(&now);
    if (time.tm_mon == 1/*feb*/ && (time.tm_mday >= 13 && time.tm_mday <= 13+7)) holiday = H_VALENTINES; // @note Valentine's Week
}

std::string game_theme_string()
{
    switch (holiday)
    {
        case H_VALENTINES: return "valentines-theme";
    }
    return "";
}