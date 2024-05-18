#include "ControlPanel.h"

System::Void Project1::ControlPanel::butClose_Click(System::Object^ sender, System::EventArgs^ e)
{
    ParentForm->Close();
    return System::Void();
}

System::Void Project1::ControlPanel::up_Tick(System::Object^ sender, System::EventArgs^ e)
{
	int Y = 3;
	int speed = 5;

	if (butImageMinus->Location.X >= 3) { butImageMinus->Location = Point(butImageMinus->Location.X - speed, Y); }

	if (butStop->Location.X >= 61) { butStop->Location = Point(butStop->Location.X - speed, Y); }

	if (butClose->Location.X >= 119) { butClose->Location = Point(butClose->Location.X - speed, Y); }

	if (butSet->Location.X <= 235) { butSet->Location = Point(butSet->Location.X + speed, Y); }

	if (butPlay->Location.X <= 293) { butPlay->Location = Point(butPlay->Location.X + speed, Y); }

	if (butImagePlus->Location.X <= 351) { butImagePlus->Location = Point(butImagePlus->Location.X + speed, Y); }

	// ���������, �������� �� ��� ������ ����� ������� �������
	if (butImageMinus->Location.X < 3 &&
		butStop->Location.X < 61 &&
		butClose->Location.X < 119 &&
		butSet->Location.X > 235 &&
		butPlay->Location.X > 293 &&
		butImagePlus->Location.X > 351)
	{
		// ���� ��� ������ �� �����, ������������� ������
		clickBut = true;
		up->Stop();
	}
	return System::Void();
}

System::Void Project1::ControlPanel::down_Tick(System::Object^ sender, System::EventArgs^ e)
{
	int X = 177;
	int Y = 3;
	int speed = 5;

	if (butImageMinus->Location.X <= X) { butImageMinus->Location = Point(butImageMinus->Location.X + speed, Y); }

	if (butStop->Location.X <= X) { butStop->Location = Point(butStop->Location.X + speed, Y); }

	if (butClose->Location.X <= X) { butClose->Location = Point(butClose->Location.X + speed, Y); }

	if (butSet->Location.X >= X) { butSet->Location = Point(butSet->Location.X - speed, Y); }

	if (butPlay->Location.X >= X) { butPlay->Location = Point(butPlay->Location.X - speed, Y); }

	if (butImagePlus->Location.X >= X) { butImagePlus->Location = Point(butImagePlus->Location.X - speed, Y); }

	// ���������, �������� �� ��� ������ ����� ������� �������
	if (butImageMinus->Location.X >= X &&
		butStop->Location.X >= X &&
		butClose->Location.X >= X &&
		butSet->Location.X <= X &&
		butPlay->Location.X <= X &&
		butImagePlus->Location.X <= X)
	{
		// ���� ��� ������ �� �����, ������������� ������
		clickBut = false;
		down->Stop();
	}
    return System::Void();
}

System::Void Project1::ControlPanel::butMain_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	// ���������, ������� �� �����-���� �� ��������
	if (up->Enabled || down->Enabled)
	{
		// ���� ���� �� �������� ��� �������, ���������� ������� ������
		return;
	}

	// ���� �� ���� �� �������� �� �������, ��������� ��������������� ������
	if (clickBut)
	{
		down->Start();
	}
	else
	{
		clickBut = true;
		up->Start();
	}
    return System::Void();
}

