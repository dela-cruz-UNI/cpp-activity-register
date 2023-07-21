//
// Created by dela on 06/07/23.
//

#ifndef LAB_PROGRAMMAZIONE_DIALOGADDACTIVITY_H
#define LAB_PROGRAMMAZIONE_DIALOGADDACTIVITY_H

#include <wx/wx.h>
#include "MainFrame.h"

class DialogAddActivity : public wxDialog{
public:
    explicit DialogAddActivity(const wxString& title, MainFrame* parent);
private:
    MainFrame* parent;
};


#endif //LAB_PROGRAMMAZIONE_DIALOGADDACTIVITY_H
