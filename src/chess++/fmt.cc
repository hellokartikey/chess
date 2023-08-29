#include "fmt.h"

#include <fmt/format.h>

namespace chess::constants {
std::string format_as(constants::square square) {
  return format_as(constants::file(square % 8)) +
         format_as(constants::rank(square / 8));
}

std::string format_as(constants::file file) {
  std::string ret = "";
  switch (file) {
    case A:
      ret = "A";
      break;
    case B:
      ret = "B";
      break;
    case C:
      ret = "C";
      break;
    case D:
      ret = "D";
      break;
    case E:
      ret = "E";
      break;
    case F:
      ret = "F";
      break;
    case G:
      ret = "G";
      break;
    case H:
      ret = "H";
      break;
  }
  return ret;
}

std::string format_as(constants::rank rank) {
  std::string ret = "";
  switch (rank) {
    case R1:
      ret = "1";
      break;
    case R2:
      ret = "2";
      break;
    case R3:
      ret = "3";
      break;
    case R4:
      ret = "4";
      break;
    case R5:
      ret = "5";
      break;
    case R6:
      ret = "6";
      break;
    case R7:
      ret = "7";
      break;
    case R8:
      ret = "8";
      break;
  }
  return ret;
}

std::string format_as(constants::piece piece) {
  std::string ret;
  switch (piece) {
    case constants::pawn:
      ret = "pawn";
      break;
    case constants::knight:
      ret = "knight";
      break;
    case constants::bishop:
      ret = "bishop";
      break;
    case constants::rook:
      ret = "rook";
      break;
    case constants::queen:
      ret = "queen";
      break;
    case constants::king:
      ret = "king";
      break;
  }
  return ret;
}

std::string format_as(constants::color color) {
  std::string ret;
  switch (color) {
    case constants::white:
      ret = "white";
      break;
    case constants::black:
      ret = "black";
      break;
  }
  return ret;
}
}  // namespace chess::constants
