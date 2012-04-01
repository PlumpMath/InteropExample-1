#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Interop.Lib/InteropBuilder.h"
#include "../Interop.Lib/InteropSettings.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Interop::System;

namespace InteropLibUnit
{		
	TEST_CLASS(InteropBuilderTest)
	{
	public:
		
		TEST_METHOD(InteropBuilderBuild)
		{
			// TODO: Your test code here
			InteropBuilder* builder;
			InteropSettings* settings;
			settings = new InteropSettings();
			settings->setName("12312");
			builder = new InteropBuilder();
			Assert::AreEqual(builder->build(settings), std::string("12312"));
		}

		TEST_METHOD(InteropSettingsTest) {
			InteropSettings* settings;
			settings = new InteropSettings();
			settings->setName("test");
			Assert::AreEqual(settings->getName(), std::string("test"));
		}

	};
}