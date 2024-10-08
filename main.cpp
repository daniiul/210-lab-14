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
        void setBlue(int b) { blue = b;}

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
    Color a, b, c;

    a.setRed(233);
    a.setGreen(145);
    a.setBlue(76);

    b.setRed(45);
    b.setGreen(225);
    b.setBlue(2);

    c.setRed(132);
    c.setGreen(215);
    c.setBlue(79);

    a.print();
    b.print();
    c.print();
}
