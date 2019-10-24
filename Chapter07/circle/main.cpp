#include <iostream>
using namespace std;

class Circle
{
public:
    void setRadius(int r);
    double getRadius();
    double calculateArea();
    double calculateCircumference();

private:
    double m_radius;
};

void Circle::setRadius(int r)
{
    if (r > 0.0)
    {
        m_radius = r;
    }
    else // Invalid value, use default value instead
    {
        m_radius = 1.0;
        cout << "Invalid input, radius set to default value of 1.0\n";
    }
    
}

double Circle::getRadius()
{
    return m_radius;
}

double Circle::calculateArea()
{
    return 3.14 * m_radius * m_radius;
}

double Circle::calculateCircumference()
{
    return 2 * 3.14 * m_radius;
}

int main()
{
    Circle circle1, circle2;

    circle1.setRadius(5.0);
    circle2.setRadius(3.0);

    cout << "Radius of circle 1: " << circle1.getRadius() << '\n';
    cout << "Area of circle 1: " << circle1.calculateArea() << '\n';
    cout << "Radius of circle 2: " << circle2.getRadius() << '\n';
    cout << "Area of circle 2: " << circle2.calculateArea() << '\n';

    circle2.setRadius(-234);
    cout << "Radius of circle 2: " << circle2.getRadius() << '\n';
    cout << "Area of circle 2: " << circle2.calculateArea() << '\n';
    return 0;
}