#include "InteropBuilder.h"
#include "Settings.h"
#include <string>

namespace Interop {
	namespace System {
		InteropBuilder::InteropBuilder(void)
		{
		}


		InteropBuilder::~InteropBuilder(void)
		{
		}
		
		const std::string & InteropBuilder::build(const Settings * settings) const 
		{
			return std::string("Hello World");
			//return settings->getName();
		}
	}
}