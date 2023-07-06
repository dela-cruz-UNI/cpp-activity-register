//
// Created by dela on 06/07/23.
//

#ifndef LAB_PROGRAMMAZIONE_DIALOG_H
#define LAB_PROGRAMMAZIONE_DIALOG_H

#include <wx/wx.h>
#include "MainFrame.h"

class Dialog : public wxDialog{
public:
    explicit Dialog(const wxString& title, MainFrame* parent);
private:
    MainFrame* parent;
};


#endif //LAB_PROGRAMMAZIONE_DIALOG_H
