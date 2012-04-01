#pragma once
#include <string>

namespace Interop {
	namespace System {
		class Settings
		{
		public:
			Settings(void)
			{
			}

			virtual const std::string & getName() const = 0;
		};
	}
}

