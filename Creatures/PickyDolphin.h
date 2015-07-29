struct PickyDolphin : Creature {
        PickyDolphin(std::string n, Centimeters s = 50000, Color c = PURPLE){
		// This is the constructor
		// In this function, set initial values
		// for the color, food, size, and name
		color = c;
		food = CARNIVORE;
		size = s; // Centimeters
		name = n;
	}
        bool willEat(Creature & org) {
                // I only eat Creatures becaus I'm a CARNIVORE
		std::cout << org.type << std::endl;
                if (org.type == CREATURE) {
			std::cout << "org is a Creature\n";
                        // Can only eat something smaller than
                        // or equal to our size
                        // Also, I only eat BLUE food
                        // I'm no scavenger, so I don't eat dead food
			std::cout << size << std::endl;
			std::cout << org.size << std::endl;
                        if ((size > org.size) && (org.color == BLUE) && (org.health != DEAD)) {
                                org.health=DEAD;
                                std::cout << "Organism " << org.name << " just got eaten by " << name << " :(\n";
                                return true;
                        }
                        // Take a bite out of an equal-sized organism, but
                        // Only weaken them if they are healthy; otherwise eat them
                        if ((size == org.size) && (org.color == BLUE)) {
                                if (org.health == SICK) {
                                        org.health=DEAD;
                                        std::cout << "Organism " << org.name << " just got eaten by " << name << " :(\n";
                                        return true;
                                } else if (org.health == HEALTHY) {
                                        org.health=SICK;
                                        std::cout << "Organism " << org.name << " just got chomped by " << name << " :|\n";
                                        return true;
                                }
                        }
                }
                std::cout << "Organism " << org.name << " escaped the notice of " << name << " :)\n";
                return false;

        }
	bool willEat(Plant & org) {
		// I am a CARNIVORE so I do not eat plants
		std::cout << "Organism " << org.name << " escaped the notice of " << name << " :)\n";
                return false;
	}
};

