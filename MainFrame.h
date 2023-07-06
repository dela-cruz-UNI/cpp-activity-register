//
// Created by dela on 06/07/23.
//

#ifndef LAB_PROGRAMMAZIONE_MAINFRAME_H
#define LAB_PROGRAMMAZIONE_MAINFRAME_H

#include <wx/wx.h>

class MainFrame : public wxFrame {
public:
    explicit MainFrame(const wxString& title);
    void setLabel(const wxString& text);
private:

    void OnButtonClicked(wxCommandEvent& event);

    wxStaticText* label;
};


#endif //LAB_PROGRAMMAZIONE_MAINFRAME_H
