#pragma once

#include <ll/mod/NativeMod.h>

class ClangeMeMod {
    ll::mod::NativeMod& mSelf;

public:
    ClangeMeMod();
    ~ClangeMeMod() = default;

    [[nodiscard]] ll::mod::NativeMod& getSelf() const { return mSelf; }

    bool load();
    bool enable();
    bool disable();
    bool unload();
};
