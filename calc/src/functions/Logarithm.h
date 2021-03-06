#pragma once

#include <cmath>

#include "Function.h"

class Logarithm : public Function
{
public:
  double& calc() override
  {
    double value;
    double base = 10;
    if (this->arguments.empty())
    {
      //TODO: error class
      throw 0;
    }
    else
    {
      value = this->arguments.at(0);
      if (this->arguments.size() > 1)
      {
        base = this->arguments.at(1);
      }
    }
    this->arguments.clear();
    // Check for rounding errors
    if (base == 0.0)
    {
      //TODO: Error check
      throw 0;
    }
    this->result = std::log(value) / std::log(base);
    return this->result;
  }
};