#ifndef ENTITY_HPP_
# define ENTITY_HPP_

# include <vector>

class Fixture;
class Renderable;
class PlayState;
class Game;

class Entity
{
protected:
  PlayState *const playState;

public:
  Entity(PlayState *playState);
  virtual ~Entity(void);
  virtual void update(void) = 0;
};

#endif // !ENTITY_HPP_
