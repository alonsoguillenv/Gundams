#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <string>

class Game
{

private:
	sf::RenderWindow main_window;
	sf::CircleShape first_player;	
	bool moving_left;
	bool moving_right;
	sf::Texture main_texture;
	sf::Sprite main_sprite;
	

public:
	Game();
	//~Game();
	void run();
	
private: 
	void process_events();
	void update();	
	void render();
	void handle_input(sf::Keyboard::Key, bool);
	






};
