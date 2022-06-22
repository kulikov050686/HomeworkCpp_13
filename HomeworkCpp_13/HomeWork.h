#pragma once
#include <memory>
#include <iostream>
#include "../LocatorsLib/MenuLocator.h"
#include "../LocatorsLib/TasksLocator.h"

namespace HomeworkCpp_13
{
	/// <summary>
	/// Домашняя работа
	/// </summary>
	class HomeWork
	{
	public:

		/// <summary>
		/// Конструктор
		/// </summary>
		HomeWork() = default;

		/// <summary>
		/// Запуск
		/// </summary>
		void Run(std::shared_ptr<LocatorsLib::MenuLocator> menuLocator, 
			     std::shared_ptr<LocatorsLib::TasksLocator> taskLocator);

		/// <summary>
		/// Деструктор
		/// </summary>
		virtual ~HomeWork() = default;
	};
}
