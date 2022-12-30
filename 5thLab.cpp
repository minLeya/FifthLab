#include <SFML/Graphics.hpp>
#include "Figure.h"
#include "Coordinates.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include "Rhomb.h"
#include "functionsForModification.h"
#include "functionsForMovement.h"
#include "arbitrary.h"
#include <vector>
#include <array>
#include <iostream>
#include <memory>


int main()
{
    sf::RenderWindow window(sf::VideoMode(sizes::windowLength, sizes::windowWidth), "window");
    window.setFramerateLimit(60);


    std::array<Figure*, 30> arrayOfFigure{};

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();

            if (event.type == event.KeyPressed)
            {
                creatingFigures(arrayOfFigure);
                
                moveRight(arrayOfFigure);
                moveLeft(arrayOfFigure);
                moveUp(arrayOfFigure);
                moveDown(arrayOfFigure);

                moveCircularRight(arrayOfFigure);
                moveCircularLeft(arrayOfFigure);
                moveCircularDown(arrayOfFigure);
                moveCircularUp(arrayOfFigure);

                moveQuadrangularRight(arrayOfFigure);
                moveQuadrangularLeft(arrayOfFigure);
                moveQuadrangularDown(arrayOfFigure);
                moveQuadrangularUp(arrayOfFigure);

                hideAll(arrayOfFigure);
                hideCircular(arrayOfFigure);
                hideQuadrangle(arrayOfFigure);

                increaseRadius(arrayOfFigure);
                decreaseRadius(arrayOfFigure);

                increaseLength(arrayOfFigure);
                
            }
        }
        window.clear();

        for (auto& figurePtr : arrayOfFigure)
        {
            if (figurePtr != nullptr && figurePtr->isShown)
            {
                Figure::ShapeType shapeType{ figurePtr->getShapeType() };
                switch (shapeType)
                {
                case Figure::ShapeType::circle:
                {
                    Circle* circle{ dynamic_cast<Circle*>(figurePtr) };
                    if (circle)
                        window.draw(circle->returnCircle());
                    break;
                }
                case Figure::ShapeType::ellipse:
                {
                    Ellipse* ellipse{ dynamic_cast<Ellipse*>(figurePtr) };
                    if (ellipse)
                        window.draw(ellipse->returnEllipse());
                    break;
                }
                case Figure::ShapeType::quadrangle:
                {
                    Quadrangle* quadrangle{ dynamic_cast<Quadrangle*>(figurePtr) };
                    if (quadrangle)
                        window.draw(quadrangle->returnQuadrangle());
                    break;
                }
                case Figure::ShapeType::rectangle:
                {
                    Rectangle* rectangle{ dynamic_cast<Rectangle*>(figurePtr) };
                    if (rectangle)
                        window.draw(rectangle->returnRectangle());
                    break;
                }
                case Figure::ShapeType::rhomb:
                {
                    Rhomb* rhomb{ dynamic_cast<Rhomb*>(figurePtr) };
                    if (rhomb)
                        window.draw(rhomb->returnRhomb());
                    break;
                }
                case Figure::ShapeType::trapezoid:
                {
                    Trapezoid* trapezoid{ dynamic_cast<Trapezoid*>(figurePtr) };
                    if (trapezoid)
                        window.draw(trapezoid->returnTrapezoid());
                    break;
                }
                }
            }
        }


    



        window.display();
    }
    return 0;
}