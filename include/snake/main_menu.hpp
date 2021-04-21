#pragma once

#include <memory>

#include "snake/state.hpp"
#include "snake/game.hpp"

#include<SFML/Graphics/Text.hpp>

class MainMenu : public Engine::State
{
private:
    std::shared_ptr<Context> m_context;
    sf::Text m_gameTitle;
    sf::Text m_playButton;
    sf::Text m_exitButton;
    
    bool m_isplayButtonSelected;
    bool m_isplayButtonPressed;

    bool m_isexitButtonSelected;
    bool m_isexitButtonPressed;

public:
    MainMenu(std::shared_ptr<Context>& context);
    ~MainMenu();

    void Init() override;
    void ProcessInput() override;
    void Update(sf::Time deltaTime) override;
    void Draw() override;
};