#pragma once 

#include <iostream>



template <typename T>
struct vector2d
{
    private:
        T _x,_y;
    public:
        vector2d() : _x(0.0) , _y(0.0) {}
        vector2d(T x,T y) : _x(x) , _y(y) {}
        ~vector2d() {};
        double getX() const {return _x;};
        double getY() const {return _y;};
        void setX(T x) {_x = x; };
        void setY(T y) {_y = y; };
        void print() {
            std::cout << _x << "," << _y << std::endl;
        };
        vector2d<T> operator + (vector2d<T> const &other) {
            vector2d<T> vec;
            vec.setX(getX() + other.getX());
            vec.setY(getY() + other.getY());
            return vec;
        };
        vector2d<T> operator - (vector2d<T> const &other) {
            vector2d<T> vec;
            vec.setX(getX() - other.getX());
            vec.setY(getY() - other.getY());
            return vec;
        };
        vector2d<T> operator * (T scalar) {
            vector2d<T> vec;
            vec.setX(getX() * scalar);
            vec.setY(getY() * scalar); 
            return vec;
        };
        double operator * (vector2d<T> const &other) {
            return getX() * other.getX() + getY() * other.getY();
        };
        vector2d<T> operator / (T scalar) {
            vector2d<T> vec;
            vec.setX(getX() / scalar);
            vec.setY(getY() / scalar); 
            return vec;
        };
        void operator += (vector2d<T> const &other) {
            _x += other.getX();
            _y += other.getY();
        }

        void operator -= (vector2d<T> const &other) {
            _x -= other.getX();
            _y -= other.getY();
        }

        void operator *= (T scalar) {
            _x *= scalar;
            _y *= scalar;
        }

        void operator /= (T scalar) {
            _x /= scalar;
            _y /= scalar;
        }
};