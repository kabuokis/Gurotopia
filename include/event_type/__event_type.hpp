#pragma once

extern std::unordered_map<ENetEventType, std::function<void(ENetEvent&)>> event_pool;
