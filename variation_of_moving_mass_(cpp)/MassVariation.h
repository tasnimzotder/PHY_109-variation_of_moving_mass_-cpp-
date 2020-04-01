#pragma once
class MassVariation {
protected:
	float mass;
	float massInit;
	float velocity;
	float velocityLight;
public:
	MassVariation();

	void getData(float, float);
	float getMass();
};

