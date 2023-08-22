#include "piece_list.hxx"

namespace chess::types {
using size_type = std::size_t;

Piece &PieceList::at(size_type pos) { return *vec.at(pos); }

Piece &PieceList::operator[](size_type pos) { return *vec[pos]; }

bool PieceList::empty() { return vec.empty(); }

size_type PieceList::size() { return vec.size(); }

void PieceList::clear() { vec.clear(); }

void PieceList::push_back(Piece &piece) { vec.push_back(&piece); }
}  // namespace chess::types
