#include "snake/game_play.hpp"

GamePlay::GamePlay(std::shared_ptr<Context>& context)
    : m_context(context)
{
}

GamePlay::~GamePlay()
{
}

void GamePlay::Init()
{
    m_context->m_assets->AddTexture(GRASS, "assets/textures/grass.png", true);
    m_context->m_assets->AddTexture(FOOD, "assets/textures/food.png");
    m_context->m_assets->AddTexture(WALL, "assets/textures/wall.png", true);
    m_context->m_assets->AddTexture(SNAKE, "assets/textures/snake.png");

    m_grass.setTexture(m_context->m_assets->GetTexture(GRASS));
    m_grass.setTextureRect(m_context->m_window->getViewport(m_context->m_window->getDefaultView()));
}

void GamePlay::ProcessInput()
{
}

void GamePlay::Update(sf::Time deltaTime)
{
}

void GamePlay::Draw()
{
    m_context->m_window->clear();
    m_context->m_window->draw(m-grass);
    m_context->m_window->display();
}

void GamePlay::Pause()
{
}

void GamePlay::Start()
{
}