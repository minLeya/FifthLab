#include "functionsForModification.h"

void creatingCircles(std::vector<Circle>& arrayOfCircles)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
    {
        Circle circle1{};
        arrayOfCircles.push_back(circle1);
    }
}

void increaseRadiusOfCircle(std::vector<Circle>& arrayOfCircles)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        for (auto& circle : arrayOfCircles)
        {
            circle.changeRadius(2.f);
        }
    }
}

void decreaseRadiusOfCircle(std::vector<Circle>& arrayOfCircles)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
    {
        for (auto& circle : arrayOfCircles)
        {
            circle.changeRadius(-2.f);
        }
    }
}

void creatingOneCircle(std::array<Circle*, 3>& arrayOfCirclePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
    {
        if (arrayOfCirclePointers[0] != nullptr)
        {
            arrayOfCirclePointers[0]->show();
            delete arrayOfCirclePointers[0];
            Circle* circlePtr{ new Circle{} };
            arrayOfCirclePointers[0] = circlePtr;
            arrayOfCirclePointers[0]->show();
        }
        else
        {
            Circle* circlePtr{ new Circle{} };
            arrayOfCirclePointers[0] = circlePtr;
            arrayOfCirclePointers[0]->show();
        }
    }
}

//for arrays of circles
void increaseRadiusOfArrayOfCircles(std::vector<std::array<Circle*, 3>>& vectorOfArraysOfCirclePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        for (auto& arrayOfCirclePtr : vectorOfArraysOfCirclePointers)
        {
            for (auto& circlePtr : arrayOfCirclePtr)
            {
                if (circlePtr != nullptr && circlePtr->isShown)
                {
                    circlePtr->changeRadius(2.f);
                }
            }
        }
    }
}

void decreaseRadiusOfArrayOfCircles(std::vector<std::array<Circle*, 3>>& vectorOfArraysOfCirclePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
    {
        for (auto& arrayOfCirclePtr : vectorOfArraysOfCirclePointers)
        {
            for (auto& circlePtr : arrayOfCirclePtr)
            {
                if (circlePtr != nullptr && circlePtr->isShown)
                {
                    circlePtr->changeRadius(-2.f);
                }
            }
        }
    }
}


//ELLIPSE
void creatingEllipse(std::vector<Ellipse>& arrayOfEllipse)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        Ellipse ellipse{};
        arrayOfEllipse.push_back(ellipse);
    }
}

void rotateEllipse(std::vector<Ellipse>& arrayOfEllipse)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        for (auto& ellipse : arrayOfEllipse)
        {
            ellipse.rotate();
        }
    }
}

void creatingOneEllipse(std::array<Ellipse*, 3>& arrayOfEllipsePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        if (arrayOfEllipsePointers[0] != nullptr)
        {
            arrayOfEllipsePointers[0]->show();
            delete arrayOfEllipsePointers[0];
            Ellipse* ellipsePtr{ new Ellipse{} };
            arrayOfEllipsePointers[0] = ellipsePtr;
            arrayOfEllipsePointers[0]->show();
        }
        else
        {
            Ellipse* ellipsePtr{ new Ellipse{} };
            arrayOfEllipsePointers[0] = ellipsePtr;
            arrayOfEllipsePointers[0]->show();
        }
    }
}

void rotateArrayOfEllipse(std::vector<std::array<Ellipse*, 3>>& vectorOfArraysOfEllipsePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        for (auto& arrayOfEllipsePtr : vectorOfArraysOfEllipsePointers)
        {
            for (auto& ellipsePtr : arrayOfEllipsePtr)
            {
                if (ellipsePtr != nullptr && ellipsePtr->isShown)
                {
                    ellipsePtr->returnCircle();
                }
            }
        }
    }
}

//FOR QUADRANGLE
void creatingQuadrangle(std::vector<Quadrangle>& arrayOfQuadrangle)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::G))
    {
        Quadrangle quadrangle{};
        arrayOfQuadrangle.push_back(quadrangle);
    }
}

