#include "vetor.h"

vetor::vetor()
{

}

double vetor::getDir() const
{
    return this->dir;
}

void vetor::setDir(double value)
{
    this->dir = value;
}

double vetor::getX() const
{
    return this->x;
}

void vetor::setX(double value)
{
    this->x = value;
}

double vetor::getY() const
{
    return this->y;
}

void vetor::setY(double value)
{
    this->y = value;
}
