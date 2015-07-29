struct PoisonSeaweed : Plant {
        PoisonSeaweed(std::string n, Centimeters s = 14.5, Color c = BLUE, bool p = false, Color poisonTo = RED){
		color = c;
		poisonous = p;
		poisonousTo = poisonTo;
		size = s; // Centimeters
	}
};