void creatingOneQuadrangle(std::array<Quadrangle*, 3>& arrayOfQuadranglePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
    {
        if (arrayOfQuadranglePointers[0] != nullptr)
        {
            arrayOfQuadranglePointers[0]->show();
            delete arrayOfQuadranglePointers[0];
            Quadrangle* quadranglePtr{ new Quadrangle{} };
            arrayOfQuadranglePointers[0] = quadranglePtr;
            arrayOfQuadranglePointers[0]->show();
        }
        else
        {
            Quadrangle* quadranglePtr{ new Quadrangle{} };
            arrayOfQuadranglePointers[0] = quadranglePtr;
            arrayOfQuadranglePointers[0]->show();
        }
    }
}

//rectangle
void creatingRectangle(std::vector<Rectangle>& arrayOfRectangle)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
    {
        Rectangle rectangle{};
        arrayOfRectangle.push_back(rectangle);
    }
}

void creatingOneRectangle(std::array<Rectangle*, 3>& arrayOfRectanglePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
    {
        if (arrayOfRectanglePointers[0] != nullptr)
        {
            arrayOfRectanglePointers[0]->show();
            delete arrayOfRectanglePointers[0];
            Rectangle* rectanglePtr{ new Rectangle{} };
            arrayOfRectanglePointers[0] = rectanglePtr;
            arrayOfRectanglePointers[0]->show();
        }
        else
        {
            Rectangle* rectanglePtr{ new Rectangle{} };
            arrayOfRectanglePointers[0] = rectanglePtr;
            arrayOfRectanglePointers[0]->show();
        }
    }
}

void increaseHeightOfRectangle(std::vector<Rectangle>& arrayOfRectangle)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::V))
    {
        for (auto& rectangle : arrayOfRectangle)
        {
            rectangle.changeHeight(2.f);
        }
    }
}

void decreaseHeightOfRectangle(std::vector<Rectangle>& arrayOfRectangle)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
    {
        for (auto& rectangle : arrayOfRectangle)
        {
            rectangle.changeHeight(-2.f);
        }
    }
}

void increaseLengthOfRectangle(std::vector<Rectangle>& arrayOfRectangle)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::N))
    {
        for (auto& rectangle : arrayOfRectangle)
        {
            rectangle.changeLength(2.f);
        }
    }
}
void decreaseLengthOfRectangle(std::vector<Rectangle>& arrayOfRectangle)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
    {
        for (auto& rectangle : arrayOfRectangle)
        {
            rectangle.changeLength(-2.f);
        }
    }
}

void increaseHeightOfArrayOfRectangle(std::vector<std::array<Rectangle*, 3>>& vectorOfArraysOfRectanglePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::V))
    {
        for (auto& arrayOfRectanglePtr : vectorOfArraysOfRectanglePointers)
        {
            for (auto& rectanglePtr : arrayOfRectanglePtr)
            {
                if (rectanglePtr != nullptr && rectanglePtr->isShown)
                {
                    rectanglePtr->changeHeight(2.f);
                }
            }
        }
    }
}

void decreaseHeightOfArrayOfRectangle(std::vector<std::array<Rectangle*, 3>>& vectorOfArraysOfRectanglePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
    {
        for (auto& arrayOfRectanglePtr : vectorOfArraysOfRectanglePointers)
        {
            for (auto& rectanglePtr : arrayOfRectanglePtr)
            {
                if (rectanglePtr != nullptr && rectanglePtr->isShown)
                {
                    rectanglePtr->changeHeight(-2.f);
                }
            }
        }
    }
}


void increaseLengthOfArraysOfRectangle(std::vector<std::array<Rectangle*, 3>>& vectorOfArraysOfRectanglePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::N))
    {
        for (auto& arrayOfRectanglePtr : vectorOfArraysOfRectanglePointers)
        {
            for (auto& rectanglePtr : arrayOfRectanglePtr) //rectangle is pointer
            {
                if (rectanglePtr != nullptr && rectanglePtr->isShown)
                {
                    rectanglePtr->changeLength(2.f);
                }
            }
        }
    }
}

void decreaseLengthOfArraysOfRectangle(std::vector<std::array<Rectangle*, 3>>& vectorOfArraysOfRectanglePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
    {
        for (auto& arrayOfRectanglePtr : vectorOfArraysOfRectanglePointers)
        {
            for (auto& rectanglePtr : arrayOfRectanglePtr)
            {
                if (rectanglePtr != nullptr && rectanglePtr->isShown)
                {
                    rectanglePtr->changeLength(-2.f);
                }
            }
        }
    }
}

