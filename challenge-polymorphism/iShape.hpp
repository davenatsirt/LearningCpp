#ifndef ISHAPE_H
#define ISHAPE_H

class IShape {
    public:
        virtual int calculateArea() const = 0;
        virtual int calculatePerimeter() const = 0;
        virtual ~IShape() = default;
};

#endif