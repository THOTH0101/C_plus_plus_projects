//
// Created by thoth on 6/8/23.
//

#ifndef THE_CIRCLE_CLASS_CIRCLEWITHCONTACTMEMBERFUNCTIONS_H
#define THE_CIRCLE_CLASS_CIRCLEWITHCONTACTMEMBERFUNCTIONS_H


class Circle
{
public:
    Circle();
    Circle(double);
    double getArea() const;
    double getRadius() const;
    void setRadius(double);
    int compareTo(const Circle& secondCircle) const;
    static int getNumberOfObjects();

private:
    double radius;
    static int numberOfObjects;
};

//define the relational operators (<, <=, ==, !=, >, >=)
bool operator<(const Circle& c1, const Circle& c2);
bool operator<=(const Circle& c1, const Circle& c2);
bool operator==(const Circle& c1, const Circle& c2);
bool operator!=(const Circle& c1, const Circle& c2);
bool operator>(const Circle& c1, const Circle& c2);
bool operator>=(const Circle& c1, const Circle& c2);

#endif //THE_CIRCLE_CLASS_CIRCLEWITHCONTACTMEMBERFUNCTIONS_H
