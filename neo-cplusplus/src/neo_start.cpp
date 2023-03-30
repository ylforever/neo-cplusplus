#pragma once

#include <iostream>
#include <list>

#include "src/util/neo_logger.h"
#include "src/service/const_demo.h"

int main() {
	std::cout << "Start up neo success." << std::endl;

	// 1. ���ñ�κ�����ӡ��־
	std::string str = "qwqw1212";
	neo::LogConsole({"1", "2", "asas", str.c_str()});

	// 2.����const
	ConstDemo const1;
	neo::LogConsole({ const1.GetData() });

	const ConstDemo const2;
	neo::LogConsole({ const2.GetData() });

	// ����auto��������
	std::list<int> lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);

	for (auto iter = lst.begin(); iter != lst.end(); ++iter) {
		std::cout << std::endl;
		std::cout << *iter;
	}

	return 0;
}