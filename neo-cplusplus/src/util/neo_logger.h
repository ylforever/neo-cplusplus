#pragma once
#include <initializer_list>
#include <string>

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
		for (T param : logParams) {
			std::cout << param << " ";
		}

		std::cout << std::endl;
	}
}