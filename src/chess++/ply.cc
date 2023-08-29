#include "ply.h"

namespace chess {
Ply::Ply(constants::color color, constants::piece piece, constants::square from,
         constants::square to) {
  color_ = color;
  piece_ = piece;
  from_ = from;
  to_ = to;
}

Ply::Ply(std::string_view SAN) {}

constants::color Ply::color() { return color_; }

void Ply::color(constants::color color) { color_ = color; }

}  // namespace chess
