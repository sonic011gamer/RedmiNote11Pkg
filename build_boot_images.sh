#!/bin/bash

cat ./BootShim/BootShim.Epsilon.bin ./Build/SurfaceDuo1-AARCH64/DEBUG_CLANG38/FV/SM6225_EFI.fd ./ImageResources/dummykernel > ./ImageResources/Epsilon/bootpayload.bin

python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/Epsilon/bootpayload.bin \
  --ramdisk ./ImageResources/dummykernel \
  -o ./ImageResources/Epsilon/uefi.img \
  --pagesize 4096 \
  --header_version 3 \
  --cmdline "" \
  --dtb ./ImageResources/Epsilon/dtb \
  --base 0x0 \
  --os_version 12.0.0 \
  --os_patch_level 2022-08-01 \
  --second_offset 0xf00000