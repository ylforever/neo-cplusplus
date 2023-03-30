#pragma once
#include <initializer_list>
#include <string>

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
		for (T param : logParams) {
			std::cout << param << " ";
		}

		std::cout << std::endl;
	}
}