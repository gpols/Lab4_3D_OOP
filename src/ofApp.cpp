#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    light.setPointLight();
    light.setDiffuseColor(ofFloatColor(1.0, 1.0, 1.0));
    light.setPosition(ofGetWidth()*.5, ofGetHeight()*.5, 300);
    ofEnableNormalizedTexCoords();
    ofSetBackgroundColor(0, 0, 0);

    // put shapes at the center
    shape.setPosition(0, 0, 0);
    sBox.setPosition(0, 0, 0);
    background.load("background.png");


}

//--------------------------------------------------------------
void ofApp::update(){
    
    shape.update();
 
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofEnableDepthTest();
    cam.begin();

    ofEnableLighting();
    light.enable();
 
    // Draw objects
    shape.draw();
    sBox.draw();

    // Render to the screen
    light.disable();
    ofDisableLighting();

    cam.end();
    ofDisableDepthTest();



}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
