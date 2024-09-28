#include <iostream>
#include <iomanip>
using namespace std;

// Creates class color with properties of red green and blue. Has ability to print those values.
class Color{
    private:
        int red;
        int green;
        int blue;
    public:
        double getRed() { return red;}
        void setRed(int r) { red = r;}
        double getGreen() { return green;}
        void setGreen(int g) { green = g;}
        double getBlue() { return blue;}
        void setRed(int b) { blue = b;}

        void print() const
        {
            cout << "Red: " << red;
            cout << " Green: " << green;
            cout << " Blue: " << blue;
            cout << endl;
        }
};

int main() 
{

}