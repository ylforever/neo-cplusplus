#pragma once
#include <initializer_list>

namespace neo {
	/*****************************************************************************
	* Function: LogConsole
	* Description: 打印日志到控制台
	* 
	* Input: logParams-日志参数列表
	* author: neo
	******************************************************************************/
	template <class T>
	void LogConsole(std::initializer_list<T> logParams) 
	{
		std::string logInfo;
		for (T param : logParams) {
			logInfo.append(param).append(" ");
		}
		std::cout << logInfo << std::endl;
	}
}