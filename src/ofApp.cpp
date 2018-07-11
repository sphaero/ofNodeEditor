#include "ofApp.h"
#include "NodesEdit.h"
#include "ofNodeEditor.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetLogLevel(OF_LOG_VERBOSE);

    //required call
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.MouseDrawCursor = false;
    io.Fonts->AddFontDefault();
    io.Fonts->AddFontFromFileTTF("/home/arnaud/src/imgui/misc/fonts/Roboto-Medium.ttf", 16.0f);
    gui.setup();
    gui.begin();
    nodes.CreateNodeFromType(ImVec2(400,140), ImGui::nodes_types2[0]);
    gui.end();
}

//--------------------------------------------------------------
void ofApp::update(){
}

void ofApp::doGui() {

    gui.begin();
    // Create a main menu bar
    float mainmenu_height = 0;
    if (ImGui::BeginMainMenuBar())
    {
        if (ImGui::BeginMenu("File"))
        {
            if (ImGui::MenuItem("Open ...", "Ctrl+O")) {  }
            if (ImGui::MenuItem("Save ...", "Ctrl+S"))   { }
            if (ImGui::MenuItem("Exit", "Ctrl+W"))  { ofExit(0); }
            ImGui::EndMenu();
        }
        mainmenu_height = ImGui::GetWindowSize().y;
        ImGui::EndMainMenuBar();
    }
    ImGui::SetNextWindowPos(ImVec2( 0, mainmenu_height ));
    ImGui::SetNextWindowSize(ImVec2( ofGetWidth()-351, ofGetHeight()-mainmenu_height));
    ImGui::Begin("clientspanel", NULL,  ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_HorizontalScrollbar | ImGuiWindowFlags_NoBringToFrontOnFocus);
    nodes.ProcessNodes();
    ImGui::End();
    gui.end();
}

//--------------------------------------------------------------
void ofApp::draw(){
    doGui();
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
