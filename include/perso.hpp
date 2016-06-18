#ifndef PERSO_HPP_
# define PERSO_HPP_

# include "entity.hpp"

# define PERSO_SPEED 0.03
# define PERSO_FRAME_SPEED 10
# define PERSO_NB_FRAME 9
# define PERSO_WIDTH 60
# define PERSO_HEIGHT 100

// Forward declaration
class Game;
class Display;

/*
** Class Perso Derived from Entity: Main Perso
*/

namespace perso
{
  enum Direction
    {
      DIR_IDLE		= 0,
      DIR_LEFT		= 1,
      DIR_RIGHT		= 2,
      DIR_MAX		= 3
    };
}

class Perso: public Entity
{
public:
  // Constructor/Destructor
  Perso(Game *game, Display *display);
  ~Perso();

  std::vector<Renderable>const&	getRenderable() const;
  Vect<2u, double>		getPosition() const;
  //  void			getStats(); TODO
  //  std::vector<Fixture>	getFixtures(); TODO

  // Update perso
  void				update();

  // Move to given position
  // TODO : PATHFINDING WORLD MAP ARRAY
  void				moveTo(Vect<2u, double> dest);
  void				renderPerso();

  // Get bool
  bool				isMoving() const;
  bool				isSelected() const;

  // Set bool
  void				select();

private:
  Game				*game;
  Display			*display;
  // What to render
  std::vector<Renderable>	renderable;

  // Perso movement
  Vect<2, double>		position;
  Vect<2, double>		destination;
  Vect<2, double>		speed;
  double			distance;

  // TODO animated sprite
  perso::Direction		direction;

  // sprites
  SDL_Texture			*textures[perso::DIR_MAX];
  SDL_Texture			*left;
  SDL_Texture			*right;
  int				frame;
  SDL_Rect			sprites[PERSO_NB_FRAME];

  bool				moving;
  bool				selected;
};

#endif /* !PERSO_HPP_ */
