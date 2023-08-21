#ifndef SQUARE_HXX
#define SQUARE_HXX

#include "constants.hxx"

namespace chess {
class Square {
  constants::square _name;

public:
  Square(constants::square square);

  constants::square name();
  constants::file file();
  constants::rank rank();
};
} // namespace chess

#endif
