#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
    std::wstring newYearText = L"Xin chào, thế giới !";
    sf::RenderWindow window(sf::VideoMode(640, 480), newYearText);

    sf::Font font;

    font.loadFromFile("SourceSansPro-Regular.otf");

    sf::Text text(newYearText, font);
    text.setCharacterSize(42);
    text.setStyle(sf::Text::Bold);
    text.setFillColor(sf::Color::Cyan);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(text);
        window.display();
    }

    return 0;
}