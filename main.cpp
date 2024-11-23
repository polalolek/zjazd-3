#include <iostream>

int main()
{
    char literka;
    std::cout << "Program do zgadywania literki:) \n";

    do
    {
        std::cout << "Podaj litere: \n";
        std::cin >> literka;

        if (literka != 't')
        {
            std::cout << "Zla literka! \n";
        }

    } while (literka != 't');

    std::cout << "Zgadlxs literke! \n";

    return 0;
}