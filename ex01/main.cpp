#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

const WrongAnimal* wrongMeta = new WrongAnimal("WrongAnimal");
const WrongAnimal* wrongI = new WrongCat("WrongCat");

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

std::cout << "WrongAnimal type is: " << wrongMeta->getType() << " " << std::endl;
std::cout << "WrongAnimal: ";
wrongMeta->makeSound();
std::cout << "WrongCat type is: " << wrongI->getType() << " " << std::endl;
std::cout << "WrongCat: ";
wrongI->makeSound();

delete meta;
delete j;
delete i;
delete wrongMeta;
delete wrongI;
return 0;
}

