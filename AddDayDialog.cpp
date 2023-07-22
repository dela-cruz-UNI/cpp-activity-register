//
// Created by dela on 21/07/23.
//

#include "AddDayDialog.h"
#include <wx/wx.h>
#include <wx/calctrl.h>


AddDayDialog::AddDayDialog(const wxString &title, MainFrame *mainFrame): wxDialog(nullptr, wxID_ANY, title), parent(mainFrame){
    auto *panel = new wxPanel(this, wxID_ANY);
    wxStaticText* text = new wxStaticText(panel, wxID_ANY, "Select a day:", wxPoint(10, 10));
    //this->calendar = new wxCalendarCtrl(panel, wxID_ANY, wxDateTime::Now(), wxPoint(10, 10 + text->GetSize().y + 10), wxSize(-1, -1));
}
