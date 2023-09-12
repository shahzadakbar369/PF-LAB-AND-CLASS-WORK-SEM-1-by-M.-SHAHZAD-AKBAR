#include<iostream>
using namespace std;

inline double kineticEnergy(float , float);

int main(){
	float mass, v;
	cout << "Enter values for mass(kilogram) : ";
	cin >> mass;
	cout << "Velocity of mass(meter per seconds) : ";
	cin >> v;
	
	cout << "\n-----Result----\n";
	cout << "kinetic energy : " << kineticEnergy(mass, v) << " m " << endl;
	
	return 0;
}

inline double kineticEnergy(float mass, float v){
	return (0.5*mass*v*v);
}

