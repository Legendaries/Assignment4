
#include <iostream>
#include <string>

int main() {

	double xx = 100; //1
	double *xPtr = &xx; //2 & 3
	std::cout << "Value of xx: " << *xPtr << std::endl << "Value of xx from address: " << *(&xx) << std::endl; //4
	int yy = 200; //5
	int *yPtr = &yy; //6 & 7
	std::cout << "Value of yy: " << *yPtr << std::endl << "Value of yy from address: " << *(&yy) << std::endl; //8

	std::string firstname = "Bob";//9
	std::string *fNamePtr = &firstname; //10 & 11
	std::cout << "Value of firstname: " << *fNamePtr << std::endl << "Value of firstname from address: " << *(&firstname) << std::endl; //12

	double zzz = 2.333; //13
	double *zzzPtr = &zzz;//14
	*zzzPtr += 1; //15
	std::cout << "Value of zzz: " << *zzzPtr << std::endl << "Address of zzz: " << zzzPtr << std::endl; //16

	double arrayMoo[] = {1.11, 1.22, 1.33, 1.44, 1.55};//17
	double *mooPtr = arrayMoo;//18

	for (int i = 0; i < 5; i++)//19
		std::cout << mooPtr[i] << std::endl;

	for (int i = 0; i < 5; i++)//20
		std::cout << *(mooPtr++) << std::endl;

	for (int i = 5; i > 0; i--)//21
		std::cout << *(--mooPtr) << std::endl;

	//22
	int arraySize = 0;
	std::cout << "Enter array size" << std::endl;
	std::cin >> arraySize;

	int *intArray = new int[arraySize];

	//23
	int input = 0;
	int usedSize = 0;
	for (int i = 0; i < arraySize; i++) {
		std::cout << "Enter a number to add to the array or -1 to exit" << std::endl;
		std::cin >> input;
		if (input == -1)
			break;
		intArray[i] = input;
		usedSize++;
	}

	//24
	for (int i = 0; i < usedSize; i++)
		std::cout << intArray[i] << std::endl;

	delete[] intArray;

	system("PAUSE");
}
