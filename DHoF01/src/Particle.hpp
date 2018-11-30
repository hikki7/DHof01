#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"

class Particle{
    
public:
    Particle(float xIn,float yIn,ofColor cIn);
    void update();
    void warp();
    float theta,insr,PosX,PosY;
    ofColor c;
    ofVec2f location;
    ofVec2f velocity;
};

#endif /* Particle_hpp */
