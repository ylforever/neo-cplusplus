#pragma once

#include "src/service/auto_demo.h"
#include <functional>

typedef std::list<std::vector<std::map<std::string, std::string>>>::iterator ListIterType;
typedef std::vector<std::map<std::string, std::string>>::iterator VectorIterType;

AutoDemo::AutoDemo() {

}

AutoDemo::~AutoDemo() {

}

void AutoDemo::testAuto(std::list<std::vector<std::map<std::string, std::string>>> lstVal) {
	// 用原始类型名称
	for (std::list<std::vector<std::map<std::string, std::string>>>::iterator lstIter = lstVal.begin();
		lstIter != lstVal.end(); ++lstIter) {
		for (std::vector<std::map<std::string, std::string>>::iterator vecIter = lstIter->begin();
			vecIter != lstIter->end(); ++vecIter) {
			// 从map中查找数据
		}
	}

	// 用typedef定义别名
	for (ListIterType lstIter = lstVal.begin(); lstIter != lstVal.end(); ++lstIter) {
		for (VectorIterType vecIter = lstIter->begin(); vecIter != lstIter->end(); ++vecIter) {
			// 从map中查找数据
		}
	}


	// 用auto关键字
	for (auto lstIter = lstVal.begin(); lstIter != lstVal.end(); ++lstIter) {
		for (auto vecIter = lstIter->begin(); vecIter != lstIter->end(); ++vecIter) {
			// 从map中查找数据
		}
	}

	// 使用函数对象
	std::function<void(int, std::vector<int>)> f1 = [](int i, std::vector<int> vec) {vec.push_back(i); };

	// 使用auto关键字
	auto f2 = [](int i, std::vector<int> vec) {vec.push_back(i); };

}
