#include "Particle.hpp"

Particle::Particle(float xIn,float yIn, ofColor cIn){
    PosX=xIn;
    PosY=yIn;
    location=ofVec2f(xIn,yIn);
    c=cIn;
    insr=1;
    //cout<<"init"<<endl;
    velocity=ofVec2f(0,0);
}

void Particle::update(){
    insr+=0.008;
    theta=ofNoise(PosX*0.0015,PosY*0.0010,insr)*TWO_PI;
    velocity=ofVec2f(cos(theta),sin(theta));
    location+=velocity;
    PosX+=cos(theta);
    PosY+=sin(theta);
    //cout<<PosX<<endl;
}

void Particle::warp(){
    if(location.x>ofGetWidth()){
        location.x=0;
    }
    else if(location.x<0){
        location.x=ofGetWidth();
    }
    
    if(location.y>ofGetHeight()){
        location.y=0;
    }
    else if(location.y<0){
        location.y=ofGetHeight();
    }
}
