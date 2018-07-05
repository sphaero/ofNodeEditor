#ifndef OFNODEEDITOR_H
#define OFNODEEDITOR_H

#include "ofMain.h"
#include "NodesEdit.h"

class ofNodeEditor : public ImGui::NodesEdit
{
public:
    ofNodeEditor();

    void ConnectionAdded(ImGui::NodesEdit::Connection* connection);
};

#endif // OFNODEEDITOR_H
