//
// Created by dela on 06/07/23.
//

#ifndef LAB_PROGRAMMAZIONE_ADDACTIVITYDIALOG_H
#define LAB_PROGRAMMAZIONE_ADDACTIVITYDIALOG_H

#include <wx/wx.h>
#include <wx/calctrl.h>
#include <wx/spinctrl.h>
#include "MainFrame.h"

class AddActivityDialog : public wxDialog{
public:
    explicit AddActivityDialog(const wxString& title, MainFrame* mainFrame);
    void addActivity(wxCommandEvent &event);
    void closeDialog(wxCommandEvent &event);
private:
    MainFrame* parent;
    wxTextCtrl* titleIns;
    wxTextCtrl* description;
    wxSpinCtrl* startOra;
    wxSpinCtrl* startMinuti;
    wxSpinCtrl* endOra;
    wxSpinCtrl* endMinuti;

};


#endif //LAB_PROGRAMMAZIONE_ADDACTIVITYDIALOG_H
