//
// Created by dela on 06/07/23.
//

#ifndef LAB_PROGRAMMAZIONE_MAINFRAME_H
#define LAB_PROGRAMMAZIONE_MAINFRAME_H

#include <wx/wx.h>
#include "Register.h"

class MainFrame : public wxFrame {
public:
    explicit MainFrame(const wxString& title);
    void setLabel(const wxString& text);
    void openAddDayDialog(wxCommandEvent &event);
    void openAddActivityDialog(wxCommandEvent &event);
    void addDay(const wxString &day);
private:

    void OnButtonClicked(wxCommandEvent& event);

    wxStaticText* label;
    Register reg;
    wxListBox* dayList;
};


#endif //LAB_PROGRAMMAZIONE_MAINFRAME_H
