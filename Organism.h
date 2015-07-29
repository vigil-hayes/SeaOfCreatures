// The original parent structure
struct Organism {
	Color color;
	std::string name;
	Centimeters size;
        Status health;
	
	Type type;
	
	// Only really applicable to plants
	bool poisonous;
        Color poisonousTo;
	
	//Constructor
	Organism() {
		// Organisms MUST be HEALTHY when created
		health = HEALTHY;
	}

	bool willEat(Organism & org);
	
};
