//
// Created by dela on 06/07/23.
//

#include "Dialog.h"
#include "MainFrame.h"

#include <wx/wx.h>
#include <wx/calctrl.h>

Dialog::Dialog(const wxString &title, MainFrame* p) : wxDialog(nullptr, wxID_ANY, title), parent(p) {

    auto *panel = new wxPanel(this, wxID_ANY);

    //add description
    wxStaticText* descriptionLabel = new wxStaticText(panel, wxID_ANY, "Description:", wxPoint(10, 10));
    wxTextCtrl* description = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(10, 30), wxSize(200, 30));
    //add start time
    wxCalendarCtrl* startTime = new wxCalendarCtrl(panel, wxID_ANY, wxDateTime::Now(), wxPoint(10, 10 + descriptionLabel->GetSize().GetHeight() + 10));
    //add end time
    wxCalendarCtrl* endTime = new wxCalendarCtrl(panel, wxID_ANY, wxDateTime::Now(), wxPoint(10, 110));

}