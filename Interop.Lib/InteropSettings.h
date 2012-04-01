#pragma once
#include "settings.h"

namespace Interop {
	namespace System {
		class InteropSettings :
			public Settings
		{
		private:
			std::string name;
		public:
			InteropSettings(void);
			~InteropSettings(void);

			virtual const std::string & getName() const;
			virtual const void setName(const std::string & value);
		};
	}
}

