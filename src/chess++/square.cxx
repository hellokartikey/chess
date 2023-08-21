#include "square.hxx"

namespace chess {
Square::Square(constants::square square) { _name = square; }

constants::square Square::name() { return _name; }

constants::file Square::file() { return constants::file(_name % 8); }

constants::rank Square::rank() { return constants::rank(_name / 8); }
} // namespace chess