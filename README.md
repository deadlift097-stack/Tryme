# LeviLauncher Android Mod Template

A template project for building native client-side optimization mods for Minecraft Bedrock Edition on LeviLauncher.

## Building
```bash
cmake -B build-arm64-v8a -G "Ninja" -DCMAKE_TOOLCHAIN_FILE="$ANDROID_NDK/build/cmake/android.toolchain.cmake" -DANDROID_ABI="arm64-v8a" -DANDROID_PLATFORM="android-28" -DMOD_LIBRARY_NAME="clange_me"
cmake --build build-arm64-v8a
```
