struct Plant : Organism {
	Plant() {
		poisonous = false;
		poisonousTo = RED;
	}
	Plant(std::string n, bool p = false, Color p2 = RED) {
		name = n;
		poisonous = p;
		poisonousTo = p2;
		type = PLANT;
	}
};
