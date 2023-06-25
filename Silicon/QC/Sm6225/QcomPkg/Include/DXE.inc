
  # First, install the PCD driver and call DxeInit
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  
# INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  # INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
  INF QcomPkg/PatchedBinaries/ClockDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  # INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  FILE DRIVER = 4b4973ee-401b-4f36-a6a9-533dfccdfc33 {
          SECTION PE32 = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/TzDxe/ScmDxeLA.efi
          SECTION UI = "ScmDxeLA"
  }
  # INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  FILE DRIVER = 6b38f7b4-ad98-40e9-9093-aca2b5a253c4 {
          SECTION PE32 = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.efi
          SECTION UI = "DiskIoDxe"
  }
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
  INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  # INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF QcomPkg/PatchedBinaries/UFSDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  # INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
  FILE DRIVER = cf6dfc66-14ab-4e13-84db-9c02912d1404 {
          SECTION PE32 = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/TzDxe/TzDxeLA.efi
          SECTION UI = "TzDxeLA"
  }
  # INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/VariableDxe/VariableDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
#  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/PILDxe/PILDxe.inf
    
  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/FontDxe/FontDxe.inf
  # INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/QcomBds/QcomBds.inf
  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf
 
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
    
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  # INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF QcomPkg/PatchedBinaries/ButtonsDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF SurfaceDuoFamilyPkg/Driver/GpioButtons/GpioButtons.inf
  INF SurfaceDuoFamilyPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/GpiDxe/GpiDxe.inf  
  FILE FREEFORM = 3adf8dda-1850-44c5-8c63-bb991849bc6f {
      SECTION PE32 = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/HashDxe/HashDxe.efi
      SECTION UI = "HashDxe"
  }
  FILE FREEFORM = 5f0937cd-73f9-445e-b320-bb6fd5d3cbde {
      SECTION PE32 = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/CipherDxe/CipherDxe.efi
      SECTION UI = "CipherDxe"
  }
  FILE FREEFORM = 20583a66-3c26-4d9e-9a8c-e2dfa2914015 {
      SECTION PE32 = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/MacDxe/MacDxe.efi
      SECTION UI = "MacDxe"
  }

  FILE FREEFORM = b0d3689e-11f8-43c6-8ece-023a29cec35b {
      SECTION PE32 = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/SocPkg/DivarPkg/Drivers/RNGDxe/RngDxe.efi
      SECTION UI = "RngDxe"
  }
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
   
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/QcomMpmTimerDxe/QcomMpmTimerDxe.inf
  
  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf

INF BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/QcomPkg/Application/QcomChargerApp/QcomChargerApp.inf

FILE FREEFORM = A91D838E-A5FA-4138-825D-455E2303079E {
    SECTION UI = "BDS_Menu.cfg"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/BDS_Menu.cfg
}


FILE FREEFORM = 037CC4C1-0EBE-4494-9803-DC5BF0824220 {
    SECTION UI = "Panel_k7_38_0c_0a_fhdp_video.xml"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/Panel_k7_38_0c_0a_fhdp_video.xml
}


FILE FREEFORM = BFE556BA-ECCA-4C86-A82D-477FF15B4684 {
    SECTION UI = "Panel_k7_38_0c_0b_fhdp_video.xml"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/Panel_k7_38_0c_0b_fhdp_video.xml
}


FILE FREEFORM = 02E0AF91-5D44-424F-828F-211ADC520B0C {
    SECTION UI = "Panel_truly_td4330_fhd_cmd.xml"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/Panel_truly_td4330_fhd_cmd.xml
}


FILE FREEFORM = 9BAE75D9-A217-4B31-9DCD-00D2609BC6AE {
    SECTION UI = "Panel_truly_td4330_fhd_vid.xml"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/Panel_truly_td4330_fhd_vid.xml
}


FILE FREEFORM = 9BAE75D9-A217-4B31-9DCD-00D2609B6784 {
    SECTION UI = "Panel_truly_nt36525_hd_plus_vid.xml"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/Panel_truly_nt36525_hd_plus_vid.xml
}


FILE FREEFORM = 9BAE75D9-A217-4B31-9DCD-00D2609B6785 {
    SECTION UI = "Panel_nt36672e_fhd_plus_90hz_vid.xml"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/Panel_nt36672e_fhd_plus_90hz_vid.xml
}


FILE FREEFORM = 3E5584ED-05D4-4267-9048-0D47F76F4248 {
    SECTION UI = "battery_symbol_Soc10.bmp"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/battery_symbol_Soc10.bmp
}


FILE FREEFORM = 4753E815-DDD8-402D-BF69-9B8C4EB7573E {
    SECTION UI = "battery_symbol_NoBattery.bmp"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/battery_symbol_NoBattery.bmp
}


FILE FREEFORM = 03DED53E-BECD-428F-9F79-5ABA64C58445 {
    SECTION UI = "battery_symbol_Nocharger.bmp"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/battery_symbol_Nocharger.bmp
}


FILE FREEFORM = 8B86CD38-C772-4FCF-85AA-345B2B3C1AB4 {
    SECTION UI = "battery_symbol_LowBatteryCharging.bmp"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/battery_symbol_LowBatteryCharging.bmp
}


FILE FREEFORM = 3FD97907-93F1-4349-AF3C-3B68B0A5E626 {
    SECTION UI = "battery_symbol_LowBattery.bmp"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/battery_symbol_LowBattery.bmp
}


FILE FREEFORM = B0F8D1BE-5353-4812-B1F6-07E7768204CC {
    SECTION UI = "battery_symbol_DebugBoot.bmp"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/battery_symbol_DebugBoot.bmp
}


FILE FREEFORM = F9E8F683-E065-4E09-B4F9-0230D7CECD08 {
    SECTION UI = "battery_symbol_DebugStay.bmp"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/battery_symbol_DebugStay.bmp
}


FILE FREEFORM = E2EA5A4F-98BD-4203-AB49-399505DDFB7D {
    SECTION UI = "tsens_thermal_symbol.bmp"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/tsens_thermal_symbol.bmp
}


FILE FREEFORM = C72FB1A9-5527-4E13-BAC4-F671D0330145 {
    SECTION UI = "tsens_thermal_err_symbol.bmp"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/tsens_thermal_err_symbol.bmp
}


FILE FREEFORM = A1E235DE-E825-4591-9623-C43175811826 {
    SECTION UI = "SecParti.cfg"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/SecParti.cfg
}


FILE FREEFORM = 21E9BDD9-6C3F-4F10-84A5-BBEC322741F1 {
    SECTION UI = "uefipil.cfg"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/uefipil.cfg
}


FILE FREEFORM = 45FE4B7C-150C-45DA-A021-4BEB2048EC6F {
    SECTION UI = "QcomChargerCfg.cfg"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/QcomChargerCfg.cfg
}


FILE FREEFORM = F780C779-DD7C-47CD-BD1A-5EB414C51704 {
    SECTION UI = "BATTERY.PROVISION"
    SECTION RAW = BOOT.XF.4.1-00316-KAMORTALAZ-1.449341.1/RawFiles/BATTERY.PROVISION
}

