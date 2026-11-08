#include "MyMod.h"
#include <ll/mod/ModManager.h>

ClangeMeMod::ClangeMeMod() : mSelf(*ll::mod::NativeMod::current()) {}

bool ClangeMeMod::load() {
    getSelf().getLogger().debug("Loading ClangeMe optimization mod...");
    return true;
}

bool ClangeMeMod::enable() {
    getSelf().getLogger().debug("Enabling ClangeMe optimization mod...");
    return true;
}

bool ClangeMeMod::disable() {
    getSelf().getLogger().disable();
    return true;
}

bool ClangeMeMod::unload() {
    return true;
}

PL_REGISTER_MOD(ClangeMeMod);
