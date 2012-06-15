#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofEnableSmoothing();
    ofSetFrameRate(30);
    b1.x = 1000;
    b1.y = 100;
    b2.x = 50;
    b2.y = 700;
    p = 0;
    b3.color = ofColor(255,0,0);
}

//--------------------------------------------------------------
void testApp::update(){
    p+=0.1;
}

//--------------------------------------------------------------
void testApp::draw(){
    b1.draw();
    b2.draw();
    float a = sin(p) / 2 + 0.5;
    ofVec2f b1V = ofVec2f(b1.x, b1.y);
    ofVec2f b2V = ofVec2f(b2.x, b2.y);
    ofVec2f v = b1V + a * (b2V - b1V);
    cout << "vX: " << v.x << ", vY: " << v.y << endl;
    b3.x = v.x;
    b3.y = v.y;
    b3.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}