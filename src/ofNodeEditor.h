#ifndef OFNODEEDITOR_H
#define OFNODEEDITOR_H

#include "ofMain.h"
#include "NodesEdit.h"

class ofNodeEditor : public ImGui::NodeEditor
{
public:
    ofNodeEditor();

    void ConnectionAdded(ImGui::NodeEditor::Node* src, ImGui::NodeEditor::Node* tgt, ImGui::NodeEditor::Connection* connection);
    void ConnectionDeleted(ImGui::NodeEditor::Node* src, ImGui::NodeEditor::Node* tgt, ImGui::NodeEditor::Connection* connection);
};

#endif // OFNODEEDITOR_H
