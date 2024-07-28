#pragma once
#include <string>

class Hello {
	public:
		Hello(){}
		virtual ~Hello(){}

		bool IsDigit(const std::string& value) {
			try {
				std::stoi(value);
				return true;
			}
			catch(...) {
				return false;
			}
		}

};