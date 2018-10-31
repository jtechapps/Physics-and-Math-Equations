//
//  main.cpp
//  Physics and Math Equations
//
//  Created by Jacob M on 10/29/18.
//  Copyright © 2018 Jacob M. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;
void accelerationPulleySystem();
void vectorDotProduct();
int main(int argc, const char * argv[]) {
    cout << "Enter a the number of the solver you want?!\n";
    cout << "Find atwood machines acceleration with pulley with mass : 1\n";
    cout << "Vector dot product: 2\n";
    int choice =0;
    cin >> choice;
    if(choice == 1) {
        accelerationPulleySystem();
    } else if(choice == 2) {
        vectorDotProduct();
    }
    return 0;
}

void accelerationPulleySystem() {
    cout << "Picture here: https://session.masteringphysics.com/problemAsset/1266950/4/yg.10.71.jpg" << endl;
    double mass_a = 0.0;
    double mass_b = 0.0;
    double pulley_I = 0.0;
    double pulley_r = 0.0;
    double g = 9.8;
    
    //varaible we solve for
    double acceleration = 0.0;
    double angularAcceleration = 0.0;
    double tension_a = 0.0;
    double tension_b = 0.0;
    
    cout << "Enter Mass A (kg) ";
    cin >> mass_a;
    cout << "Enter Mass B (kg) ";
    cin >> mass_b;
    cout << "Enter Pulley Radius (m) ";
    cin >> pulley_r;
    cout << "Enter Pulley moment of inertia: ";
    cin >> pulley_I;
    
    
    //solve for acceleration angularAcceleration and tensions
    acceleration = (g*(mass_a-mass_b))/((pulley_I/(pulley_r*pulley_r))+(mass_a+mass_b));
    angularAcceleration = acceleration/pulley_r;
    tension_a = mass_a*g - mass_a*acceleration;
    tension_b = mass_b*g + mass_b*acceleration;
    
    cout << "Acceleration: " << acceleration << " m/s^2" << endl;
    cout << "Angular Acceleration: " << angularAcceleration << " rad/s" << endl;
    cout << "Tension on A: " << tension_a << " N" << endl;
    cout << "Tension on B: " << tension_b << " N" << endl;
}

void vectorDotProduct() {
    double va_x = 0.0;
    double va_y = 0.0;
    double va_z = 0.0;
    
    double vb_x = 0.0;
    double vb_y = 0.0;
    double vb_z = 0.0;
    cout << "Enter vector A x y z: ";
    cin >> va_x;
    cin >> va_y;
    cin >> va_z;
    
    cout << "Enter vector B x y z: ";
    cin >> vb_x;
    cin >> vb_y;
    cin >> vb_z;
    
    double dot_product = va_x*vb_x+va_y*vb_y+va_z*vb_z;
    cout << "A dot B = " << dot_product << endl;
    
}
