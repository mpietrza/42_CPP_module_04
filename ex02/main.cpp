#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
std::cout << "Basic tests from the subject:" << std::endl;
const AAnimal* j = new Dog();
const AAnimal* i = new Cat();

std::cout << "Animal *j is a " << j->getType() << std::endl;
std::cout << "Animal *i is a " << i->getType() << std::endl;

delete j;
delete i;

std::cout << "\n-/|\\---\\|/---/|\\---\\|/---/|\\---\\|/---/|\\---\\|/---/|\\---\\|/---/|\\---\\|/-\n" << std::endl;
std::cout << "Second level tests from the subject:" << std::endl;

AAnimal* animals[6];

std::cout << "Creating 3 Dogs:" << std::endl;
for (int i = 0; i < 3; i++)
	animals[i] = new Dog();
std::cout << "Creating 3 Cats:" << std::endl;
for (int i = 3; i < 6; i++)
	animals[i] = new Cat();

std::cout << "Destroying 3 Dogs:" << std::endl;
for (int i = 0; i < 3; i++)
	delete animals[i];
std::cout << "Destroying 3 Cats:" << std::endl;
for (int i = 3; i < 6; i++)
	delete animals[i];

std::cout << "\n-/|\\---\\|/---/|\\---\\|/---/|\\---\\|/---/|\\---\\|/---/|\\---\\|/---/|\\---\\|/-\n" << std::endl;
std::cout << "My tests:" << std::endl;
std::cout << "\n1. Creating a dog, that thinks he's a cat:" << std::endl;

Dog dog;
dog.setBrainIdea("I'm a cat", 0);
std::cout << dog.getType() << " thinks: " << dog.getBrainIdea(0) << std::endl;
std::cout << "\n2. The Dog is sure the cat food tastes better than the dog food" << std::endl;
dog.setBrainIdea("Cat food tastes better", 1);
std::cout << dog.getType() << " thinks: " << dog.getBrainIdea(1) << std::endl;
std::cout << "\n3. Creating a cat, that thinks he's a human:" << std::endl;
Cat cat;
cat.setBrainIdea("I'm a human", 0);
std::cout << cat.getType() << " thinks: " << cat.getBrainIdea(0) << std::endl;
std::cout << "\n4. The Cat is sure the human food tastes better than the cat food" << std::endl;
cat.setBrainIdea("Human food tastes better", 1);
std::cout << cat.getType() << " thinks: " << cat.getBrainIdea(1) << std::endl;
std::cout << "\n5. The cat has an idea to the dog the truth about the food" << std::endl;
cat.setBrainIdea("I'm a good person, I'm gonna tell the truth to the dog.", 2);
std::cout << cat.getType() << " thinks: " << cat.getBrainIdea(2) << std::endl;
std::cout << "\n6. The dog that think's he's a cat starts noticing that cats look diferrently and starts to think he's is a human as the human food tastes the best" << std::endl;
dog.setBrainIdea("I'm a human", 2);
std::cout << dog.getType() << " thinks: " << dog.getBrainIdea(2) << std::endl;
std::cout << "\n7. The dog realizes that humans have to work and decides to think he's a dog although he'll have to go back to the dog food" << std::endl;
dog.setBrainIdea("I'm a dog", 3);
std::cout << dog.getType() << " thinks: " << dog.getBrainIdea(3) << std::endl;
std::cout << "\n8. A human comes over and thinks it's a great idea to clone the dog and the cat" << std::endl;

std::cout << "\nCreating a clone of the dog:" << std::endl;
Dog dog2 = dog;
std::cout << "The cloning process went on so well that the clone is thinking the same as the original dog:" << std::endl;
std::cout << dog2.getType() << " thinks:" << std::endl;
for (int i = 0; dog2.getBrainIdea(i) != ""; i++)
	std::cout << dog2.getBrainIdea(i) << std::endl;

std::cout << "\nCreating a clone of the cat:" << std::endl;
Cat cat2(cat);
std::cout << "The same about the clone of the cat - he is thinking the same as the original cat:" << std::endl;
for (int i = 0; cat2.getBrainIdea(i) != ""; i++)
	std::cout << cat2.getBrainIdea(i) << std::endl;

std::cout << "\n9. The human is happy with the clones and decides to pet them, the clones don't like it though" << std::endl;
dog2.setBrainIdea("I don't like being pet, I'm gonna run away", 0);
std::cout << dog2.getType() << " thinks: " << dog2.getBrainIdea(0) << std::endl;
cat2.setBrainIdea("I don't like being pet, go away!!!", 0);
std::cout << cat2.getType() << " thinks: " << cat2.getBrainIdea(0) << std::endl;

//AAnimal animal; -> Error: cannot instantiate abstract class

return 0;
}

