# Program showing types (single, hierarchical, and multilevel) of inheritance

class Animal:
    def sound(self):
        print("Animals make sounds")


class Dog(Animal):
    def bark(self):
        print("Dog barks")


class Cat(Animal):
    def meow(self):
        print("Cat meows")


class Puppy(Dog):
    def weep(self):
        print("Puppy weeps")


d = Dog()
d.sound()
d.bark()

c = Cat()
c.sound()
c.meow()

p = Puppy()
p.sound()
p.bark()
p.weep()