#include "HomeWork.h"

namespace HomeworkCpp_13
{
	void HomeWork::Run(std::shared_ptr<LocatorsLib::MenuLocator> menuLocator,
					   std::shared_ptr<LocatorsLib::TasksLocator> taskLocator)
	{
		if (menuLocator == nullptr || taskLocator == nullptr)
		{
			throw "Error!!!";
		}

		system("cls");
		setlocale(LC_ALL, "Russian.utf8");

		bool exit = false;
		std::string text = "Выберите пункт меню:";

		while (!exit)
		{
			switch (menuLocator->MainMenu()->SelectedMenuItem(text))
			{
			case 0:
				taskLocator->GetTask1()->Run();
				break;
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				exit = true;
				break;
			}

			std::cin.get();
		}
	}
}
