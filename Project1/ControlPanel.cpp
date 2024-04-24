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

	if (butVolMinus->Location.X >= 61) { butVolMinus->Location = Point(butVolMinus->Location.X - speed, Y); }

	if (butClose->Location.X >= 119) { butClose->Location = Point(butClose->Location.X - speed, Y); }

	if (butSet->Location.X <= 235) { butSet->Location = Point(butSet->Location.X + speed, Y); }

	if (butVolPlus->Location.X <= 293) { butVolPlus->Location = Point(butVolPlus->Location.X + speed, Y); }

	if (butImagePlus->Location.X <= 351) { butImagePlus->Location = Point(butImagePlus->Location.X + speed, Y); }

	// Проверяем, достигли ли все кнопки своих целевых позиций
	if (butImageMinus->Location.X < 3 &&
		butVolMinus->Location.X < 61 &&
		butClose->Location.X < 119 &&
		butSet->Location.X > 235 &&
		butVolPlus->Location.X > 293 &&
		butImagePlus->Location.X > 351)
	{
		// Если все кнопки на месте, останавливаем таймер
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

	if (butVolMinus->Location.X <= X) { butVolMinus->Location = Point(butVolMinus->Location.X + speed, Y); }

	if (butClose->Location.X <= X) { butClose->Location = Point(butClose->Location.X + speed, Y); }

	if (butSet->Location.X >= X) { butSet->Location = Point(butSet->Location.X - speed, Y); }

	if (butVolPlus->Location.X >= X) { butVolPlus->Location = Point(butVolPlus->Location.X - speed, Y); }

	if (butImagePlus->Location.X >= X) { butImagePlus->Location = Point(butImagePlus->Location.X - speed, Y); }

	// Проверяем, достигли ли все кнопки своих целевых позиций
	if (butImageMinus->Location.X >= X &&
		butVolMinus->Location.X >= X &&
		butClose->Location.X >= X &&
		butSet->Location.X <= X &&
		butVolPlus->Location.X <= X &&
		butImagePlus->Location.X <= X)
	{
		// Если все кнопки на месте, останавливаем таймер
		clickBut = false;
		down->Stop();
	}
    return System::Void();
}

System::Void Project1::ControlPanel::butMain_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	// Проверяем, запущен ли какой-либо из таймеров
	if (up->Enabled || down->Enabled)
	{
		// Если один из таймеров уже запущен, игнорируем нажатие кнопки
		return;
	}

	// Если ни один из таймеров не запущен, запускаем соответствующий таймер
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
