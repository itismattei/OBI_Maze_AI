#ifndef POSITION_HPP
#define POSITION_HPP

//==================================================================================================

#include <string>

using namespace std;

//==================================================================================================

#define PI 3.14159

/*!
 * \class Position position.hpp "position.hpp"
 * \brief Position class: it has to let us know where a Node is
 */
class Position {
//==================================================================================================
     private:

          double x;
          double y;

          int alpha; // alpha

//==================================================================================================
     public:
          /*! \fn Position::Position(void)
           *  \brief default constructor.
           */
          Position(void);
          /*! \fn Position::Position(double x, double y, int alpha);
           *  \brief This constructor needs X and Y of the position point and the angle refered to X axis (Like in Math)
           *  \param double x
           *  \param double y
           *  \param int alpha
           */
          Position(double x, double y, int alpha);
          /*! \fn Position::Position(double x, double y);
           *  \brief This constructor needs X and Y of the position point; the angle will have the default value of 0
           *  \param double x
           *  \param double y
           */
          Position(double x, double y);
          /*! \fn Position::Position(int alpha);
           *  \brief This constructor needs only the angle; X and Y will assume values [0.0, 0.0]
           *  \param int alpha
           */
          Position(int alpha);
          /*! \fn Position::Position(int alpha);
           *  \brief This constructor needs only the angle; X and Y will assume values [0.0, 0.0]
           *  \param int alpha
           */
          Position(Position* pos);

          /*! \fn void Position::rotate(int alpha);
           *  \brief Alpha change of the value specified
           *  \note REMEBER: The rotation is counterclockwise
           *  \param int alpha
           */
          void rotate(int alpha);
          /*! \fn void Position::ahead(double value);
           *  \brief [X, Y] will change in order to respect orientation and the distance that we set
           *  \param double value It's the distance between the starting point [Xi, Yi] and the destination point [Xd, Yd]
           */
          void ahead(double value);



          void setX(double x);
          double getX(void);

          void setY(double y);
          double getY(void);

          void setAlpha(int alpha);
          int getAlpha(void);

          static void copyPosition(Position* from, Position* to);
};

#endif
