/*Goal: practice creating and using a class
**Use the class 'Dog' to create to 
**instances of the class, dog1 and dog2.
**Assign dog1 the name: Trixie
**Assign dog2 the name: Kali
**Assign dog1 the license #1234
**Assign dog2 the license #5678
*/


#include"classQuizHead.hpp"

int main()
{
	Dog dog1, dog2;

	dog1.setName("Trixie");
	dog2.setName("Kali");

	dog1.setLicenseNumber(1234);
	dog2.setLicenseNumber(5678);

	std::cout << "Dog 1\n" << "\t";
	dog1.printInfo();

	std::cout << "\n\nDog 2\n" << "\t";
	dog2.printInfo();
    	cout << endl;

	return 0;
}
