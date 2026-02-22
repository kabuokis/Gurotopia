#pragma once

extern std::unordered_map<std::string, std::function<void(ENetEvent&, const std::vector<std::string> &&)>> dialog_return_pool;
