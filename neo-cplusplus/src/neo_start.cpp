#pragma once

#include <iostream>

#include "src/util/neo_logger.h"

int main() {
	std::cout << "Start up neo success." << std::endl;

	// 1. ���ñ�κ�����ӡ��־
	std::string str = "qwqw1212";
	neo::LogConsole({"1", "2", "asas", str.c_str()});

	return 0;
}