#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Triangle Example");

    // Create a triangle using ConvexShape
    sf::ConvexShape triangle;
    triangle.setPointCount(3); // a triangle has 3 points

    // Define the 3 corners (counter-clockwise order)
    triangle.setPoint(0, sf::Vector2f(400.f, 100.f)); // top
    triangle.setPoint(1, sf::Vector2f(200.f, 500.f)); // bottom-left
    triangle.setPoint(2, sf::Vector2f(600.f, 500.f)); // bottom-right

    // Style
    triangle.setFillColor(sf::Color::Green);
    triangle.setOutlineColor(sf::Color::Black);
    triangle.setOutlineThickness(3);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White); // background
        window.draw(triangle);          // draw the triangle
        window.display();
    }

    return 0;
}
