#ifndef CHESSPP_FMT_H
#define CHESSPP_FMT_H

#include <string>

#include "constants.h"

namespace chess::constants {
std::string format_as(constants::square square);
std::string format_as(constants::file file);
std::string format_as(constants::rank rank);
std::string format_as(constants::piece piece);
std::string format_as(constants::color color);
}  // namespace chess::constants

#endif
