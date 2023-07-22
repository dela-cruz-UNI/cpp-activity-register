//
// Created by dela on 21/07/23.
//

#ifndef LAB_PROGRAMMAZIONE_ADDDAYDIALOG_H
#define LAB_PROGRAMMAZIONE_ADDDAYDIALOG_H

#include "Register.h"
#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/calctrl.h>
#include <map>

class AddDayDialog : public wxDialog{
public:
    explicit AddDayDialog(const wxString& title, MainFrame* mainFrame);
private:
    MainFrame* parent;
    wxCalendarCtrl* calendar;

};

#endif //LAB_PROGRAMMAZIONE_ADDDAYDIALOG_H
