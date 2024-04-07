#pragma once

#include "scotland2/shared/loader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "paper/shared/logger.hpp"

constexpr auto logger = Paper::ConstLoggerContext(MOD_ID);

#define MOD_EXPORT __attribute__((visibility("default")))
#define MOD_EXPORT_FUNC extern "C" MOD_EXPORT