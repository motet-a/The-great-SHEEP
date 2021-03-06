#ifndef MENUSTATE_HPP_
# define MENUSTATE_HPP_

# include "gamestate.hpp"
# include "texture.hpp"

/*
** INHERITED FROM GAMESTATE!! => check gamestate.hpp for more details about
** the following functions
** MenuState : Gamestate for the menu
*/
class MenuState: public GameState
{
public:
  // Constructor/Destructor
  MenuState(Game *game);
  ~MenuState();

  // Gamestate flow
  void handleEvent(void);
  void update(void);
  void draw(void);
  void pause(void);
  void resume(void);

private:
  // Menustate's variables
  Texture startButton;
};

#endif /* !MENUSTATE_HPP_ */
