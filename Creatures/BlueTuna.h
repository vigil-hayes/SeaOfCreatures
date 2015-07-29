struct BlueTuna : Creature {
        BlueTuna(std::string n){
		food = OMNIVORE;
		color = BLUE;
		size = 300; // Centimeters
		name = n;
	}
        bool willEat(Creature & org) {
                // I eat Creatures and Plants because I am an OMNIVORE
		// Creatures
                if (org.type == CREATURE) {
                        // Can only eat something smaller than
                        // or equal to our size
                        if ((size > org.size) && (org.health != DEAD)) {
                                org.health=DEAD;
                                std::cout << "Organism " << org.name << " just got eaten by " << name << " :(\n";
                                return true;
                        }
                        // Take a bite out of an equal-sized organism, but
                        // Only weaken them if they are healthy; otherwise eat them
                        if (size == org.size) {
                                if (org.health == SICK) {
                                        org.health=DEAD;
                                        std::cout << "Organism " << org.name << " just got eaten by " << name << ". Now " << name << " is DEAD :(\n";
                                        return true;
                                } else if (org.health == HEALTHY) {
                                        org.health=SICK;
                                        std::cout << "Organism " << org.name << " just got chomped by " << name << ". Now " << name << " is SICK :|\n";
                                        return true;
                                }
                        }
                }
		std::cout << "Organism " << org.name << " escaped the notice of " << name << " :)\n";
                return false;
	}

	bool willEat(Plant & org) {
		// Plants
		if (org.type == PLANT) {
			// Check to see if the Plant is poisonous to me
			if ((org.health != DEAD) && (org.poisonous) && (org.poisonousTo == color)) {
				if (health == SICK) {
					// If I was SICK the Plant made me DEAD
					health = HEALTHY;
					std::cout << "Organism " << org.name << " just got eaten by " << name << ", but because it was poisonous, " << name     << " is DEAD :(\n";
				} if (health == HEALTHY) {
					// If I was HEALTHY the Plant made me SICK
					health = SICK;
					std::cout << "Organism " << org.name << " just got eaten by " << name << ", but because it was poisonous, " << name     << " is SICK :|\n";

				}
			}
			if (org.health == HEALTHY) {
				// If the plant was HEALTHY, it is now SICK
				org.health = SICK;
			} if (org.health == SICK) {
				// If the Plant was SICK, it is now DEAD
				org.health = DEAD;
			}
			return true;
		}
                std::cout << "Organism " << org.name << " escaped the notice of " << name << " :)\n";
                return false;

        }
};

