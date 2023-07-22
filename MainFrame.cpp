//
// Created by dela on 06/07/23.
//

#include "MainFrame.h"
#include "Register.h"
#include "AddDayDialog.h"
#include "AddActivityDialog.h"

MainFrame::MainFrame(const wxString &title) : wxFrame(nullptr, wxID_ANY, title){
    wxPanel* panel = new wxPanel(this, wxID_ANY);
    //this->label = new wxStaticText(panel, wxID_ANY, "REGISTRO ATTIVITA'");
    dayList = new wxListBox(panel, wxID_ANY, wxPoint(10, 10), wxSize(-1, 600 - 20), 0, nullptr, wxLB_SORT);
    wxButton* addDayButton = new wxButton(panel, wxID_ANY, "new day", wxPoint(dayList->GetPosition().x + dayList->GetSize().x + 10, 10), wxSize(100, 30));
    wxButton* addActivityButton = new wxButton(panel, wxID_ANY, "Add activity", wxPoint(addDayButton->GetPosition().x + addDayButton->GetSize().x + 10, 10), wxSize(-1, 30));

    addDayButton->Bind(wxEVT_BUTTON, &MainFrame::openAddDayDialog,this);
    addActivityButton->Bind(wxEVT_BUTTON, &MainFrame::openAddActivityDialog, this);
};

void MainFrame::setLabel(const wxString &text){
    this->label->SetLabelText(text);
}
void MainFrame::openAddDayDialog(wxCommandEvent &event){
    AddDayDialog* dialogD = new AddDayDialog("New Day", this);
    dialogD->Show(true);
}
void MainFrame::openAddActivityDialog(wxCommandEvent &event) {
    AddActivityDialog* dialog = new AddActivityDialog("Add Activity", this);
    dialog->Show(true);
}

void MainFrame::addDay(const wxString &day){
    auto str = day.ToStdString();
    reg.addDay(str);
    dayList->Append(day);
}

