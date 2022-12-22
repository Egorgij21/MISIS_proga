#include <iosfwd>


struct RDec2d {
    double x = 0.0;
    double y = 0.0;
};

struct RPol2d {
    double r = 0.0;
    double phi = 0.0;
};


std::ostream& operator<<(std::ostream& ostrm, const RDec2d& v);

RDec2d& operator+=(RDec2d& lhs, const RDec2d& rhs);

RDec2d operator+(const RDec2d& lhs, const RDec2d& rhs);

RDec2d& operator-=(RDec2d& lhs, const RDec2d& rhs);

RDec2d operator-(const RDec2d& lhs, const RDec2d& rhs);

RDec2d operator-(const RDec2d& vec);

RDec2d operator*=(const int& num, RDec2d& rhs);

RDec2d operator*=(RDec2d& lhs, const int& num);

RDec2d operator*(const int& num, const RDec2d& rhs);

RDec2d operator*(const RDec2d& lhs, const int& num);

RDec2d operator/=(RDec2d& lhs, const int& num);

RDec2d operator/(const RDec2d& lhs, const int& num);

double Dot(const RDec2d& lhs, const RDec2d& rhs);

double Cos(const RDec2d& lhs, const RDec2d& rhs);

double Norm(const RDec2d& vec);

bool operator==(const RDec2d& lhs, const RDec2d& rhs);

bool operator!=(const RDec2d& lhs, const RDec2d& rhs);

RPol2d Dec_to_Pol(const RDec2d& vec);

RDec2d Pol_to_Dec(const RPol2d& vec);

double Angle(const RDec2d& vec);