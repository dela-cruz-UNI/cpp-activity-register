//
// Created by dela on 06/07/23.
//

#include "DialogAddActivity.h"
#include "MainFrame.h"

#include <wx/wx.h>
#include <wx/calctrl.h>
#include <wx/spinctrl.h>

DialogAddActivity::DialogAddActivity(const wxString &title, MainFrame* p) : wxDialog(nullptr, wxID_ANY, title), parent(p) {

    //formato HH/MM (24h)
    int inizioOra = 0;
    int fineOra = 23;
    int inizioMinuti = 0;
    int fineMinuti = 59;


    auto *panel = new wxPanel(this, wxID_ANY);

    //add description
    wxStaticText* descriptionLabel = new wxStaticText(panel, wxID_ANY, "Description:", wxPoint(10, 10));
    wxTextCtrl* description = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(10, 30), wxSize(200, 30));

    //add start time
    wxStaticText* startTimeLabel = new wxStaticText(panel, wxID_ANY, "Start Time:", wxPoint(10, 70));
    wxSpinCtrl* startOra = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(10, 30 + startTimeLabel->GetPosition().y), wxSize(50, 30), wxSP_ARROW_KEYS, inizioOra, fineOra, inizioOra);
    wxSpinCtrl* startMinuti = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(10, 40 + startOra->GetPosition().y), wxSize(50, 30), wxSP_ARROW_KEYS, inizioMinuti, fineOra, inizioMinuti);
    //wxCalendarCtrl* calendar = new wxCalendarCtrl(panel, wxID_ANY, wxDateTime::Now(), wxPoint(10, 50 + startMinuti->GetPosition().y), wxSize(200, 200));

    //add end time

    wxStaticText* endTimeLabel = new wxStaticText(panel, wxID_ANY, "End Time:", wxPoint(10, 110));
    wxSpinCtrl* endOra = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(10 + endTimeLabel->GetPosition().y, 110), wxSize(50, 30), wxSP_ARROW_KEYS, inizioOra, fineOra, fineOra);
    wxSpinCtrl* endMinuti = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(10 + endOra->GetPosition().y, 110), wxSize(50, 30), wxSP_ARROW_KEYS, inizioMinuti, fineMinuti, fineMinuti);

}