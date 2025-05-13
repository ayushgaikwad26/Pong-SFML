#pragma once
#include "../../Header/Gameplay/Ball/Ball.h"

namespace Gameplay
{
    Ball::Ball()
    {
        loadTexture();
        initializeVariables();
    }

    void Ball::loadTexture()
    {
        pong_ball_texture.loadFromFile(texture_path);
    }

    void Ball::initializeVariables()
    {
        pong_ball_sprite.setTexture(pong_ball_texture);
        pong_ball_sprite.setScale(scale_x, scale_y);
        pong_ball_sprite.setPosition(position_x, position_y);
    }

    void Ball::update() {}

    void Ball::render(RenderWindow* game_window)
    {
        game_window->draw(pong_ball_sprite);
    }
}