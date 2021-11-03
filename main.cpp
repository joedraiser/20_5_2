#include <iostream>
#include <ctime>
#include <fstream>



int main()
{
    std::srand(std::time(nullptr));
    std::ofstream pic("pic.txt");

    int x,y;

    std::cout << "Input height: ";
    std::cin >> y;
    std::cout << "Input length: ";
    std::cin >> x;

    for(int i=0;i<y;i++)
    {
        for (int j = 0; j < x; j++)
        {
            pic << rand()%2;
        }
        pic << std::endl;
    }

    return 0;
}
