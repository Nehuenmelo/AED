#include <iostream>

int main()
{
	std::string nombre = "River Plate";
	int puntos = 35;
	double promedio = 1.59;
	bool copaLib;

    std::cout<<"El club "<<nombre<<" tiene "<<puntos<<" puntos.\n";
    std::cout<<"Su promedio es "<<promedio<<".\n";


	copaLib = puntos >= 41;
	if(copaLib==true)
    {
        std::cout<<"Esta clasificado a la copa Libertadores.";

        }else{
            std::cout<<"No esta clasificado a la Copa Libertadores";
    }
}