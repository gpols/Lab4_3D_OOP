//
//  shapes.cpp
//  Lab4_3D_OOP
//
//  Created by Poliana Groth on 27/11/2023.
//

#include "shapes.hpp"

Shapes::Shapes() {
    // Constructor implementation
    
    box1.setPosition(xPos, yPos -20, zPos);
    box1.rotate(200, 1.0, 0.0, 0.0);

    box2.setPosition(xPos, yPos+140, zPos);
    box2.rotate(45, 0.0, 0.0, 1.0);
    
    cylinder1.setPosition(xPos, yPos + 50, zPos);
    cylinder1.set(200, 5);
    cylinder1.setResolution(100, 100);
    cylinder1.rotate(45, 1.0, 0.0, 0.0);
    

}

Shapes::~Shapes(){
    
}

void Shapes::setPosition(float x, float y, float z) {

}

void Shapes::update() {

    box1.rotateDeg(0.2, 0, 1, 1);
    box2.rotateDeg(-0.2, 0, 1, 1);
    cylinder1.rotateDeg(-0.2, 1, 1, 1);
 
}

void Shapes::draw() {
 
    box1.draw();
    box2.draw();
    cylinder1.draw();

}











