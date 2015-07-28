struct PickyDolphin : Creature {
        PickyDolphin(){
		food = CARNIVORE;
	}
        bool willEat(Organism & org) {
                // I only eat Creatures becaus I'm a CARNIVORE
                if (!strcmp(typeid(org).name(), "Creature")) {
                        // Can only eat something smaller than
                        // or equal to our size
                        // Also, I only eat BLUE food
                        // I'm no scavenger, so I don't eat dead food
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
};

