#pragma once

#include "src/service/const_demo.h"

ConstDemo::ConstDemo() {
	data = 100;
}

int ConstDemo::GetData()const {
	return data;
}
