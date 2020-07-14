// Guids.cs
// MUST match guids.h
using System;

namespace Company.VSPackage
{
    static class GuidList
    {
        public const string guidVSPackagePkgString = "45a973d7-7f9f-4f53-8c13-ec38d936e94d";
        public const string guidVSPackageCmdSetString = "5940d23e-edc8-49f6-85da-bbbe7650c40a";

        public static readonly Guid guidVSPackageCmdSet = new Guid(guidVSPackageCmdSetString);
    };
}