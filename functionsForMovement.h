#ifndef FUNCTIONS_FOR_SHAPES_H
#define FUNCTIONS_FOR_SHAPES_H

#include "Circle.h"
#include "Ellipse.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include "Rhomb.h"
#include <SFML/Graphics.hpp>
#include <array>
#include <vector>

template <typename shapeName>
void movement(std::array<shapeName, 3>& arrayOfShapePointers);

template <typename ShapeName>
void moveShapesRight(std::vector<ShapeName>& arrayOfShapes);

template <typename ShapeName>
void moveShapesLeft(std::vector<ShapeName>& arrayOfShapes);

template <typename ShapeName>
void moveShapesUp(std::vector<ShapeName>& arrayOfShapes);

template <typename ShapeName>
void moveShapesDown(std::vector<ShapeName>& arrayOfShapes);

template <typename ShapeName>
void creatingArray(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers);

template <typename ShapeName>
void moveThreeShapesDown(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers);

template <typename ShapeName>
void moveThreeShapesUp(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers);

template <typename ShapeName>
void moveThreeShapesRight(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers);

template <typename ShapeName>
void moveThreeShapesLeft(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers);



void moveRight(std::array<Figure*, 30>& arrayOfFigurePointers); //right/left/up/down buttons
void moveLeft(std::array<Figure*, 30>& arrayOfFigurePointers);
void moveUp(std::array<Figure*, 30>& arrayOfFigurePointers);
void moveDown(std::array<Figure*, 30>& arrayOfFigurePointers);

void moveCircularRight(std::array<Figure*, 30>& arrayOfFigurePointers); //d
void moveCircularLeft(std::array<Figure*, 30>& arrayOfFigurePointers);//a
void moveCircularUp(std::array<Figure*, 30>& arrayOfFigurePointers);//w
void moveCircularDown(std::array<Figure*, 30>& arrayOfFigurePointers);//s

void moveQuadrangularRight(std::array<Figure*, 30>& arrayOfFigurePointers);//l
void moveQuadrangularLeft(std::array<Figure*, 30>& arrayOfFigurePointers);//j
void moveQuadrangularUp(std::array<Figure*, 30>& arrayOfFigurePointers);//i
void moveQuadrangularDown(std::array<Figure*, 30>& arrayOfFigurePointers);//k

#endif // !