//trapezoid
void creatingTrapezoid(std::vector<Trapezoid>& arrayOfTrapezoid)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
    {
        Trapezoid trapezoid{};
        arrayOfTrapezoid.push_back(trapezoid);
    }
}

void creatingOneTrapezoid(std::array<Trapezoid*, 3>& arrayOfTrapezoidPointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
    {
        if (arrayOfTrapezoidPointers[0] != nullptr)
        {
            arrayOfTrapezoidPointers[0]->show();
            delete arrayOfTrapezoidPointers[0];
            Trapezoid* trapezoidPtr{ new Trapezoid{} };
            arrayOfTrapezoidPointers[0] = trapezoidPtr;
            arrayOfTrapezoidPointers[0]->show();
        }
        else
        {
            Trapezoid* trapezoidPtr{ new Trapezoid{} };
            arrayOfTrapezoidPointers[0] = trapezoidPtr;
            arrayOfTrapezoidPointers[0]->show();
        }
    }
}

void increaseHeightOfTrapezoid(std::vector<Trapezoid>& arrayOfTrapezoid)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::V))
    {
        for (auto& trapezoid : arrayOfTrapezoid)
        {
            trapezoid.changeHeight(2.f);
        }
    }
}

void decreaseHeightOfTrapezoid(std::vector<Trapezoid>& arrayOfTrapezoid)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
    {
        for (auto& trapezoid : arrayOfTrapezoid)
        {
            trapezoid.changeHeight(-2.f);
        }
    }
}

//rhomb
void creatingRhomb(std::vector<Rhomb>& arrayOfRhomb)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
    {
        Rhomb rhomb{};
        arrayOfRhomb.push_back(rhomb);
    }
}

void creatingOneRhomb(std::array<Rhomb*, 3>& arrayOfRhombPointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
    {
        if (arrayOfRhombPointers[0] != nullptr)
        {
            arrayOfRhombPointers[0]->show();
            delete arrayOfRhombPointers[0];
            Rhomb* rhombPtr{ new Rhomb{} };
            arrayOfRhombPointers[0] = rhombPtr;
            arrayOfRhombPointers[0]->show();
        }
        else
        {
            Rhomb* rhombPtr{ new Rhomb{} };
            arrayOfRhombPointers[0] = rhombPtr;
            arrayOfRhombPointers[0]->show();
        }
    }
}

void changeHorizontalDiagonal(std::vector<Rhomb>& arrayOfRhomb)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
    {
        for (auto& rhomb : arrayOfRhomb)
        {
            rhomb.changeHorisontalDiagonal(2.f);
        }
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
    {
        for (auto& rhomb : arrayOfRhomb)
        {
            rhomb.changeHorisontalDiagonal(-2.f);
        }
    }
}

void changeVerticalDiagonal(std::vector<Rhomb>& arrayOfRhomb)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
    {
        for (auto& rhomb : arrayOfRhomb)
        {
            rhomb.changeVerticalDiagonal(2.f);
        }
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
    {
        for (auto& rhomb : arrayOfRhomb)
        {
            rhomb.changeVerticalDiagonal(-2.f);
        }
    }
}

