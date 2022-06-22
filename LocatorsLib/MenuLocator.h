#pragma once
#include <memory>
#include <iostream>
#include <vector>
#include "../MenuLib/MenuController.h"

namespace LocatorsLib
{
	/// <summary>
	/// Класс локатора меню
	/// </summary>
	class MenuLocator
	{
	public:

		/// <summary>
		/// Конструктор
		/// </summary>
		MenuLocator() = default;

		/// <summary>
		/// Главное меню
		/// </summary>		
		std::shared_ptr<MenuLib::IMenuController> MainMenu()
		{
			system("cls");
			setlocale(LC_ALL, "Russian.utf8");

			std::vector<std::string> item = { "Task 1",
											  "Task 2",
											  "Task 3",
											  "Task 4",
											  "Exit" };

			return std::make_shared<MenuLib::MenuController>(std::make_shared<MenuLib::Menu>(item), [](std::string text)
				{
					std::cout << text << std::endl;
				});
		}

		/// <summary>
		/// Деструктор
		/// </summary>
		virtual ~MenuLocator() = default;

		/// <summary>
		/// Запрет присваивания
		/// </summary>		
		MenuLocator& operator = (const MenuLocator&) = delete;

		/// <summary>
		/// Запрет копирования
		/// </summary>		
		MenuLocator(const MenuLocator&) = delete;
	};
}
