/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include"classQuiz2Head.hpp"

int main()
{
	Cat cat1;

	cat1.setName("Stephen");
	cat1.setBreed("Tabby");
	cat1.setAge(3);

	cat1.printInfo();
	cout<<"\n";
}
