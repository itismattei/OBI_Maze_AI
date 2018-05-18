//==================================================================================================
#include "position.hpp"
//==================================================================================================

#include <string>
#include <cmath>

using namespace std;

//==================================================================================================

Position::Position(void) {
     this->setX(0.0);
     this->setY(0.0);
     this->setAlpha(0);
};

Position::Position(double x, double y, int alpha) {
     this->setX(x);
     this->setY(y);
     this->setAlpha(alpha);
};

Position::Position(double x, double y) {
     this->setX(x);
     this->setY(y);
     this->setAlpha(0);
};

Position::Position(int alpha) {
     this->setX(0.0);
     this->setY(0.0);
     this->setAlpha(alpha);
};

Position::Position(Position* pos) {
     this->setX(pos->getX());
     this->setY(pos->getY());
     this->setAlpha(pos->getAlpha());
};

//==================================================================================================

void Position::rotate(int alpha) {
     this->alpha += alpha;
};


void Position::ahead(double value) {
     this->x += cos((this->getAlpha() * PI) / 180) * value;
     this->y += sin((this->getAlpha() * PI) / 180) * value;
};

//==================================================================================================

void Position::setX(double x) {
     this->x = x;
};

double Position::getX(void) {
     return this->x;
};



void Position::setY(double y) {
     this->y = y;
};

double Position::getY(void) {
     return this->y;
};



void Position::setAlpha(int alpha) {
     this->alpha = alpha;
};

int Position::getAlpha(void) {
     return this->alpha;
};

//==================================================================================================

void Position::copyPosition(Position* from, Position* to) {
     to->setX(from->getX());
     to->setY(from->getY());
     to->setAlpha(from->getAlpha());
};
