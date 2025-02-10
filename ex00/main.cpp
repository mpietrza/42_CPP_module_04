#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal animal("animal");
	Dog dog("dog");
	Cat cat("cat");

	animal.makeSound();
	dog.makeSound();
	cat.makeSound();
}

