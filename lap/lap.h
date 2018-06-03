/************************************************************************
*
*  lap.h
   version 1.0 - 21 june 1996
   author  Roy Jonker, MagicLogic Optimization Inc.
   
   header file for LAP
*

--> some modifications by Andreas Cardeneo: cost is double, use of STL structures,
--> use of Matrix class, debug parameter for simple output

**************************************************************************/
#pragma once

#include "matrix.h"
#include <vector>

/*************** CONSTANTS  *******************/

  #define BIG 100000

/*************** TYPES      *******************/

  typedef int row;
  typedef int col;
  typedef double cost;

/*************** FUNCTIONS  *******************/

  extern double lap(int dim, const Matrix* assigncost,
			   std::vector<int>& rowsol, std::vector<int>& colsol, std::vector<double>& u, std::vector<double>& v, bool dbgmode = false);

extern void checklap(int dim, const Matrix* assigncost,
			   std::vector<int>& rowsol, std::vector<int>& colsol, std::vector<double>& u, std::vector<double>& v);

