#ifndef PERSO_HPP_
# define PERSO_HPP_

# include "entity.hpp"

# define PERSO_SPEED 4
# define PERSO_NB_FRAME 9

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
      DIR_LEFT,
      DIR_RIGHT,
      DIR_UP,
      DIR_DOWN,
      DIR_MAX
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

  // TODO : Perso's position/destination on WORLD MAP
  Vect<2, double>		position;
  Vect<2, double>		destination;
  Vect<2, double>		moveDir;
  // (for now screen positons)

  Vect<2, double>		worldPos;
  Vect<2, double>		worldDest;
  Vect<2, double>		speed;

  double			distance;

  // TODO animated sprite
  perso::Direction		direction;

  bool				moving;
  bool				selected;
};

#endif /* !PERSO_HPP_ */
