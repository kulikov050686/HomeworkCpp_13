#pragma once
#include <memory>
#include "../InterfacesLib/ITask.h"
#include "../TasksLib/Task1.h"

namespace LocatorsLib
{
	/// <summary>
	/// Локатор задач
	/// </summary>
	class TasksLocator
	{
	public:

		/// <summary>
		/// Конструктор
		/// </summary>
		TasksLocator() = default;

		/// <summary>
		/// Задача 1
		/// </summary>
		std::shared_ptr<InterfacesLib::ITask> GetTask1()
		{
			return std::make_shared<TasksLib::Task1>();
		}

		/// <summary>
		/// Деструктор
		/// </summary>
		virtual ~TasksLocator() = default;

		/// <summary>
		/// Запрет присваивания
		/// </summary>		
		TasksLocator& operator = (const TasksLocator&) = delete;

		/// <summary>
		/// Запрет копирования
		/// </summary>		
		TasksLocator(const TasksLocator&) = delete;
	};
}
