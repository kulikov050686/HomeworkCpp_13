#include "HomeWork.h"
#include "../LocatorsLib/MenuLocator.h"
#include "../LocatorsLib/TasksLocator.h"

/// <summary>
/// Точка входа приложения
/// </summary>
int main()
{
    HomeworkCpp_13::HomeWork* homework = new HomeworkCpp_13::HomeWork();
    homework->Run(std::make_shared<LocatorsLib::MenuLocator>(), std::make_shared<LocatorsLib::TasksLocator>());

    return 0;
}