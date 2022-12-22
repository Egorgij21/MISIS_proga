#include "geom.hpp"

#include <iostream>
#include <cmath>




std::ostream& operator<<(std::ostream& ostrm, const RDec2d& v) {
    return ostrm << '(' << v.x << ',' << v.y << ')';
}

RDec2d& operator+=(RDec2d& lhs, const RDec2d& rhs) {
    lhs.x += rhs.x;
    lhs.y += rhs.y;
    return lhs;
}

RDec2d operator+(const RDec2d& lhs, const RDec2d& rhs) {
    RDec2d res = lhs;
    res += rhs;
    return res;
}

RDec2d& operator-=(RDec2d& lhs, const RDec2d& rhs) {
    lhs.x -= rhs.x;
    lhs.y -= rhs.y;
    return lhs;
}

RDec2d operator-(const RDec2d& lhs, const RDec2d& rhs) {
    RDec2d res = lhs;
    res -= rhs;
    return res;
}

RDec2d operator-(const RDec2d& vec) {
    return vec - vec - vec;
}

RDec2d operator*=(const int& num, RDec2d& rhs) {
    rhs.x *= num;
    rhs.y *= num;
    return rhs;
}

RDec2d operator*=(RDec2d& lhs, const int& num) {
    lhs.x *= num;
    lhs.y *= num;
    return lhs;
}

RDec2d operator*(const int& num, const RDec2d& rhs) {
    RDec2d res = rhs;
    res *= num;
    return res;
}

RDec2d operator*(const RDec2d& lhs, const int& num) {
    RDec2d res = lhs;
    res *= num;
    return res;
}

RDec2d operator/=(RDec2d& lhs, const int& num) {
    lhs.x /= num;
    lhs.y /= num;
    return lhs;
}

RDec2d operator/(const RDec2d& lhs, const int& num) {
    RDec2d res = lhs;
    res /= num;
    return res;
}

double Dot(const RDec2d& lhs, const RDec2d& rhs) {
    return lhs.x * rhs.x + lhs.y * rhs.y;
}

double Cos(const RDec2d& lhs, const RDec2d& rhs) {
    double sql = std::sqrt(Dot(lhs, lhs));
    double sqr = std::sqrt(Dot(rhs, rhs));
    return (sql * sqr)/Dot(lhs, rhs);
}

double Norm(const RDec2d& vec) {
    return std::sqrt(Dot(vec, vec));
}

bool operator==(const RDec2d& lhs, const RDec2d& rhs) {
    double eps = 1e-4;
    if(std::abs(lhs.x - rhs.x) < eps && std::abs(lhs.y - rhs.y) < eps)
        return true;
    return false;
}

bool operator!=(const RDec2d& lhs, const RDec2d& rhs) {
    if(lhs == rhs)
        return false;
    return true;
}


RPol2d Dec_to_Pol(const RDec2d& vec) {
    RPol2d ans;
    ans.r = Dot(vec, vec);
    ans.phi = Angle(vec);
    return ans;
}

RDec2d Pol_to_Dec(const RPol2d& vec) {
    RDec2d ans;
    ans.x = vec.r * std::cos(vec.phi);
    ans.y = vec.r * std::sin(vec.phi);
    return ans;
}

double Angle(const RDec2d& vec) {
    return std::atan2(vec.y, vec.x);
}

