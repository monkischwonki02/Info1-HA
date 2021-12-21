#include <iostream>


int A2() {

	double sumPreisNorm = 0.0;
	double sumPreisMem = 60.0;
	short i = 0;

	std::cout << "\t\tPreismodell 1\t\tPreismodell 2" << std::endl;
	
	while (sumPreisMem >= sumPreisNorm) {
		i++;
		sumPreisNorm += 4.5;
		sumPreisMem += 2.5;
		std::cout << i << ".\t\t  " << sumPreisNorm << "\t\t\t    " << sumPreisMem << std::endl;
	}


	return 0;
}