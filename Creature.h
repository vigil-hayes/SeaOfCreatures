// The Creature structure that inherits from Organism
struct Creature : Organism {
        Color color;
        Food food;
        Centimeters size;
	int turnsToStarving;
	// Constructor for Creature
	Creature() {
		// According to the Rules For Life
		// I start with 10 turns without eating
		// BEFORE my health declines
		turnsToStarving = 10;
		poisonous = false;
		poisonousTo = RED;
		type = CREATURE;
	}
};
