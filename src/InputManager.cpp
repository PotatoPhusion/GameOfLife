#include "InputManager.hpp"

namespace potato
{
    bool InputManager::IsSpriteClicked(sf::Sprite object,
                                       sf::Mouse::Button button,
                                       sf::RenderWindow &window)
    {
        // If the specified button is pressed and the mouse cursor is inside
        // of the sprite's bounding box, return true. Otherwise false.
        if (sf::Mouse::isButtonPressed(button))
        {
            sf::IntRect tempRect(object.getPosition().x, object.getPosition().y,
                                 object.getGlobalBounds().width,
                                 object.getGlobalBounds().height);

            if (tempRect.contains(sf::Mouse::getPosition(window)))
            {
                return true;
            }
        }

        return false;
    }

    sf::Vector2i InputManager::GetMousePosition(sf::RenderWindow &window)
    {
        return sf::Mouse::getPosition(window);
    }
}
