#pragma once
#include <string>


namespace Interop {
	namespace System {
		class Settings;

		class Builder
		{
		public:
			virtual const std::string & build (const Settings * settings) const = 0;
		};
	}
}