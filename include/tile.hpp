#ifndef TILE_HPP_
# define TILE_HPP_

#include "vect.hpp"

struct Tile
{
  int id;
  Vect <2u, int> pos;
  int height;
};

#endif // !TILE_HPP_
