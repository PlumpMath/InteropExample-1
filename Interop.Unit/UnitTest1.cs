using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace Interop.Unit
{
    [TestClass]
    public class UnitTest1
    {
        [TestMethod]
        public void InteropBuilderBuildTest()
        {
            Interop.CLI.InteropBuilder builder;
            builder = new CLI.InteropBuilder();
            Interop.CLI.InteropSettings settings;
            settings = new CLI.InteropSettings();
            settings.Name = "123123";
            StringAssert.Equals(builder.build(settings), "123123");
        }

        [TestMethod]
        public void InteropSettingsTest()
        {
            Interop.CLI.InteropSettings settings;
            settings = new CLI.InteropSettings();
            settings.Name = "test";
            StringAssert.Equals(settings.Name, "test");
        }


    }
}
