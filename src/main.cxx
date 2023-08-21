#include "chess++/square.hxx"

#include <fmt/core.h>

int main() {
  chess::Square sq(chess::constants::B1);

  auto name = sq.name();
  auto file = sq.file();
  auto rank = sq.rank();

  std::printf("name: %d\n", name);
  std::printf("file: %d\n", file);
  std::printf("rank: %d\n", rank);

  return 0;
}