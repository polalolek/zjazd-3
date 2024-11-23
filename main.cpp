#include <iostream>

int main()
{
    std::cout << "Program do obliczania delty i jej pierwiastkow. \n";
    std::cout << "Postac rownania kwadratowego: ax^2+bx+c=0 \n";
    float a, b, c;
    std::cout << "Podaj a: ";
    std::cin >> a;
    std::cout << "Podaj b: ";
    std::cin >> b;
    std::cout << "Podaj c: ";
    std::cin >> c;
    std::cout << "Rownanie: " << a << "^2+" << b << "x+" << c << "=0 \n";

    float delta = b * b - 4 * a * c;
    std::cout << "Delta wynosi: \n"
              << delta << "\n";
    float x1, x2, x0;
    if (delta < 0)
    {
        std::cout << "Rownanie nie ma pierwiastkow.";
    }
    else if (delta == 0)
    {
        x0 = -b / 2 * a;
        std::cout << "Rownanie ma jeden pierwiastek, x= " << x0 << "\n";
    }
    else if (delta > 0)
    {
        x1 = -b - std::sqrt(delta) / 2 * a;
        x2 = -b + std::sqrt(delta) / 2 * a;
        std::cout << "Rownanie ma dwa pierwiastki, x1= " << x1 << ", x2= " << x2 << "\n";
    }
    return 0;
}
