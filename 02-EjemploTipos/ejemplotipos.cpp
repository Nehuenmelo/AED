#include <iostream>

int main()
{
	std::string nombre = "River Plate";
	int puntos = 35;
	double promedio = 1.59;
	bool copaLib;

    std::cout<<"El club "<<nombre<<" tiene "<<puntos<<" puntos.\n";
    std::cout<<"Su promedio es "<<promedio<<".\n";

	
if(puntos >= 41){
	copaLib = true;
        std::cout<<"Esta clasificado a la Copa Libertadores.";
	}
	else{
	copaLib = false;
            std::cout<<"No esta clasificado a la Copa Libertadores";
    	}
}
