//
//  ball.cpp
//  VectorAnimation
//
//  Created by Harrison, Warren on 6/15/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "ball.h"

Ball::Ball(){
    color = ofColor(75, 75, 75);
    
}

void Ball::draw(){
    ofSetColor(color);
    ofCircle(x, y, 10);
}