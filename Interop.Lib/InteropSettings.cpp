#include "InteropSettings.h"


namespace Interop {
	namespace System {
		InteropSettings::InteropSettings(void) : name(std::string("test"))
		{
		}

		InteropSettings::~InteropSettings(void)
		{
		}

		const std::string & InteropSettings::getName() const 
		{
			return this->name;
		}

		const void InteropSettings::setName(const std::string & value) 
		{
			this->name = value;
		}
	}
}