void creatingFigures(std::array<Figure*, 30>& arrayOfFigurePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num9))
    {
        std::mt19937 mt;
        std::uniform_int_distribution<> distr(1, 6);
       
       ///// for (int i{ 0 }; i < 30; i++)
       //// {
       //     if (distr(mt) == 1)
       //     {
       //         std::cout << "figure array circle created\n";
       //         arrayOfFigurePointers[i]->show();
       //         delete arrayOfFigurePointers[i];
       //         Circle* circlePtr{ new Circle{} };
       //         arrayOfFigurePointers[i] = circlePtr;
       //         arrayOfFigurePointers[i]->show();
       //     }
       //     else if (distr(mt) == 2)
       //     {
       //         arrayOfFigurePointers[i]->show();
       //         delete arrayOfFigurePointers[i];
       //         Ellipse* ellipsePtr{ new Ellipse{} };
       //         arrayOfFigurePointers[i] = ellipsePtr;
       //         arrayOfFigurePointers[i]->show();
       //     }
       //     else if (distr(mt) == 3)
       //     {
       //         arrayOfFigurePointers[i]->show();
       //         delete arrayOfFigurePointers[i];
       //         Quadrangle* quadranglePtr{ new Quadrangle{} };
       //         arrayOfFigurePointers[i] = quadranglePtr;
       //         arrayOfFigurePointers[i]->show();
       //     }
       //     else if (distr(mt) == 4)
       //     {
       //         arrayOfFigurePointers[i]->show();
       //         delete arrayOfFigurePointers[i];
       //         Rectangle* rectanglePtr{ new Rectangle{} };
       //         arrayOfFigurePointers[i] = rectanglePtr;
       //         arrayOfFigurePointers[i]->show();
       //     }
       //     else if (distr(mt) == 5)
       //     {
       //         arrayOfFigurePointers[i]->show();
       //         delete arrayOfFigurePointers[i];
       //         Rhomb* rhombPtr{ new Rhomb{} };
       //         arrayOfFigurePointers[i] = rhombPtr;
       //         arrayOfFigurePointers[i]->show();
       //     }
       //     else if (distr(mt) == 6)
       //     {
       //         arrayOfFigurePointers[i]->show();
       //         delete arrayOfFigurePointers[i];
       //         Trapezoid* trapezoidPtr{ new Trapezoid{} };
       //         arrayOfFigurePointers[i] = trapezoidPtr;
       //         arrayOfFigurePointers[i]->show();
       //     }
       // }  
       
      
        for (int i{ 0 }; i < 30; i++)
        {
            if (distr(mt) == 1)
            {
                std::cout << "figure array circle created\n";
                Circle* circlePtr{ new Circle{} };
                arrayOfFigurePointers[i] = circlePtr;
                arrayOfFigurePointers[i]->show();
            }
            if (distr(mt) == 2)
            {
                Ellipse* ellipsePtr{ new Ellipse{} };
                arrayOfFigurePointers[i] = ellipsePtr;
                arrayOfFigurePointers[i]->show();
            }
            if (distr(mt) == 3)
            {
                Quadrangle* quadranglePtr{ new Quadrangle{} };
                arrayOfFigurePointers[i] = quadranglePtr;
                arrayOfFigurePointers[i]->show();
            }
            if (distr(mt) == 4)
            {
                Rectangle* rectanglePtr{ new Rectangle{} };
                arrayOfFigurePointers[i] = rectanglePtr;
                arrayOfFigurePointers[i]->show();
            }
            if (distr(mt) == 5)
            {
                Rhomb* rhombPtr{ new Rhomb{} };
                arrayOfFigurePointers[i] = rhombPtr;
                arrayOfFigurePointers[i]->show();
            }
            if (distr(mt) == 6)
            {
                Trapezoid* trapezoidPtr{ new Trapezoid{} };
                arrayOfFigurePointers[i] = trapezoidPtr;
                arrayOfFigurePointers[i]->show();
            }
        }

    }
}

void hideCircular(std::array<Figure*, 30>& arrayOfFigurePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
    {
        for (auto& shapePtr : arrayOfFigurePointers)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->show();
            }
        }
    }
}

void hideAll(std::array<Figure*, 30>& arrayOfFigurePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
    {
        for (auto& shapePtr : arrayOfFigurePointers)
        {
            if (shapePtr!=nullptr)
            {
                shapePtr->show();
            }
        }
    }
}

void hideQuadrangle(std::array<Figure*, 30>& arrayOfFigurePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
    {
        for (auto& shapePtr : arrayOfFigurePointers)
        {
            Quadrangle* isQuadrangle{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangle)
            {
                isQuadrangle->show();
            }
        }
    }
}

void increaseRadius(std::array<Figure*, 30>& arrayOfFigurePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
    {
        for (auto& shapePtr : arrayOfFigurePointers)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->changeRadius(2.f);
            }
        }
    }
}

void decreaseRadius(std::array<Figure*, 30>& arrayOfFigurePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
    {
        for (auto& shapePtr : arrayOfFigurePointers)
        {
            Circle* isCircular{ dynamic_cast<Circle*>(shapePtr) };
            if (isCircular)
            {
                isCircular->changeRadius(-2.f);
            }
        }
    }
}

void increaseLength(std::array<Figure*, 30>& arrayOfFigurePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
    {
        for (auto& shapePtr : arrayOfFigurePointers)
        {
            Quadrangle* isQuadrangular{ dynamic_cast<Quadrangle*>(shapePtr) };
            if (isQuadrangular)
            {
                isQuadrangular->changeLength(2.f);
            }
        }
    }
}