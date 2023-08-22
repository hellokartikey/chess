#ifndef CHESSPP_CONSTANTS_HXX
#define CHESSPP_CONSTANTS_HXX

#include <cstdint>

/**API Reference
 *
 * square::A1
 * square::H5
 *
 * file::A
 * file::E
 *
 * rank::R4
 * rank::R8
 *
 * piece::pawn
 * piece::knight
 * piece::bishop
 * piece::rook
 * piece::queen
 * piece::king
 * 
 * color::white
 * color::black
 *
 */

namespace chess::constants {
constexpr int num_squares = 64;
}

namespace chess::square {
// clang-format off
enum square {
  A1, B1, C1, D1, E1, F1, G1, H1,
  A2, B2, C2, D2, E2, F2, G2, H2,
  A3, B3, C3, D3, E3, F3, G3, H3,
  A4, B4, C4, D4, E4, F4, G4, H4,
  A5, B5, C5, D5, E5, F5, G5, H5,
  A6, B6, C6, D6, E6, F6, G6, H6,
  A7, B7, C7, D7, E7, F7, G7, H7,
  A8, B8, C8, D8, E8, F8, G8, H8
};
// clang-format on
}  // namespace chess::square

namespace chess::file {
enum file { A = 0, B = 1, C = 2, D = 3, E = 4, F = 5, G = 6, H = 7 };
}

namespace chess::rank {
enum rank { R1 = 0, R2 = 1, R3 = 2, R4 = 3, R5 = 4, R6 = 5, R7 = 6, R8 = 7 };
}

namespace chess::piece {
enum piece { pawn, knight, bishop, rook, queen, king };
}

namespace chess::color {
enum color { white, black };
}  // namespace chess::color

namespace move {
enum move { regular, promotion, en_passant, king_castle, queen_castle };

enum legal { illegal, legal };

enum capture { no_capture, is_capture };

enum check { no_check, is_check };
}  // namespace move

#endif
