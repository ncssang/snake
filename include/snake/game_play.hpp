#pragma once

#include <memory>
#include <array>

#include "snake/game.hpp"
#include "snake/state.hpp"

#include<SFML/Graphics/Sprite.hpp>

class GamePlay : public Engine::State
{
private:
    std::shared_ptr<Context> m_context;
    sf::Sprite m_grass;
    sf::Sprite m_food;
    std::array<sf::Sprite, 4> m_walls;

//Todo:
//Added snake

public:
    GamePlay();
    ~GamePlay();

    void Init() override;
    void ProcessInput() override;
    void Update(sf::Time deltaTime) override;
    void Draw() override;
    void Pause() override;
    void Start() override;
};