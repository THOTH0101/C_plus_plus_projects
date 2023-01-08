#include <iostream>
#include <cmath>
using namespace std;

const int ROW = 4;
const int COL = 2;
//function prototype
double getDistance(double x, double y, double x1, double y1); //compute distance btw two points
double getTriangleArea(double x1, double y1, double x2, double y2, double x3, double y3); //find the area of triangle with given points
bool getIntersectionPoint(const double point[][COL], double intercept[]); //find the point of intersection btw points
void sortArray(double array[], int arraySize); //sort array in increasing order
void getFourTriangleArea(const double points[][COL], double intercept[], double area[]); //display the area of the four triangle

int main()
{
    double points[ROW][COL];
    double area[ROW];
    double intercept[COL];

    cout << "Enter x1, y1, x2, y2, x3, y3, x4, y4: ";

    for(int i = 0; i < ROW; i++)
        cin >> points[i][0] >> points[i][1];

    getFourTriangleArea(points, intercept, area);

    return 0;
}

//function definition
double getDistance(double x, double y, double x1, double y1)
{
    return sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
}

double getTriangleArea(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double side1 = getDistance(x1, y1, x2, y2);
    double side2 = getDistance(x2, y2, x3, y3);
    double side3 = getDistance(x1, y1, x3, y3);
    double s = (side1 + side2 + side3) / 2;
    double area = s * (s - side1) * (s - side2) * (s - side3);

    if(area < 0.000001)
        return 0;
    else
        return sqrt(area);
}

bool getIntersectionPoint(const double points[][COL], double intercept[])
{
    //line AB represented as a1x + b1y = c1
    double a = points[1][1] - points[0][1];
    double b = points[0][0] - points[1][0];
    double c = (a * points[0][0]) + (b * points[0][1]);

    //line CD represented as a2x + b2y = c2
    double a1 = points[3][1] - points[2][1];
    double b1 = points[2][0] - points[3][0];
    double c1 = (a1 * points[2][0]) + (b1 * points[2][1]);
    double determinant = (a * b1) - (a1 * b);

    if(determinant == 0)
        return false;
    else
    {
        intercept[0] = (b1 * c - b * c1) / determinant;
        intercept[1] = (a * c1 - a1 * c) / determinant;
        return true;
    }
}

void sortArray(double array[], int arraySize)
{
    for(int i = 0; i < arraySize - 1; i++)
    {
        double currentMin = array[i];
        int currentMinIndex = i;

        for(int j = i + 1; j < arraySize; j++)
        {
            if(currentMin > array[j])
            {
                currentMin = array[j];
                currentMinIndex = j;
            }
        }

        //swap if necessary
        if(currentMinIndex != i)
        {
            array[currentMinIndex] = array[i];
            array[i] = currentMin;
        }
    }
}

void getFourTriangleArea(const double points[][COL], double intercept[], double area[])
{
    bool isIntersection = getIntersectionPoint(points, intercept);

    if(!isIntersection)
        cout << "The two lines are parallel" << endl;
    else
    {
        //compute the area for triangle in the polygon
        area[0] = getTriangleArea(points[0][0], points[0][1], points[1][0], points[1][1], intercept[0], intercept[1]);
        area[1] = getTriangleArea(points[1][0], points[1][1], points[2][0], points[2][1], intercept[0], intercept[1]);
        area[2] = getTriangleArea(points[2][0], points[2][1], points[3][0], points[3][1], intercept[0], intercept[1]);
        area[3] = getTriangleArea(points[3][0], points[3][1], points[0][0], points[0][1], intercept[0], intercept[1]);

        sortArray(area, ROW); //invoke to sort the array

        cout << "The areas are ";

        for(int i = 0; i < ROW; i++)
            cout << area[i] << ' ';
    }
}