#include "ControlPanel.h"

System::Void Project1::ControlPanel::butClose_Click(System::Object^ sender, System::EventArgs^ e)
{
    ParentForm->Close();
    return System::Void();
}
