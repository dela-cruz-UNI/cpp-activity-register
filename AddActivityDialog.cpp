//
// Created by dela on 06/07/23.
//

#include "AddActivityDialog.h"
#include "MainFrame.h"

#include <wx/wx.h>
#include <wx/calctrl.h>
#include <wx/spinctrl.h>

AddActivityDialog::AddActivityDialog(const wxString &title, MainFrame* mainFrame) : wxDialog(nullptr, wxID_ANY, title), parent(mainFrame) {

    //formato HH/MM (24h)
    int inizioOra = 0;
    int fineOra = 23;
    int inizioMinuti = 0;
    int fineMinuti = 59;

    auto *panel = new wxPanel(this, wxID_ANY);
    //add titleIns
    wxStaticText* titleLabel = new wxStaticText(panel, wxID_ANY, "Title", wxPoint(10, 10));
    this->titleIns = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(titleLabel->GetPosition().x, 30), wxSize(200, 30));
    //add description
    wxStaticText* descriptionLabel = new wxStaticText(panel, wxID_ANY, "Description:", wxPoint(titleLabel->GetPosition().x, 40 + titleIns->GetPosition().y));
    this->description = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(titleLabel->GetPosition().x, 20 + descriptionLabel->GetPosition().y), wxSize(200, 30));
    //add start time
    wxStaticText* startTimeLabel = new wxStaticText(panel, wxID_ANY, "Start Time: (HH/MM)", wxPoint(titleLabel->GetPosition().x, 40 + description->GetPosition().y));
    this->startOra = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(startTimeLabel->GetPosition().x, 30 + startTimeLabel->GetPosition().y), wxSize(50, 30), wxSP_ARROW_KEYS, inizioOra, fineOra, inizioOra);
    this->startMinuti = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(startTimeLabel->GetPosition().x + 70, startOra->GetPosition().y), wxSize(50, 30), wxSP_ARROW_KEYS, inizioMinuti, fineOra, inizioMinuti);
    //add end time
    wxStaticText* endTimeLabel = new wxStaticText(panel, wxID_ANY, "End Time: (HH/MM)", wxPoint(titleLabel->GetPosition().x, startTimeLabel->GetPosition().y + 70));
    this->endOra = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(endTimeLabel->GetPosition().x, 30 + endTimeLabel->GetPosition().y), wxSize(50, 30), wxSP_ARROW_KEYS, inizioOra, fineOra, inizioOra);
    this->endMinuti = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(endTimeLabel->GetPosition().x + 70, endOra->GetPosition().y), wxSize(50, 30), wxSP_ARROW_KEYS, inizioMinuti, fineMinuti, inizioMinuti);
    //Button
    wxButton* addButton = new wxButton(panel, wxID_ANY, "+", wxPoint(endMinuti->GetPosition().x, 30 + endTimeLabel->GetPosition().y + 70), wxSize(100, 30));
    wxButton* cancelButton = new wxButton(panel, wxID_ANY, "Cancel", wxPoint(addButton->GetPosition().x + addButton->GetSize().x + 10, addButton->GetPosition().y), wxSize(100, 30));
    addButton->Bind(wxEVT_BUTTON, &AddActivityDialog::addActivity, this);
    cancelButton->Bind(wxEVT_BUTTON, &AddActivityDialog::closeDialog, this);
}

void AddActivityDialog::addActivity(wxCommandEvent &event) {
    //data
    std::string actTitle = this->titleIns->GetValue().ToStdString();
    std::string actDescription = this->description->GetValue().ToStdString();
    //time
    int actStartOra = this->startOra->GetValue();
    int actStartMinuti = this->startMinuti->GetValue();
    int actEndOra = this->endOra->GetValue();
    int actEndMinuti = this->endMinuti->GetValue();

}

void AddActivityDialog::closeDialog(wxCommandEvent &event) {
    Close();
}
