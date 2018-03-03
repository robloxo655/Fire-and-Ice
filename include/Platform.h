

#ifndef FIRENICE_PLATFORM_H
    #define FIRENICE_PLATFORM_H

#include <SFML/Graphics.hpp>
#include "VisibleGameObject.h"
class Platform : public VisibleGameObject {
public:
    Platform(const std::string &fName , sf::Vector2f size, sf::Vector2f position);
    ~Platform();

    void Draw(sf::RenderWindow& window);


};


#endif //FIRENICE_PLATFORM_H