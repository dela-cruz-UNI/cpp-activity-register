#include <iostream>
#include "Activity.h"
#include "Register.h"
#include "Time.h"

#include <wx/wx.h>
#include "MainFrame.h"

class App : public wxApp {
public:
    bool OnInit() override;

};

wxIMPLEMENT_APP(App);

bool App::OnInit() {
    MainFrame* frame = new MainFrame("Registro");
    frame->SetClientSize(800, 600);
    frame->Center();
    frame->Show(true);

    Time t1(29, 6, 2020, 12, 30);
    Time t2(29, 6, 2020, 13, 30);

    Activity a1("Pranzo", t1, t2);
    Activity a2("Cena", t1, t2);

    Register r;
    r.addActivity(a1);
    r.addActivity(a2);

    frame->setLabel(r.toString());

    return true;

}

/*
int main() {

    Time t1(29, 6, 2020, 12, 30);
    Time t2(29, 6, 2020, 13, 30);

    Activity a1("Pranzo", t1, t2);
    Activity a2("Cena", t1, t2);

    Register r;
    r.addActivity(a1);
    r.addActivity(a2);

    std::cout << r.toString();

}
*/