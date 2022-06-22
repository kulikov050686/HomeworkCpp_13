#pragma once
#include "../InterfacesLib/ITask.h"
#include <vector>
#include <iostream>
#include "../RandomLib/Random.h"
#include "../ConvertLib/Convert.h"

namespace TasksLib
{
	/// <summary>
	/// Задача 1
	/// </summary>
	class Task1 : public InterfacesLib::ITask
	{
	public:

		/// <summary>
		/// Конструктор
		/// </summary>
		Task1() = default;

		/// <summary>
		/// Запуск
		/// </summary>
		void Run() override;

		/// <summary>
		/// Деструктор
		/// </summary>
		virtual ~Task1() = default;
	};
}
