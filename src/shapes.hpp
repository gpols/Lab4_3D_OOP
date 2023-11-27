//
//  shapes.hpp
//  Lab4_3D_OOP
//
//  Created by Poliana Groth on 27/11/2023.
//

#ifndef shapes_hpp
#define shapes_hpp

#include <stdio.h>
#include "ofMain.h"

class Shapes
{
public:
    Shapes();
    ~Shapes();
    // class function members

    /** tell the table to update itself
     * Note - classes don't need an update function
     * but we have one here to follow the update-draw
     * 'programming pattern' in openframeworks
    */
    void update();
    /** tell the table to draw itself */
    void draw();
    void setPosition(float x, float y, float z);
    // end of class function members
private:
// data members
    float xPos;
    float yPos;
    float zPos;
    ofBoxPrimitive  box1;
    ofBoxPrimitive  box2;
    ofCylinderPrimitive cylinder1; 
};

#endif /* shapes_hpp */

