#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    
    const int windowSize = 500;
    const int n = 10;          
    const int cellSize = windowSize / n; 

    
    sf::RenderWindow window(sf::VideoMode(windowSize, windowSize), "Matrix");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        } 
        window.clear(sf::Color::White);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sf::RectangleShape cell(sf::Vector2f(cellSize, cellSize));
                cell.setPosition(j * cellSize, i * cellSize);
                cell.setOutlineThickness(1);
                cell.setOutlineColor(sf::Color::Black);

                    if (i + j < (n/2)) {
                            cell.setFillColor(sf::Color::Green);
                         }
                    else {
                            cell.setFillColor(sf::Color::White); 
                        
                    }
               
                window.draw(cell);
                } 
        }
        window.display();
    }

    return 0;
}