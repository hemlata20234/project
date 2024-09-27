class Animal {

public void animalSound(){

System.out.println("The animals makes the sound."); }

class Pig extends Animals{

public void animalSound(){

System.out.println("The pig says: wee wee"); }

}

class Dog extends Animals{

public void animalSound(){

System.out.println("The dog says: Bow Bow");

}

class NikPoly {

public static void main(String[] args){

Animals myAnimal = new Animals();

Animals myPig = new Pig();

Animals myDog = new Dog();
myAnimal.animalSound();
myPig.animalSound();
myDog.animal5ound();

}

}
