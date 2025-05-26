#ifndef ISHAPE_H
#define ISHAPE_H

class IShape {
    public:
        virtual int calculateArea() const = 0;
        virtual int calculateVolume() const = 0;
        virtual ~IShape() = default;
};

#endif