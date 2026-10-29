
#include "Game.h"


Game::Game(sf::RenderWindow& game_window)
  : window(game_window)
{
	srand(time(NULL));
}

Game::~Game()
{

}

bool Game::init()
{

	return true;
}

void Game::update(float dt)
{
}

void Game::render()
{
}

void Game::mouseClicked(sf::Event event)
{
	//get the click position
	sf::Vector2i click = sf::Mouse::getPosition(window);

}

void Game::keyPressed(sf::Event::KeyPressed keyPressEvent) 
{
}
















/*
bool Game::init()
{
	bird.setScale({0.5,0.5});
	bird.setPosition({window.getSize().x/2 - bird.getGlobalBounds().size.x/2, 500});

	title_text.setCharacterSize(100);
	title_text.setPosition({window.getSize().x/2 - title_text.getGlobalBounds().size.x/2, 100});
	title_text.setFillColor(sf::Color(255, 100, 100, 255));


	return true;
}

void Game::update(float dt)
{
	bird.move({-1.0f * speed * dt, -1.0f * speed * dt});
}

void Game::render()
{
	window.draw(background);


	window.draw(title_text);
	window.draw(bird);

}
*/