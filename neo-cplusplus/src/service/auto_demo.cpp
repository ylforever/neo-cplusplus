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
	// ��ԭʼ��������
	for (std::list<std::vector<std::map<std::string, std::string>>>::iterator lstIter = lstVal.begin();
		lstIter != lstVal.end(); ++lstIter) {
		for (std::vector<std::map<std::string, std::string>>::iterator vecIter = lstIter->begin();
			vecIter != lstIter->end(); ++vecIter) {
			// ��map�в�������
		}
	}

	// ��typedef�������
	for (ListIterType lstIter = lstVal.begin(); lstIter != lstVal.end(); ++lstIter) {
		for (VectorIterType vecIter = lstIter->begin(); vecIter != lstIter->end(); ++vecIter) {
			// ��map�в�������
		}
	}


	// ��auto�ؼ���
	for (auto lstIter = lstVal.begin(); lstIter != lstVal.end(); ++lstIter) {
		for (auto vecIter = lstIter->begin(); vecIter != lstIter->end(); ++vecIter) {
			// ��map�в�������
		}
	}

	// ʹ�ú�������
	std::function<void(int, std::vector<int>)> f1 = [](int i, std::vector<int> vec) {vec.push_back(i); };

	// ʹ��auto�ؼ���
	auto f2 = [](int i, std::vector<int> vec) {vec.push_back(i); };

}
