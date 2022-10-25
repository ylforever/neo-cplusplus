#pragma once
#include <initializer_list>

namespace neo {
	/*****************************************************************************
	* Function: LogConsole
	* Description: ��ӡ��־������̨
	* 
	* Input: logParams-��־�����б�
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