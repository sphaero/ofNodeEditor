#include "ofNodeEditor.h"

ofNodeEditor::ofNodeEditor()
{

}

void ofNodeEditor::ConnectionAdded(ImGui::NodeEditor::Node* src, ImGui::NodeEditor::Node* tgt, ImGui::NodeEditor::Connection* connection)
{

    ofLogVerbose() << "New Connection: source=" << src->name_ << ":" << connection->name_ << " to " << tgt->name_;
}

void ofNodeEditor::ConnectionDeleted(ImGui::NodeEditor::Node* src, ImGui::NodeEditor::Node* tgt, ImGui::NodeEditor::Connection* connection)
{

    ofLogVerbose() << "Delete Connection: source=" << src->name_ << ":" << connection->input_->name_ << " to " << connection->target_->name_ << ":" << connection->name_;
}
