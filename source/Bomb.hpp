#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

class Bomb
{
private:	
	sf::Texture bomb_texture;
	sf::Sprite bomb_sprite;
	sf::Image bomb_image;		
	
	
	
public:
	Bomb();
	//~Bomb();	
	sf::Sprite & get_sprite();
	
	
};
