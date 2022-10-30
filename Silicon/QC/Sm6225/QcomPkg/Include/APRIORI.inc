APRIORI DXE {
   # First, install the PCD driver and call DxeInit
    INF MdeModulePkg/Core/Dxe/DxeMain.inf
    INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf


    INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
    INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
    
    INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
    
    INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

    INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

    INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
    INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf

    INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

    INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf

    INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
    
    INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
    INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
    INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf

    INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
    INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf

    INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
    INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf


  FILE DRIVER = cccb0c28-4b24-11d5-9a5a-0090273fc14d  {
    SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-cccb0c28-4b24-11d5-9a5a-0090273fc14d/section0.pe
    SECTION UI = "GraphicsConsoleDxe"

  }

INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

        FILE DRIVER = ed15ffd5-bc96-4107-9118-95366600188e  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-ed15ffd5-bc96-4107-9118-95366600188e/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-ed15ffd5-bc96-4107-9118-95366600188e/section1.pe
          SECTION UI = "FontDxe"

        }       
        FILE DRIVER = 040e1e61-0afb-411b-9ec9-00f3fc59cc13  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-040e1e61-0afb-411b-9ec9-00f3fc59cc13/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-040e1e61-0afb-411b-9ec9-00f3fc59cc13/section1.pe
          SECTION UI = "QcomWDogDxe"

        }

INF MdeModulePkg/Universal/Acpi/BootGraphicsResourceTableDxe/BootGraphicsResourceTableDxe.inf

        FILE DRIVER = 53d39438-814a-4d9c-87c1-07e8c713f4c4  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-53d39438-814a-4d9c-87c1-07e8c713f4c4/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-53d39438-814a-4d9c-87c1-07e8c713f4c4/section1.pe
          SECTION UI = "QcomMpmTimerDxe"

        }       
  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

        FILE DRIVER = 10e193df-9966-44e7-b17c-59dd831e20fc  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-10e193df-9966-44e7-b17c-59dd831e20fc/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-10e193df-9966-44e7-b17c-59dd831e20fc/section1.pe
          SECTION UI = "ChipInfo"

        }       
        FILE DRIVER = 7942a7eb-b7d5-4e2e-b908-831e4de55b58  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-7942a7eb-b7d5-4e2e-b908-831e4de55b58/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-7942a7eb-b7d5-4e2e-b908-831e4de55b58/section1.pe
          SECTION UI = "GlinkDxe"

        }       
        FILE DRIVER = f541d663-4a48-40aa-aabf-ff158ccae34c  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-f541d663-4a48-40aa-aabf-ff158ccae34c/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-f541d663-4a48-40aa-aabf-ff158ccae34c/section1.pe
          SECTION UI = "SmemDxe"

        }       
        FILE DRIVER = e43128a8-8692-42b6-8afa-676158578d18  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-e43128a8-8692-42b6-8afa-676158578d18/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-e43128a8-8692-42b6-8afa-676158578d18/section1.pe
          SECTION UI = "ULogDxe"

        }       
        FILE DRIVER = cb29f4d1-7f37-4692-a416-93e82e219711  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-cb29f4d1-7f37-4692-a416-93e82e219711/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-cb29f4d1-7f37-4692-a416-93e82e219711/section1.pe
          SECTION UI = "NpaDxe"

        }       
        FILE DRIVER = 6b38f7b4-ad98-40e9-9093-aca2b5a253c4  {
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-6b38f7b4-ad98-40e9-9093-aca2b5a253c4/section0.pe
          SECTION UI = "DiskIoDxe"

        }

INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
INF FatPkg/EnhancedFatDxe/Fat.inf
INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf


        FILE DRIVER = 8e9bd160-b184-11df-94e2-0800200c9a66  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-8e9bd160-b184-11df-94e2-0800200c9a66/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-8e9bd160-b184-11df-94e2-0800200c9a66/section1.pe
          SECTION UI = "DALSys"

        }       
        FILE DRIVER = 4db5dea6-5302-4d1a-8a82-677a683b0d29  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-4db5dea6-5302-4d1a-8a82-677a683b0d29/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-4db5dea6-5302-4d1a-8a82-677a683b0d29/section1.pe
          SECTION UI = "ClockDxe"

        }       
        FILE DRIVER = 9a00771f-36d4-4dd5-8916-c48ed9b16b86  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-9a00771f-36d4-4dd5-8916-c48ed9b16b86/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-9a00771f-36d4-4dd5-8916-c48ed9b16b86/section1.pe
          SECTION UI = "HALIOMMU"

        }       
        FILE DRIVER = af9763a2-033b-4109-8e17-56a98d380c92  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-af9763a2-033b-4109-8e17-56a98d380c92/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-af9763a2-033b-4109-8e17-56a98d380c92/section1.pe
          SECTION UI = "HWIODxeDriver"

        }       
        FILE DRIVER = 569ea0de-b557-4043-84cf-01103fe516e5  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-569ea0de-b557-4043-84cf-01103fe516e5/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-569ea0de-b557-4043-84cf-01103fe516e5/section1.pe
          SECTION UI = "GpiDxe"

        }       
        FILE DRIVER = 04de8591-d2b3-4077-bbbe-b12070094eb6  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-04de8591-d2b3-4077-bbbe-b12070094eb6/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-04de8591-d2b3-4077-bbbe-b12070094eb6/section1.pe
          SECTION UI = "I2C"

        }       
        FILE DRIVER = 2a7b4bef-80cd-49e1-b473-374ba4d673fc  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-2a7b4bef-80cd-49e1-b473-374ba4d673fc/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-2a7b4bef-80cd-49e1-b473-374ba4d673fc/section1.pe
          SECTION UI = "SPMI"

        }       
        FILE DRIVER = f10f76db-42c1-533f-34a8-69be24653110  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-f10f76db-42c1-533f-34a8-69be24653110/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-f10f76db-42c1-533f-34a8-69be24653110/section1.pe
          SECTION UI = "SdccDxe"

        }       
        FILE DRIVER = 0d35cd8e-97ea-4f9a-96af-0f0d89f76567  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-0d35cd8e-97ea-4f9a-96af-0f0d89f76567/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-0d35cd8e-97ea-4f9a-96af-0f0d89f76567/section1.pe
          SECTION UI = "UFSDxe"

        }       
        FILE DRIVER = 8681cc5a-0df6-441e-b4b8-e915c538f067  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-8681cc5a-0df6-441e-b4b8-e915c538f067/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-8681cc5a-0df6-441e-b4b8-e915c538f067/section1.pe
          SECTION UI = "DALTLMM"

        }         
    INF SurfaceDuoFamilyPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf 
        FILE DRIVER = b105211b-bbbd-4add-a3b0-d1cf4a52154c  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-b105211b-bbbd-4add-a3b0-d1cf4a52154c/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-b105211b-bbbd-4add-a3b0-d1cf4a52154c/section1.pe
          SECTION UI = "PlatformInfoDxeDriver"

        }       

        FILE DRIVER = 5bd181db-0487-4f1a-ae73-820e165611b3  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-5bd181db-0487-4f1a-ae73-820e165611b3/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-5bd181db-0487-4f1a-ae73-820e165611b3/section1.pe
          SECTION UI = "ButtonsDxe"

        }


        FILE DRIVER = 5776232e-082d-4b75-9a0e-fe1d13f7a5d9  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-5776232e-082d-4b75-9a0e-fe1d13f7a5d9/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-5776232e-082d-4b75-9a0e-fe1d13f7a5d9/section1.pe
          SECTION UI = "PmicDxe"

        }       
        FILE DRIVER = 2e3042f3-2bb9-463f-8866-56d75b7c4ab0  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-2e3042f3-2bb9-463f-8866-56d75b7c4ab0/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-2e3042f3-2bb9-463f-8866-56d75b7c4ab0/section1.pe
          SECTION UI = "ChargerExDxe"

        }       
         FILE DRIVER = 4bce7f36-428e-4393-99e3-7e0844404dba  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-4bce7f36-428e-4393-99e3-7e0844404dba/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-4bce7f36-428e-4393-99e3-7e0844404dba/section1.pe
          SECTION UI = "QcomChargerDxeLA"

        }       
        FILE DRIVER = 11faed4c-b21f-4d88-8e48-c4c28a1e50df  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-11faed4c-b21f-4d88-8e48-c4c28a1e50df/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-11faed4c-b21f-4d88-8e48-c4c28a1e50df/section1.pe
          SECTION UI = "UsbPwrCtrlDxe"

        }       
        FILE DRIVER = 5a5cb8ca-9382-4e0c-b383-77fb517cd9eb  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-5a5cb8ca-9382-4e0c-b383-77fb517cd9eb/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-5a5cb8ca-9382-4e0c-b383-77fb517cd9eb/section1.pe
          SECTION UI = "AdcDxe"

        }       
        FILE DRIVER = f09ad92e-485c-9cdb-3e05-3385c38f94cc  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-f09ad92e-485c-9cdb-3e05-3385c38f94cc/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-f09ad92e-485c-9cdb-3e05-3385c38f94cc/section1.pe
          SECTION UI = "TsensDxe"

        }       
        FILE DRIVER = 7db0793a-4402-4be1-906e-d0fabad2707e  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-7db0793a-4402-4be1-906e-d0fabad2707e/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-7db0793a-4402-4be1-906e-d0fabad2707e/section1.pe
          SECTION UI = "DDRInfoDxe"

        }       
        FILE DRIVER = 94f8a6a7-dc34-4101-88c1-99179cceae83  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-94f8a6a7-dc34-4101-88c1-99179cceae83/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-94f8a6a7-dc34-4101-88c1-99179cceae83/section1.pe
          SECTION UI = "UsbfnDwc3Dxe"

        }       
        FILE DRIVER = 5af77f10-90df-4e7e-8325-a17ec09d5443  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-5af77f10-90df-4e7e-8325-a17ec09d5443/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-5af77f10-90df-4e7e-8325-a17ec09d5443/section1.pe
          SECTION UI = "UsbMsdDxe"

        }       
        FILE DRIVER = 3299a266-15f0-4346-8318-716336736d3e  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-3299a266-15f0-4346-8318-716336736d3e/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-3299a266-15f0-4346-8318-716336736d3e/section1.pe
          SECTION UI = "UsbDeviceDxe"

        }       
        FILE DRIVER = cd823a4d-7dec-4531-ae5d-4134fa4127b8  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-cd823a4d-7dec-4531-ae5d-4134fa4127b8/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-cd823a4d-7dec-4531-ae5d-4134fa4127b8/section1.pe
          SECTION UI = "UsbConfigDxe"

        }       
        FILE DRIVER = 3adf8dda-1850-44c5-8c63-bb991849bc6f  {
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-3adf8dda-1850-44c5-8c63-bb991849bc6f/section0.pe
          SECTION UI = "HashDxe"

        }       
        FILE DRIVER = 5f0937cd-73f9-445e-b320-bb6fd5d3cbde  {
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-5f0937cd-73f9-445e-b320-bb6fd5d3cbde/section0.pe
          SECTION UI = "CipherDxe"

        }       
        FILE DRIVER = 20583a66-3c26-4d9e-9a8c-e2dfa2914015  {
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-20583a66-3c26-4d9e-9a8c-e2dfa2914015/section0.pe
          SECTION UI = "MacDxe"

        }       
        FILE DRIVER = b0d3689e-11f8-43c6-8ece-023a29cec35b  {
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-b0d3689e-11f8-43c6-8ece-023a29cec35b/section0.pe
          SECTION UI = "RngDxe"

        }       
        INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf     
        FILE DRIVER = 1d317734-4083-47c6-83ea-e3a42f2a6bff  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-1d317734-4083-47c6-83ea-e3a42f2a6bff/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-1d317734-4083-47c6-83ea-e3a42f2a6bff/section1.pe
          SECTION UI = "PILDxe"

        }       
        FILE APPLICATION = eee9c2b1-16ca-4f34-87ea-2e6d1e160cc4  {
          SECTION UI = "QcomChargerApp"
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-eee9c2b1-16ca-4f34-87ea-2e6d1e160cc4/section1.pe

        }       
        FILE DRIVER = 9c1eb71f-dd6c-4ed5-9f6a-5cc0ca789f16  {
          SECTION DXE_DEPEX = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-9c1eb71f-dd6c-4ed5-9f6a-5cc0ca789f16/section0.dxe.depex
          SECTION PE32 = RedmiNote11Binaries/BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/volume-8/file-9c1eb71f-dd6c-4ed5-9f6a-5cc0ca789f16/section1.pe
          SECTION UI = "ShmBridgeDxe"

        }
}