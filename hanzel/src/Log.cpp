#include "spdlog/common.h"
#include <hanzel/Log.h>
#include <spdlog/sinks/stdout_color_sinks.h>

namespace Hanzel
{
std::shared_ptr<spdlog::logger> Log::coreLogger;
std::shared_ptr<spdlog::logger> Log::clientLogger;

void Log::init()
{
    spdlog::set_pattern("%^[%T] %n: %v%$");
    coreLogger = spdlog::stdout_color_mt("HANZEL");
    coreLogger->set_level(spdlog::level::warn);
    clientLogger = spdlog::stdout_color_mt("APP");
    clientLogger->set_level(spdlog::level::trace);
}
} // namespace Hanzel