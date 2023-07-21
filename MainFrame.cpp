//
// Created by dela on 06/07/23.
//

#include "MainFrame.h"
#include "DialogAddActivity.h"

MainFrame::MainFrame(const wxString &title) : wxFrame(nullptr, wxID_ANY, title){
    wxPanel* panel = new wxPanel(this, wxID_ANY);

    this->label = new wxStaticText(panel, wxID_ANY, "REGISTRO ATTIVITA'");

    wxButton* butt = new wxButton(panel, wxID_ANY, "Add Activity");
    butt->SetPosition(wxPoint(670, 10));
    butt->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
};

void MainFrame::setLabel(const wxString &text) {
    this->label->SetLabelText(text);
}

void MainFrame::OnButtonClicked(wxCommandEvent &event) {
    DialogAddActivity* dialog = new DialogAddActivity("Add Activity", this);
    dialog->Show(true);
}
