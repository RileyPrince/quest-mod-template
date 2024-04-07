#include "main.hpp"
#include "hooks.hpp"

static modloader::ModInfo modInfo{ MOD_ID, VERSION, 0 };


MOD_EXPORT_FUNC void setup(CModInfo& info) {
    info = modInfo.to_c();
	logger.info("Completed Setup!");
}

MOD_EXPORT_FUNC void late_load() {
    il2cpp_functions::Init();

    Hooks::InstallHooks();
    logger.info("Completed Load");
}