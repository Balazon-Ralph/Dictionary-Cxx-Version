#include<iostream>
#include<string>

using namespace std;

int main(){
	string search;
	cout<<"What word would you like us to define?";
	cin>>search;
	
	if (search == "Abacus"){
		cout<<"Made by the Chinese 4000 years ago; a manual calculator.";
		}	
	
	else if (search == "Pascaline"){
		cout<<"A calculator made by Pascal.";
	}
	
	else if (search == "RAM"){
		cout<<"Abbreviation for Random Access Memory";
	}
	
	else if (search == "Integral") {
        cout << "A mathematical function representing the area under a curve.";
    }
    else if (search == "Derivative") {
        cout << "The rate of change of a function with respect to a variable.";
    }
    else if (search == "Matrix") {
        cout << "A rectangular array of numbers arranged in rows and columns.";
    }
    else if (search == "Vector") {
        cout << "A quantity with both magnitude and direction.";
    }
    else if (search == "Limit") {
        cout << "The value that a function approaches as the input approaches some value.";
    }
    else if (search == "Torque") {
        cout << "A measure of the rotational force applied to an object.";
    }
    else if (search == "Stress") {
        cout << "The internal force per unit area within materials.";
    }
    else if (search == "Strain") {
        cout << "Deformation of a material in response to applied stress.";
    }
    else if (search == "Capacitance") {
        cout << "The ability of a system to store charge per unit voltage.";       	
    }
    else if (search == "Inductance") {
        cout << "The property of a conductor by which a change in current generates an electromotive force.";
    }
    else if (search == "Force") {
        cout << "An interaction that changes the motion of an object, measured in Newtons.";
    }
    else if (search == "Power") {
        cout << "The rate at which work is done or energy is transferred.";
    }
    else if (search == "Energy") {
        cout << "The capacity to do work, existing in various forms such as kinetic and potential.";
    }
    else if (search == "Work") {
        cout << "The product of force and displacement in the direction of the force.";
    }
    else if (search == "Frequency") {
        cout << "The number of occurrences of a repeating event per unit of time, measured in Hertz.";
    }
    else if (search == "Voltage") {
        cout << "The electrical potential difference between two points in a circuit.";
    }
    else if (search == "Current") {
        cout << "The flow of electric charge, measured in Amperes.";
    }
    else if (search == "Resistance") {
        cout << "The opposition to the flow of electric current, measured in Ohms.";
    }
    else if (search == "Momentum") {
        cout << "The product of an object's mass and velocity, representing its motion.";
    }
    else if (search == "Acceleration") {
        cout << "The rate of change of velocity with respect to time.";
    }
    else{
    	cout<<"Term/word not found please try again.";
    }
    return 0;
}