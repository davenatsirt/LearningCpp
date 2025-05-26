#ifndef CIRCLE_H
#define CIRCLE_H

#pragma once

#include "iShape.hpp"

class CCircle: public IShape {
    private:
        int radius;

    public:
        explicit CCircle(int r);
        int calculateArea() const override;
        int calculateVolume() const override;
};

#endif
